#include <utility>
#include <SFML/Graphics.hpp>
#include "Manager.h"
#include "Rect.h"
class Object{
private:
    float rotation;
    int x;
    int y;
    std::pair<int,int> pos;
    //sf::Sprite img;
    Manager manager;
    std::vector<std::vector<int>> map;
    std::vector<Rect> rects;
    void FillRects(std::vector<std::vector<int>>);
public:
    Object(int,int,float/*,sf::Texture&*/,Manager,std::vector<std::vector<int>>);
    void Draw(sf::RenderWindow&);
};
