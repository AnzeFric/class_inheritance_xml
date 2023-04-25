//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0602_LAYOUT_H
#define NALOGA0602_LAYOUT_H


#include <vector>
#include <string>
#include "View.h"

class Layout : public Xml{
private:
    std::vector<View*> views;
public:
    Layout();
    ~Layout();
    void addView(View* view);
    std::string toXml() override;
};


#endif //NALOGA0602_LAYOUT_H
