#ifndef Cube_HPP
#define Cube_HPP

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

//          0
//
//      3       1
//
//          2

class Cube : public sf::Drawable {
public:
    Cube(float x, float y);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:
    sf::ConvexShape top;
    sf::ConvexShape left_side;
    sf::ConvexShape right_side;
};

#endif
