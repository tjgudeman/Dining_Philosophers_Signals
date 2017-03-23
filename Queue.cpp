#include <stdio.h>
#include "Queue.h"


////Initalize
//Queue::Queue(){
//}

//Wait until we can pick up
void
Queue::pickUpChop(){
    printf("This\n");
lock.acquire();
while(available < 1){ //Wait no chopsticks available
 itemRemoved.wait(&lock);
}
available--;
 printf("There are  %d  available\n", available);
itemAdded.signal();
lock.release;
}

//Remove 2 chopsticks
void
Queue::remove(){
lock.acquire();
available +=2;
itemRemoved.broadcast(); //Broadcast b/c we're releasing 2
lock.release();
}
