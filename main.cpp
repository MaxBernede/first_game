#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <random>
#include <cmath>
#include <iostream>

const int largeur = 1280;
const int hauteur = 720;
const int targetFPS = 60;

int main() {
    sf::RenderWindow window(sf::VideoMode(largeur, hauteur), "Game", sf::Style::Titlebar | sf::Style::Close);
   
    window.setFramerateLimit(targetFPS);
    sf::Clock frameClock;
    int frames = 0;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Up){
                        std::cout << "Catched\n";
                        break;
                    }
                    else if (event.key.code == sf::Keyboard::Escape){
                        window.close();
                        exit(0);
                    }
            }
        }

        // This part will wait for 60 frames before continuing
        if (frames < targetFPS)
            frames++;
        else {
            frames = 0;
            sf::Time elapsed = frameClock.restart();
            std::cout << "Elapsed time: " << elapsed.asSeconds() << std::endl;
            // Add your game update code here
        }
        window.clear();
        window.display();
    }

    return 0;
}
