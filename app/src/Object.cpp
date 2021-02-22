#include "Object.h"
#include <iostream>
Object::Object(int _x, int _y, float _rotation,Manager _manager,std::vector<std::vector<int>> _map){
    x=_x;
    y=_y;
    rotation=_rotation;
    manager.SetScale(_manager.GetScale());
    manager.SetSets(_manager.GetSets());
    //map
    map=_map;
    Rotate();
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

void Object::Rotate(){
    map= RotateMap(rotation,map);
    Configure();
}

void Object::Configure(){
    pos.first=x;
    pos.second=y;
    height= map.size()*manager.GetScale();
    width= map[0].size()*manager.GetScale();
    rects.clear();
    FillRects(map);
}

void Object::Move(int _x, int _height){
    x=_x;
    if(y+manager.GetScale()<= _height-height){
        y+=manager.GetScale();
    }
    pos.first=x;
    pos.second=y;
}