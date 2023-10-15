// FPSCounter.h
#ifndef FPSCOUNTER_H
#define FPSCOUNTER_H

#include <SFML/Graphics.hpp>

class FPSCounter {
public:
    FPSCounter();

    void update();
    void draw(sf::RenderWindow& window);

private:
    sf::Font font;
    sf::Text fpsText;
    sf::Clock clock;
    unsigned int frameCount;
    sf::Time elapsedTime;
};

#endif // FPSCOUNTER_H
