#include <Manager.h>

Manager::Manager(int _scale, std::vector<std::pair<int,sf::Color>> _sets){
    scale=_scale;
    sets=_sets;
}

Manager::Manager(){
    scale=-1;
    std::vector<std::pair<int,sf::Color>> empty;
    empty.clear();
    sets= empty;
}

void Manager::SetScale(int _scale){
    scale=_scale;
}

void Manager::SetSets(std::vector<std::pair<int,sf::Color>> _sets){
    sets=_sets;
}