#include <iostream>
#include "Layout.h"
#include "Button.h"
#include "ImageView.h"

int main() {
    Layout layout;
    Position position = Position(12.3, 2.22);
    Size size = Size(10, 2);
    Button* button = new Button(position, size, "Lorem Ipsum is simply dummy text of the printing and typesetting industry.");
    ImageView* imageView = new ImageView(position, size, R"(C:\Users\Prog2\Images\img2.png)");

    layout.addView(button);
    layout.addView(imageView);
    std::cout << layout.toXml() << std::endl;

    std::cout << "|||||||" << std::endl;
    std::cout << button->OnClick() << std::endl;
    std::cout << imageView->OnClick() << std::endl;
    return 0;
}
