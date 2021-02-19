#include "Tetris.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    
    sf::Texture mariotexture;
    if(!mariotexture.loadFromFile(IMG_PATH+"/mario.png")){
        return EXIT_FAILURE;
	}

    Object mario(0,0,0,mariotexture);

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
