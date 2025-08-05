#ifndef ELEVATOR_BUTTONS.H
#define ELEVATOR_BUTTONS.H

#include <vector>
#include "Button.h"

using namespace std;

class ExternalButtons {
private:
    vector<Button> floorButtons;
public:
    void pressButton(int floor);
};

#endif
