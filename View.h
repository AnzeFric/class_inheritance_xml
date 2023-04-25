//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0602_VIEW_H
#define NALOGA0602_VIEW_H


#include "Position.h"
#include "Size.h"
#include "Xml.h"
#include "ClickListener.h"

class View : public Xml, public ClickListener{
protected:
    Position position;
    Size size;
public:
    View(const Position &position, const Size &size);
    virtual ~View() = default;
};


#endif //NALOGA0602_VIEW_H
