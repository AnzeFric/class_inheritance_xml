//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0602_IMAGEVIEW_H
#define NALOGA0602_IMAGEVIEW_H


#include "View.h"

class ImageView : public View{
private:
    std::string imgPath;
public:
    ImageView(const Position& position, const Size& size, const std::string& imgPath);
    std::string toXml() override;
    std::string OnClick() override;
};


#endif //NALOGA0602_IMAGEVIEW_H
