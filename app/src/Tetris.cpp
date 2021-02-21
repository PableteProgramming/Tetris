#include "Tetris.h"
#include <cmath>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    std::vector<std::pair<int,sf::Color>> sets;
    sets.clear();
    sets.push_back(std::make_pair(1,sf::Color{0,0,255}/*blue*/));
    sets.push_back(std::make_pair(2,sf::Color{0,255,0}/*green*/));
    sets.push_back(std::make_pair(3,sf::Color{255,102,0}/*orange*/));
    sets.push_back(std::make_pair(4,sf::Color{204,0,204}/*purple*/));
    sets.push_back(std::make_pair(5,sf::Color{255,0,0}/*red*/));
    sets.push_back(std::make_pair(6,sf::Color{255,255,255}/*white*/));
    sets.push_back(std::make_pair(7,sf::Color{0,0,0}/*black*/));

    std::vector<std::vector<int>> lmap= {
        {1,0},
        {1,0},
        {1,0},
        {1,1},
    };

    Manager manager(scale,sets);

    Object piece(0,0,90,manager,lmap);

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
        
        window.clear();
        piece.Draw(window);
        window.display();
    }

    return 0;
}

std::vector<std::vector<int>> RotateMap(int angle,std::vector<std::vector<int>> map){
    std::vector<std::vector<int>> r;
    r.clear();
    //std::cout<<"map.size()= "<<map.size()<<std::endl;
    //std::cout<<"angle: "<<angle<<std::endl;
    if(angle<=0 || angle>=360 || (angle>0 && angle<45) || (angle>=315 && angle <=360)){
        //0º
        //std::cout<<"all right"<<std::endl;
        r=map;
    }
    else if(angle==90 || (angle>=45 && angle<=90) || ( angle>=90 && angle<135)){
        //90º
        int height= map.size();
        int width= map[0].size();
        int temparray[height][width];
        std::cout<<"width: "<<width<<" ; height: "<<height<<std::endl;
        for(int y=0; y<height;y++){
            for(int x=0; x<width;x++){
                //map[y][x]
                int _x= y;
                int _y = x;
                _x-=(height-1);
                _x= abs(_x);
                std::cout<<"r["<<_y<<"]["<<_x<<"]= "<<map[y][x]<<std::endl;
                temparray[_y][_x]= map[y][x];
            }
        }
        std::vector<int> r1;
        for(int y=0; y<height;y++){
            for(int x=0; x<width;x++){
                r1.clear();
                r1.push_back(temparray[y][x]);
            }
            r.push_back(r1);
        }

    }
    else if(angle==180 || (angle>=135 && angle<=180) || (angle>=180 && angle<225)){
        //180º
        int height= map.size();
        int width= map[0].size();
        //
        r=map;
    }
    else if(angle==270 || (angle>=225 && angle<=270) || (angle>=270 && angle<315)){
        //270º = -90º
        int height= map.size();
        int width= map[0].size();
        //
        r=map;
    }
    else{
        //0º
        r=map;
    }

    //std::cout<<"r.size()= "<<r.size()<<std::endl;
    return r;
}
