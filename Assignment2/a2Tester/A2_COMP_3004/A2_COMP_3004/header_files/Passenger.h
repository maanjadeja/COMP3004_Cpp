#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
    int destinationFloor;
public:
    Passenger(int destination) : destinationFloor(destination) {} // Constructor

    int getDestinationFloor() const {
        return destinationFloor;
    }
};

#endif
