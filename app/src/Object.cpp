#include <Object.h>
#include <iostream>
Object::Object(int _x, int _y, int rotation,Manager _manager,std::vector<std::vector<int>> _map,int _W_width, int _W_height,int _speed){
    x=_x;
    y=_y;
    manager.SetScale(_manager.GetScale());
    manager.SetSets(_manager.GetSets());
    //map
    speed=_speed;
    map=_map;
    W_width=_W_width;
    W_height= _W_height;
    Rotate(rotation);
    Configure();
}

void Object::Draw(sf::RenderWindow &window){
    for(int i=0; i<rects.size();i++){
        Rect act= rects[i];
        sf::RectangleShape recttodraw;
        recttodraw.setPosition(act.GetX()*manager.GetScale()+x,act.GetY()*manager.GetScale()+y);
        recttodraw.setSize(sf::Vector2f(act.GetWidth()*manager.GetScale(),act.GetHeight()*manager.GetScale()));
        recttodraw.setFillColor(act.GetColor());
        window.draw(recttodraw);
    }
}

void Object::FillRects(std::vector<std::vector<int>> _map){
    int _width= _map[0].size();
    int _height= _map.size();
    for(int y=0; y<_height;y++){
        for(int x=0; x<_width;x++){
            if(_map[y][x]>0){
                sf::Color c= manager.FindColorOfValue(map[y][x]);
                Rect recttopushback(x,y,1,1,c);
                rects.push_back(recttopushback);
            }
        }
    }
}

void Object::Rotate(int rotation){
    map= RotateMap(rotation,map);
    Configure();
    //check if rotation is not out of the screen or something similar
    //x
    if(x<0){
        x=0;
        //Configure();
    }
    else if(x>(W_width-width)){
        x= W_width-width;
        //Configure();
    }

    //y
    if(y<0){
        y=0;
        //Configure();
    }
    else if(y>(W_height-height)){
        y= W_height-height;
        //Configure();
    }

}

void Object::Configure(){
    height= map.size()*manager.GetScale();
    width= map[0].size()*manager.GetScale();
    rects.clear();
    FillRects(map);
}

void Object::Move(int _x, int _height){
    x=_x;
    if(y+(speed*manager.GetScale())<= _height-height){
        y+=speed*manager.GetScale();
    }
}

void Object::SetSpeed(int _speed){
    speed=_speed;
}