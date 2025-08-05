#ifndef FLOORCONTROLLER_H
#define FLOORCONTROLLER_H

#include <vector>
#include "Elevator.h"

using namespace std;

class FloorController {
private:
    vector<Elevator> elevatorList;
public:
    Elevator allocateElevator(int floor);
};

#endif
