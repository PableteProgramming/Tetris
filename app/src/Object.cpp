#include "Object.h"
#include <iostream>
Object::Object(int _x, int _y, float _rotation,sf::Texture& texture,Manager _manager,int** _map, int _mapwidth, int _mapheight){
    x=_x;
    y=_y;
    rotation=_rotation;
    //img(temptexture);
    img.setTexture(texture);
    img.setRotation(rotation);
    img.setPosition(x,y);
    manager.SetScale(_manager.GetScale());
    manager.SetSets(_manager.GetSets());
    //map
    mapwidth= _mapwidth;
    mapheight= _mapheight;
    CopyBidArrayElems(_map,map,mapwidth,mapheight);
    
}

void Object::Draw(sf::RenderWindow &window){
    window.draw(img);
}