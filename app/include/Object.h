#include <utility>
#include <SFML/Graphics.hpp>
#include "Manager.h"
void CopyBidArrayElems(int**,int**,int,int);
class Object{
private:
    float rotation;
    int x;
    int y;
    std::pair<int,int> pos;
    sf::Sprite img;
    Manager manager;
    int** map;
    int mapwidth;
    int mapheight;
public:
    Object(int,int,float,sf::Texture&,Manager,int**,int,int);
    void Draw(sf::RenderWindow&);
};
