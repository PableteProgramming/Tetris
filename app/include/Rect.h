#include <SFML/Graphics.hpp>
class Rect{
private:
    int x;
    int y;
    int width;
    int height;
    sf::Color color;
public:
    Rect(int,int,int,int,sf::Color);
    int GetX(){return x;};
    int GetY(){return y;};
    int GetWidth(){return width;};
    int GetHeight(){return height;};
    sf::Color GetColor(){return color;};
};