#include "TestObject.h"

void TestObject::setThing1(int value)
{
    thing1 = value;
}

void TestObject::setThing2(int value)
{
    thing2 = value;
}

int TestObject::getThing1()
{
    return thing1;
}

int TestObject::getThing2()
{
    return thing2;
}

// Initialize the queue to empty
// and the lock to free.
TestObject::TestObject() {
    thing1 = 5;
    thing2 = 10;
}
