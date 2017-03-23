#include <stdio.h>
#include "Chopstick.h"

void Chopstick::pickUp()
{
  lock.acquire();
    owned = true;
}

void Chopstick::putDown()
{
  lock.release();
  owned = false;
}

//For condition variables
void
Chopstick::pickUpChop(){
lock.acquire(); //Acquire lock at beginning
while(available < 1){ //Wait no chopsticks available
 itemRemoved.wait(&lock);
}
available--;
 printf("There are  %d  available\n", available);
itemAdded.signal();
lock.release();
}

//Remove 2 chopsticks
void
Chopstick::remove(){
lock.acquire();
available +=2;
itemRemoved.broadcast(); //Broadcast b/c we're releasing 2
lock.release();
}

