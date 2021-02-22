#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <iostream>
#include "Object.h"
const std::string RES_PATH= "resources";
const std::string IMG_PATH= RES_PATH+"/img";
int scale= 15;

std::vector<std::vector<int>> RotateMap(int,std::vector<std::vector<int>>);
void PrintMap(std::vector<std::vector<int>>);
double fps= 5;
double clicsfps=3;
int W_WIDTH= 600;
int W_HEIGHT=600;

