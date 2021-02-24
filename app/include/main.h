#include "all.h"
int map[W_HEIGHT/scale][W_WIDTH/scale];

std::vector<std::vector<std::vector<int>>> allpieces={
    Map::lright,
    Map::square,
    Map::lleft,
    Map::line,
    Map::inversedT,
    Map::z,
    Map::inversedz
};