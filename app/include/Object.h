#include <utility>
#include <SFML/Graphics.hpp>
#include "Manager.h"
#include "Rect.h"

std::vector<std::vector<int>> RotateMap(int,std::vector<std::vector<int>>);
void PrintMap(std::vector<std::vector<int>>);
class Object{
private:
    float rotation;
    int x;
    int y;
    std::pair<int,int> pos;
    Manager manager;
    std::vector<std::vector<int>> map;
    std::vector<Rect> rects;
    void FillRects(std::vector<std::vector<int>>);
    void Rotate();
    void Configure();
    
public:
    Object(int,int,float,Manager,std::vector<std::vector<int>>);
    void Draw(sf::RenderWindow&);
};
