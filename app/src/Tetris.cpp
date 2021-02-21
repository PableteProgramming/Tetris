#include "Tetris.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    std::vector<std::pair<int,sf::Color>> sets;
    sets.clear();
    sets.push_back(std::make_pair(1,sf::Color{0,0,255}/*blue*/));
    sets.push_back(std::make_pair(2,sf::Color{0,255,0}/*green*/));
    sets.push_back(std::make_pair(3,sf::Color{255,102,0}/*orange*/));
    sets.push_back(std::make_pair(4,sf::Color{204,0,204}/*purple*/));
    sets.push_back(std::make_pair(5,sf::Color{255,0,0}/*red*/));
    sets.push_back(std::make_pair(6,sf::Color{255,255,255}/*white*/));
    sets.push_back(std::make_pair(7,sf::Color{0,0,0}/*black*/));

    std::vector<std::vector<int>> lmap= {
        {1,0},
        {1,0},
        {1,0},
        {1,1},
    };

    Manager manager(30,sets);

    Object piece(0,0,0,manager,lmap);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        piece.Draw(window);
        window.display();
    }

    return 0;
}
