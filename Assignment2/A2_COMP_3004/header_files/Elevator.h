#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <vector>
#include "Passenger.h"
#include "Door.h"
#include "ElevatorButtons.h"

using namespace std;

class Elevator {
private:
    int currentFloor;
    Direction direction;
    vector<Passenger> passengers;
    Door doors;
    ElevatorButtons elevatorButtons;
public:
    void moveUp();
    void moveDown();
    void openDoors();
    void closeDoors();
    void addPassenger(const Passenger& passenger);
    void removePassenger(const Passenger& passenger);
};

#endif
