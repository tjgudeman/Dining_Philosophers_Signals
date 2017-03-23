#include "Lock.h"
#include "CV.h"

class Chopstick {

  // State variables

  private:
    Lock lock;
     int available = 10;
CV itemAdded;
CV itemRemoved;


  public:
    Chopstick(): owned(){};
    ~Chopstick(){};
    void pickUp();
    void putDown();
    bool owned;

    //Condition Variables
    void pickUpChop();
    void remove();


};



