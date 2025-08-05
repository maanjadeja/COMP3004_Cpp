#ifndef ELEVATOR_BUTTONS_H
#define ELEVATOR_BUTTONS_H

#include <vector>
#include "Button.h"

using namespace std;

class ElevatorButtons {
private:
    vector<Button> floorButtons;
public:
    void pressButton(int floor);
};

#endif
