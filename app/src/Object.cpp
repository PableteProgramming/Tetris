#include "Object.h"
#include <iostream>
Object::Object(int _x, int _y, float _rotation,sf::Texture& texture){
    x=_x;
    y=_y;
    rotation=_rotation;
    //img(temptexture);
    img.setTexture(texture);
    img.setRotation(rotation);
    img.setPosition(x,y);
}

void Object::Draw(sf::RenderWindow &window){
    window.draw(img);
}
