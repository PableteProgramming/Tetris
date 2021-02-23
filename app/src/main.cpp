#include <main.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "My window");

    std::vector<std::vector<int>> actmap= Map::z;

    int x=scale;
    int y=scale;
    Manager manager(scale,Map::ColorSet);

    Object piece(x,y,0,manager,actmap,W_WIDTH,W_HEIGHT);

    window.clear();
    piece.Draw(window);
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
    //std::cout<<"time to be passed for each frame: "<<frametime<<std::endl;
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
                if((x+scale)<=W_WIDTH-piece.GetWidth()){
                    rightpressed=true;
                    x+= scale;
                }
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            if(!upkeypressed){
                upkeypressed=true;
                piece.Rotate(90);
            }
        }


        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            piece.SetSpeed(2);
        }
        else{
            piece.SetSpeed(1);
        }

        double toadd= clock.restart().asSeconds();
        timepassed+= toadd;
        moveclicstimepassed+=toadd;
        rotateclicstimepassed+=toadd;
        

        if(timepassed>= totaltimetopass) {
			//Update the last_render variable
            timepassed=0;			
            piece.Move(x,W_HEIGHT);	
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
        piece.Draw(window);
        window.display();
    }

    return 0;
}