//
// Created by anzef on 17. 04. 2023.
//

#include "Layout.h"

Layout::Layout() {}

Layout::~Layout() {
    for(View* v : views){
        delete v;
    }
}

void Layout::addView(View *view) {
    views.push_back(view);
}

std::string Layout::toXml() {
    std::string returnString = "<Layout>\n";
    for(View* v : views){
        returnString += "   " + v->toXml() + "\n";
    }
    return returnString + "</Layout>\n";
}


