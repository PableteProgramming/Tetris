#include <utility>
#include <SFML/Graphics.hpp>
#include "Manager.h"
#include "Rect.h"

std::vector<std::vector<int>> RotateMap(int,std::vector<std::vector<int>>);
void PrintMap(std::vector<std::vector<int>>);
class Object{
private:
    int x;
    int y;
    std::pair<int,int> pos;
    Manager manager;
    int width;
    int speed;
    int height;
    std::vector<std::vector<int>> map;
    std::vector<Rect> rects;
    void FillRects(std::vector<std::vector<int>>);
    void Configure();
public:
    Object(int,int,int,Manager,std::vector<std::vector<int>>,int=1);
    void Draw(sf::RenderWindow&);
    void Move(int,int);
    std::pair<int,int> GetPos(){return pos;};
    int GetWidth(){return width;};
    void Rotate(int);
    void SetSpeed(int);
    int GetSpeed(){return speed;};
};
