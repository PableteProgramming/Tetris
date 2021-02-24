#include <main.h>

int main()
{
    srand(time(NULL));
    std::vector<std::vector<std::vector<int>>> allpieces;
    allpieces.clear();
    allpieces.push_back(Map::lright);
    allpieces.push_back(Map::square);
    allpieces.push_back(Map::lleft);
    allpieces.push_back(Map::line);
    allpieces.push_back(Map::inversedT);
    allpieces.push_back(Map::z);
    allpieces.push_back(Map::inversedz);

    sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "My window");

    /*std::cout<<"Width: "<<W_WIDTH/scale<<std::endl;
    std::cout<<"HEIGHT: "<<W_HEIGHT/scale<<std::endl;*/

    int index= rand()%(allpieces.size());
    int nextindex= rand()%(allpieces.size());

    std::cout<<"before init..."<<std::endl;

    std::vector<std::vector<int>> actmap= allpieces[index];
    std::vector<std::vector<int>> nextmap= allpieces[nextindex];

    std::cout<<"before init 2..."<<std::endl;

    //error from here    
    int startx=scale;
    int starty=scale;
    int x= startx;
    int y= starty;

    Manager manager(scale,Map::ColorSet);
    std::vector<Object> pieces;

    pieces.clear();
    pieces.push_back(Object(x,y,0,manager,nextmap,W_WIDTH,W_HEIGHT));
    pieces.push_back(Object(x,y,0,manager,actmap,W_WIDTH,W_HEIGHT));

    Object actpiece(x,y,0,manager,actmap,W_WIDTH,W_HEIGHT)/*pieces[pieces.size()-1]*/;

    //to here

    std::cout<<"after init..."<<std::endl;

    window.clear();
    actpiece.Draw(window);
    window.display();
    //window.setFramerateLimit(fps);

    sf::Clock clock;
    double timepassed;
    double totaltimetopass= 1/fps;
    double moveclicstimepassed;
    double moveclicstotaltimetopass= 1/moveclicsfps;
    double rotateclicstimepassed;
    double rotateclicstotaltimetopass= 1/rotateclicsfps;
    bool rightpressed=false;
    bool leftpressed=false;
    bool upkeypressed=false;


    fillMap(map,0);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            if(!leftpressed){
                if(x>=(0+scale)){
                    leftpressed=true;
                    x-= scale;
                }
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            if(!rightpressed){
                if((x+scale)<=W_WIDTH-actpiece.GetWidth()){
                    rightpressed=true;
                    x+= scale;
                }
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            if(!upkeypressed){
                upkeypressed=true;
                actpiece.Rotate(90);
                x= actpiece.GetX();
            }
        }


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            actpiece.SetSpeed(2);
        }
        else{
            actpiece.SetSpeed(1);
        }

        double toadd= clock.restart().asSeconds();
        timepassed+= toadd;
        moveclicstimepassed+=toadd;
        rotateclicstimepassed+=toadd;
        

        if(timepassed>= totaltimetopass) {
			//Update the last_render variable
            timepassed=0;			
            actpiece.Move(x,W_HEIGHT);
            if(actpiece.IsDead()){
                //Stop moving this piece and move another
                std::vector<Rect> rectsToAdd= actpiece.GetRects();
                for(int i=0; i<rectsToAdd.size();i++){
                    Rect actrect= rectsToAdd[i];
                    std::cout<<"ma["<<actrect.GetY()+(actpiece.GetY()/scale)<<"]["<<actrect.GetX()+(actpiece.GetX()/scale)<< "]="<<manager.FindValueOfColor(actrect.GetColor())<<std::endl;
                    std::cout<<"actrect.GetY(): "<<actrect.GetY()<<std::endl;
                    map[actrect.GetY()+(actpiece.GetY()/scale)][actrect.GetX()+(actpiece.GetX()/scale)]= manager.FindValueOfColor(actrect.GetColor());
                }
                x=startx;
                y=starty;
                actpiece= pieces[0];
                pieces[1]= pieces[0];
                nextindex= rand()%(allpieces.size());
                nextmap= allpieces[nextindex];
                pieces[0]=Object(x,y,0,manager,nextmap,W_WIDTH,W_HEIGHT);
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

        window.clear();
        DrawMap(window,map,manager);
        actpiece.Draw(window);
        window.display();
    }

    return 0;
}