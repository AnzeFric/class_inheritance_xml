//
// Created by anzef on 17. 04. 2023.
//

#include "Button.h"

Button::Button(const Position &position, const Size &size, const std::string &text) : View(position, size), text(text){}

std::string Button::toXml() {
    return "<Button\n "
           "    width=\"" + std::to_string(size.getWidth()) + "px\"\n "
           "    height=\"" + std::to_string(size.getHeight()) + "px\"\n "
           "    text=\"" + text + "\"\n "
           "    visible=\"true\" />";
}

std::string Button::OnClick() {
    return "Button onClick";
}
