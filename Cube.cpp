#include "Cube.hpp"

Cube::Cube(float x, float y) {
        top.setPointCount(4);
        left_side.setPointCount(4);
        right_side.setPointCount(4);

        float size = 50.0f;
        top.setPoint(0, sf::Vector2f(x, y - (size * 0.5)));
        top.setPoint(1, sf::Vector2f(x + size, y));
        top.setPoint(2, sf::Vector2f(x, y + (size * 0.5)));
        top.setPoint(3, sf::Vector2f(x - size, y));

        left_side.setPoint(0, sf::Vector2f(x - size, y));
        left_side.setPoint(1, sf::Vector2f(x, y + (size * 0.5)));
        left_side.setPoint(2, sf::Vector2f(x, y + size * 1.5));
        left_side.setPoint(3, sf::Vector2f(x - size, y + size));

        right_side.setPoint(0, sf::Vector2f(x + size, y));
        right_side.setPoint(1, sf::Vector2f(x + size, y + size));
        right_side.setPoint(2, sf::Vector2f(x, y + size * 1.5));
        right_side.setPoint(3, sf::Vector2f(x, y + (size * 0.5)));

        // Set the fill color
        top.setFillColor(sf::Color(4, 173, 240, 255));
        left_side.setFillColor(sf::Color(236, 1, 142, 255));
        right_side.setFillColor(sf::Color(254, 240, 0, 255));
    }

void Cube::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(top, states);
    target.draw(left_side, states);
    target.draw(right_side, states);
}
