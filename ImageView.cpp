//
// Created by anzef on 17. 04. 2023.
//

#include "ImageView.h"

ImageView::ImageView(const Position &position, const Size &size, const std::string &imgPath) : View(position, size), imgPath(imgPath){}

std::string ImageView::toXml() {
    return "<ImageView\n "
           "    width=\"" + std::to_string(size.getWidth()) + "px\"\n "
           "    height=\"" + std::to_string(size.getHeight()) + "px\"\n "
           "    text=\"" + imgPath + "\"\n "
           "    visible=\"true\" />";
}

std::string ImageView::OnClick() {
    return "ImageView onClick";
}
