#include "Lock.h"
#include "CV.h"


int available = 10;

class Queue{
//Sync Variables
Lock lock;
CV itemAdded;
CV itemRemoved;

//State variables

public:
    Queue();
    ~Queue(){};
    void pickUpChop();
    void remove();
};
