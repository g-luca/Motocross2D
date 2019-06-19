//
// Created by Magna on 2019-06-07.
//

#include "Item.h"
#include <iostream>

#include <SFML/Graphics.hpp>
#include "Box2D/Box2D.h"

Item::Item(double _posX, double _posY, double _width, double _height):posX(_posX),posY(_posY),width(_width),height(_height) {}



double Item::getPosX() const {
    return posX;
}

void Item::setPosX(double posX) {
    Item::posX = posX;
}

double Item::getPosY() const {
    return posY;
}

void Item::setPosY(double posY) {
    Item::posY = posY;
}

double Item::getWidth() const {
    return width;
}

void Item::setWidth(double width) {
    Item::width = width;
}

double Item::getHeight() const {
    return height;
}

void Item::setHeight(double height) {
    Item::height = height;
}
