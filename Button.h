//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0602_BUTTON_H
#define NALOGA0602_BUTTON_H


#include "View.h"

class Button : public View {
private:
    std::string text;
public:
    Button(const Position &position, const Size& size, const std::string& text);
    std::string toXml() override;
    std::string OnClick() override;
};


#endif //NALOGA0602_BUTTON_H
