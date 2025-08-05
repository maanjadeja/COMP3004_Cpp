#ifndef DOOR_H
#define DOOR_H

#include "DoorSensor.h"

using namespace std;

class Door {
private:
    bool isOpen;
    DoorSensor doorSensor;
public:
    void open();
    void close();
    bool isOpen() const;
};

#endif
