#include <string>
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
const std::string RES_PATH= "resources";
const std::string IMG_PATH= RES_PATH+"/img";
const int scale= 15;

std::vector<std::vector<int>> RotateMap(int,std::vector<std::vector<int>>);
void PrintMap(std::vector<std::vector<int>>);
const double fps= 5;
const double moveclicsfps=3;
const double rotateclicsfps=2;
const int W_WIDTH= 600;
const int W_HEIGHT=600;

class Map{
public:
    static std::vector<std::vector<int>> lright;
    static std::vector<std::vector<int>> square;
    static std::vector<std::vector<int>> lleft;
    static std::vector<std::vector<int>> line;
    static std::vector<std::vector<int>> inversedT;
    static std::vector<std::vector<int>> z;
    static std::vector<std::vector<int>> inversedz;
    static std::vector<std::pair<int,sf::Color>> ColorSet;
};

