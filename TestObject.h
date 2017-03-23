#include "Lock.h"

const int MAX = 40;

class TestObject {


  // State variables
  int thing1;
  int thing2;

  public:
    TestObject();
    ~TestObject(){};
    // Synchronization variables
    Lock lock1;
    Lock lock2;
    void setThing1(int item);
    void setThing2(int item);
    int getThing1();
    int getThing2();
};
