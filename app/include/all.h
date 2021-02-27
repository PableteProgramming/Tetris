#include <vector>
#include <utility>
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>

const std::string RES_PATH= "resources";
const std::string IMG_PATH= RES_PATH+"/img";
const int scale= 30;
const double fps= 5;
const double moveclicsfps=3;
const double rotateclicsfps=2;
const int W_WIDTH= 300;
const int W_HEIGHT=600;

class Manager{
private:
    int scale;
    std::vector<std::pair<int,sf::Color>> sets;
public:
    Manager();
    Manager(int,std::vector<std::pair<int,sf::Color>>);
    void SetScale(int);
    void SetSets(std::vector<std::pair<int,sf::Color>>);
    int GetScale(){return scale;};
    std::vector<std::pair<int,sf::Color>> GetSets(){return sets;};
    sf::Color FindColorOfValue(int);
    int FindValueOfColor(sf::Color);
};

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

class Object{
private:
    int x;
    int y;
    int lastx;
    int lasty;
    Manager manager;
    int width;
    int height;
    int W_width;
    int W_height;
    bool Dead;
    std::vector<std::vector<int>> map;
    std::vector<Rect> rects;
    void Configure();
public:
    Object(int,int,int,Manager,std::vector<std::vector<int>>,int,int,int[W_HEIGHT/scale][W_WIDTH/scale]);
    void Draw(sf::RenderWindow&);
    void Move(int,int,int,int[W_HEIGHT/scale][W_WIDTH/scale],bool=false);
    int GetWidth(){return width;};
    void Rotate(int[W_HEIGHT/scale][W_WIDTH/scale],int);
    void SetSpeed(int);
    int GetX(){return x;};
    int GetY(){return y;};
    bool IsDead(){return Dead;};
    std::vector<Rect> GetRects(){return rects;};
    Manager GetManager(){return manager;};
    int GetLastX(){return lastx;};
    int GetLastY(){return lasty;};
};

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

std::vector<std::vector<int>> RotateMap(int,std::vector<std::vector<int>>);
void PrintMap(std::vector<std::vector<int>>);
void fillMap(int[W_HEIGHT/scale][W_WIDTH/scale],int);
std::vector<Rect> FillRects(std::vector<std::vector<int>>,Manager);
void DrawMap(sf::RenderWindow&,int[W_HEIGHT/scale][W_WIDTH/scale],Manager);
std::vector<std::vector<int>> MapToVector(int[W_HEIGHT/scale][W_WIDTH/scale]);
void UpdateMap(int[W_HEIGHT/scale][W_WIDTH/scale],std::vector<Rect>,Object);
bool Collision(int[W_HEIGHT/scale][W_WIDTH/scale],int,int,std::vector<Rect>);
void UpdatePiece(int,int,int&,int&,std::vector<Object>&,Object&,std::vector<std::vector<std::vector<int>>>,int&,std::vector<std::vector<int>>&,Manager,int,int,int[W_HEIGHT/scale][W_WIDTH/scale]);
void ChangeColor(std::vector<std::vector<int>>&,int);
std::pair<bool,std::vector<int>> IsLineCompleted(int[W_HEIGHT/scale][W_WIDTH/scale]);
void RemoveLineFromMap(int[W_HEIGHT/scale][W_WIDTH/scale],int);