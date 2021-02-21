#include <vector>
#include "Color.h"
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
};