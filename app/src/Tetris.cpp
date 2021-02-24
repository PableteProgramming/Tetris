#include <Tetris.h>

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
        std::vector<int> r1;
        for(int x=0;x<width;x++){
            r1.clear();
            for(int y=height-1;y>=0;y--){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
        //PrintMap(r);
    }
    else if(angle==180 || (angle>=135 && angle<=180) || (angle>=180 && angle<225)){
        //180º
        int height= map.size();
        int width= map[0].size();
        std::vector<int> r1;
        for(int y=height-1;y>=0;y--){
            r1.clear();
            for(int x=width-1;x>=0;x--){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
    }
    else if(angle==270 || (angle>=225 && angle<=270) || (angle>=270 && angle<315)){
        //270º = -90º
        int height= map.size();
        int width= map[0].size();
        std::vector<int> r1;
        for(int x=width-1;x>=0;x--){
            r1.clear();
            for(int y=0;y<height;y++){
                r1.push_back(map[y][x]);
            }
            r.push_back(r1);
        }
    }
    else{
        //0º
        r=map;
    }

    //std::cout<<"r.size()= "<<r.size()<<std::endl;
    return r;
}


void PrintMap(std::vector<std::vector<int>> map){
    int _width= map[0].size();
    int _height= map.size();
    std::cout<<"Width: "<<_width<<"; Height: "<<_height<<std::endl;
    for(int y=0; y<_height;y++){
        std::cout<<"[";
        for(int x=0; x<_width;x++){
            std::cout<<map[y][x]<<",";
        }
        std::cout<<"]"<<std::endl;
    }
}


std::vector<std::vector<int>> Map::lright= {
        {3,0},
        {3,0},
        {3,0},
        {3,3}
};

std::vector<std::vector<int>> Map::square= {
        {4,4},
        {4,4}
};

std::vector<std::vector<int>> Map::lleft= {
        {0,1},
        {0,1},
        {0,1},
        {1,1}
};

std::vector<std::vector<int>> Map::line={
    {1},
    {1},
    {1},
    {1}
};

std::vector<std::vector<int>> Map::inversedT={
    {0,1,0},
    {1,1,1}
};

std::vector<std::vector<int>> Map::inversedz={
    {0,1,1},
    {1,1,0}
};

std::vector<std::vector<int>> Map::z={
    {1,1,0},
    {0,1,1}
};

std::vector<std::pair<int,sf::Color>> Map::ColorSet={
    {1,sf::Color{0,0,255}/*blue*/},
    {2,sf::Color{0,255,0}/*green*/},
    {3,sf::Color{255,102,0}/*orange*/},
    {4,sf::Color{204,0,204}/*purple*/},
    {5,sf::Color{255,0,0}/*red*/},
    {6,sf::Color{255,255,255}/*white*/},
    {7,sf::Color{0,0,0}/*black*/}
};

void fillMap(int _map[W_HEIGHT/scale][W_WIDTH/scale], int v){
    for(int y=0; y<(W_HEIGHT/scale);y++){
        for(int x=0; x<(W_WIDTH/scale); x++){
            _map[y][x]=v;
        }
    }
}