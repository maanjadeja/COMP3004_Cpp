#ifndef EXTERNAL_BUTTONS_H
#define EXTERNAL_BUTTONS_H

#include "Button.h"

using namespace std;

class ExternalButtons {
private:
    Button upButton;
    Button downButton;
public:
    void pressUp();
    void pressDown();
};

#endif
