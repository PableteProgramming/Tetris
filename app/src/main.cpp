#include <main.h>

int main()
{
    sf::Font font;
    if(!font.loadFromFile(FONT_PATH+"/arial.ttf")){
        return EXIT_FAILURE;
    }

    //Creating the main manager object
    Manager manager(scale,Map::ColorSet,sf::Color{126,129,130});
    std::vector<Object> pieces;


    //creating game screen limits to draw
    std::vector<std::pair<Manager,std::pair<Coord,Coord>>> offsetsToDraw;
    offsetsToDraw.clear();
    offsetsToDraw.push_back(std::make_pair(manager,std::make_pair(Coord(0,0),Coord(scale,W_HEIGHT))));
    offsetsToDraw.push_back(std::make_pair(manager,std::make_pair(Coord(0,0),Coord(W_WIDTH,scale))));
    offsetsToDraw.push_back(std::make_pair(manager,std::make_pair(Coord(0,W_HEIGHT-scale),Coord(W_WIDTH,W_HEIGHT))));
    offsetsToDraw.push_back(std::make_pair(manager,std::make_pair(Coord(GAME_SCREEN_WIDTH+(LEFT_OFFSET*scale),0),Coord(GAME_SCREEN_WIDTH+(LEFT_OFFSET*scale)+scale,W_HEIGHT))));
    offsetsToDraw.push_back(std::make_pair(manager,std::make_pair(Coord(W_WIDTH-scale,0),Coord(W_WIDTH,W_HEIGHT))));


    //creating actualfps variable for double speed
    double actualfps=fps;


    //init random numbers
    srand(time(NULL));


    //creating vector with all possible pieces
    std::vector<std::vector<std::vector<int>>> allpieces;
    allpieces.clear();
    allpieces.push_back(Map::lright);
    allpieces.push_back(Map::square);
    allpieces.push_back(Map::lleft);
    allpieces.push_back(Map::line);
    allpieces.push_back(Map::inversedT);
    allpieces.push_back(Map::z);
    allpieces.push_back(Map::inversedz);


    //creating window
    sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "My window");


    //getting random indexes
    int index= rand()%(allpieces.size());
    int nextindex= rand()%(allpieces.size());


    //getting random pieces
    std::vector<std::vector<int>> actmap= allpieces[index];
    std::vector<std::vector<int>> nextmap= allpieces[nextindex];
   

    //defining startx pos and stary pos
    int startx=(((int)(COLS/2))*scale)+(LEFT_OFFSET*scale);
    int starty=0;
    int x= startx;
    int y= starty;


    //Changing pieces color by getting random color
    ChangeColor(actmap,(rand()%(Map::ColorSet.size())+1));
    ChangeColor(nextmap,(rand()%(Map::ColorSet.size())+1));


    //adding actual piece and nextpiece to the vector
    pieces.clear();
    pieces.push_back(Object(x,y,0,manager,nextmap,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map));
    Object actpiece(x,y,0,manager,actmap,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map);
    pieces.push_back(actpiece);


    //Drawing initial display
    window.clear();
    actpiece.Draw(window);
    window.display();


    //creating all fps needed variables
    sf::Clock clock;
    double timepassed;
    double totaltimetopass= 1/actualfps;
    double moveclicstimepassed;
    double moveclicstotaltimetopass= 1/moveclicsfps;
    double rotateclicstimepassed;
    double rotateclicstotaltimetopass= 1/rotateclicsfps;
    bool rightpressed=false;
    bool leftpressed=false;
    bool upkeypressed=false;


    //init map with 0
    fillMap(map,0);


    //main while loop
    while (window.isOpen())
    {
        //check window events
        sf::Event event;
        while (window.pollEvent(event))
        {
            //close the window if wanted
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        

        //Detecting left, right and up keys
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            if(!leftpressed){
                actpiece.Move(-1,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map);
                leftpressed=true;
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            if(!rightpressed){
                actpiece.Move(1,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map);
                rightpressed=true;
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            if(!upkeypressed){
                upkeypressed=true;
                actpiece.Rotate(map,90);
                x= actpiece.GetX();
            }
        }


        //Getting key down and changing fps
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            actualfps=fps*2;
            totaltimetopass=1/actualfps;
        }
        else{
            actualfps=fps;
            totaltimetopass=1/actualfps;
        }


        //adding the time passed to the fps variables
        double toadd= clock.restart().asSeconds();
        timepassed+= toadd;
        moveclicstimepassed+=toadd;
        rotateclicstimepassed+=toadd;
        

        //Checking if time passed and need to update
        if(timepassed>= totaltimetopass) {
            timepassed=0;			
            actpiece.Move(0,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map,true);
            if(actpiece.IsDead()){

                //Stop moving this piece and move another
                std::vector<Rect> rectsToAdd= actpiece.GetRects();
                UpdateMap(map,rectsToAdd,actpiece,window);
                UpdatePiece(startx,starty,x,y,pieces,actpiece,allpieces,nextindex,nextmap,manager,GAME_SCREEN_WIDTH,GAME_SCREEN_HEIGHT,map);
            }
        }
        if(moveclicstimepassed >= moveclicstotaltimetopass){
            moveclicstimepassed=0;
            rightpressed=false;
            leftpressed=false;
        }
        if(rotateclicstimepassed>= rotateclicstotaltimetopass){
            rotateclicstimepassed=0;
            upkeypressed=false;
        }


        //clearing window and drawing all again
        window.clear();
        DrawOffset(offsetsToDraw,window);
        DrawMap(window,map,manager);
        actpiece.Draw(window);
        DrawNextPiece(
            GAME_SCREEN_WIDTH/scale+LEFT_OFFSET+((INFO_SCREEN_WIDTH/scale)/2)-2,
            2,25,Text,font,
            GAME_SCREEN_WIDTH/scale+LEFT_OFFSET+((INFO_SCREEN_WIDTH/scale)/2)-1,
            7,nextmap,window,manager);
        window.display();
    }
    //end of main while loop


    //end of the program
    return 0;
}