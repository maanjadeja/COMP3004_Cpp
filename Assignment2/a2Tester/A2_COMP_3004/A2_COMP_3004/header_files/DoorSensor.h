#ifndef DOORSENSOR_H
#define DOORSENSOR_H

class DoorSensor {
private:
    bool isActivated;
public:
    void activate();
    void deactivate();
    bool isActivated() const;
};

#endif
