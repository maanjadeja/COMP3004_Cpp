#ifndef EXTERNAL_BUTTONS.H
#define EXTERNAL_BUTTONS.H

#include "Button.h"

using namespace std;

class ElevatorButtons {
private:
    Button upButton;
    Button downButton;
public:
    void pressUp();
    void pressDown();
};

#endif
