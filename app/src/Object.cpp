#include "Object.h"
#include <iostream>
Object::Object(int _x, int _y, float _rotation/*,sf::Texture& texture*/,Manager _manager,std::vector<std::vector<int>> _map){
    x=_x;
    y=_y;
    rotation=_rotation;
    //img(temptexture);
    //img.setTexture(texture);
    //img.setRotation(rotation);
    //img.setPosition(x,y);
    manager.SetScale(_manager.GetScale());
    manager.SetSets(_manager.GetSets());
    //map
    map=_map;
    rects.clear();
    FillRects(map);
}

void Object::Draw(sf::RenderWindow &window){
    //img.setPosition(x*manager.GetScale(),y*manager.GetScale());
    //img.setRotation(rotation);
    //window.draw(img);
    for(int i=0; i<rects.size();i++){
        Rect act= rects[i];
        sf::RectangleShape recttodraw;
        recttodraw.setPosition(act.GetX()*manager.GetScale()+x,act.GetY()*manager.GetScale()+y);
        recttodraw.setSize(sf::Vector2f(act.GetWidth()*manager.GetScale(),act.GetHeight()*manager.GetScale()));
        recttodraw.setFillColor(sf::Color::Blue);
        window.draw(recttodraw);
    }
}

void Object::FillRects(std::vector<std::vector<int>> _map){
    int _width= _map[0].size();
    int _height= _map.size();
    //std::cout<<"width= "<<_width<<std::endl;
    //std::cout<<"height= "<<_height<<std::endl;
    for(int y=0; y<_height;y++){
        for(int x=0; x<_width;x++){
            if(_map[y][x]>0){
                //std::cout<<"_map["<<y<<"]["<<x<<"]="<<_map[y][x]<<std::endl;
                Rect recttopushback(x,y,1,1);
                rects.push_back(recttopushback);
                //std::cout<<"rect added: x="<<recttopushback.GetX()<<"; y="<<recttopushback.GetY()<<std::endl;
            }
        }
    }
}