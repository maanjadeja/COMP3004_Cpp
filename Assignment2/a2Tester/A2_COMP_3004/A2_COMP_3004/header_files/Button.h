#ifndef BUTTON_H
#define BUTTON_H

class Button {
private:
    bool isPressed;
public:
    void press();
    void release();
    bool isPressed() const;
};

#endif