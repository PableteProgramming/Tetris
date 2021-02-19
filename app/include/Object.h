#include <utility>
#include <SFML/Graphics.hpp>
class Object{
private:
    float rotation;
    int x;
    int y;
    std::pair<int,int> pos;
    sf::Sprite img;
public:
    Object(int,int,float,sf::Texture&);
    void Draw(sf::RenderWindow&);
};
