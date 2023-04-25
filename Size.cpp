//
// Created by anzef on 17. 04. 2023.
//

#include "Size.h"

Size::Size(float width, float height) : width(width), height(height) {}

float Size::getWidth() const {
    return Size::width;
}

float Size::getHeight() const {
    return Size::height;
}
