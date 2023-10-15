// FPSCounter.cpp
#include "FPSCounter.hpp"
#include <iostream>

FPSCounter::FPSCounter() {
    if (!font.loadFromFile("/Library/Fonts/Arial Unicode.ttf")) {
        std::cerr << "Font not found!" << std::endl;
    }

    fpsText.setFont(font);
    fpsText.setCharacterSize(24);
    fpsText.setFillColor(sf::Color::White);
    fpsText.setPosition(10, 10);

    frameCount = 0;
    elapsedTime = sf::Time::Zero;
}

void FPSCounter::update() {
    frameCount++;
    elapsedTime += clock.getElapsedTime();
    if (elapsedTime >= sf::seconds(1.0f)) {
        float fps = static_cast<float>(frameCount) / elapsedTime.asSeconds();
        fpsText.setString("FPS: " + std::to_string(static_cast<int>(fps)));
        frameCount = 0;
        elapsedTime -= sf::seconds(1.0f);
    }
}

void FPSCounter::draw(sf::RenderWindow& window) {
    window.draw(fpsText);
}
