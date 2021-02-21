#include "Tetris.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    
    /*sf::Texture mariotexture;
    if(!mariotexture.loadFromFile(IMG_PATH+"/mario.png")){
        return EXIT_FAILURE;
	}*/

    Color color;

    std::vector<std::pair<int,sf::Color>> sets;
    sets.clear();
    sets.push_back(std::make_pair(1,color.blue));
    sets.push_back(std::make_pair(2,color.green));
    sets.push_back(std::make_pair(3,color.orange));
    sets.push_back(std::make_pair(4,color.purple));
    sets.push_back(std::make_pair(5,color.red));
    sets.push_back(std::make_pair(6,color.white));
    sets.push_back(std::make_pair(7,color.black));

    std::vector<std::vector<int>> lmap= {
        {1,0},
        {1,0},
        {1,0},
        {1,1},
    };

    Manager manager(25,sets);

    Object mario(0,0,0/*,mariotexture*/,manager,lmap);

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
        mario.Draw(window);
        window.display();
    }

    return 0;
}
