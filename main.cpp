#include <time.h>
#include <stdio.h>
#include "Chopstick.h"
#include "thread.h"
#include "Server.h"


void dine(int n);
void wait(int seconds);
void pickUpChop();

#define PHILOSOPHERS 10
#define CHOPSTICKS 10

Chopstick sticks[CHOPSTICKS];
thread_t philosophers[PHILOSOPHERS];

int main(int argc, char **argv)
{
    for (int i=0; i < PHILOSOPHERS; i++)
    {
        printf("Philosopher %d sat at the table!\n", i);
        thread_create(&philosophers[i], &dine, i);
    }

    for (int i=0; i < PHILOSOPHERS; i++)
    {
        thread_join(philosophers[i]);
    }

    printf("Everyone is finished!\n");
}

void dine(int i)
{


    /***** Grabbing chopstick with left hand *****/
    printf("Philosopher %d wants to pick up a chopstick \n", i);
    /***** Code when not using condition variables ***/
//    while(!leftSatisfied){
//        if(!sticks[tempLeft].owned){
//            sticks[tempLeft].pickUp(); //Pick up if not owned
//            printf("Phil %d  picked up chopstick %d\n", i, tempLeft);
//            leftSatisfied = true; //Escape while
//            leftChop=tempLeft;
//        }
//        else{
//            tempLeft++; //Increase array index
//            if(tempLeft >= 9) //Reset to beginning array at the end
//                tempLeft=0;
//        }
// Using condition variables


//    }

//    /***** Grabbing chopstick with right hand *****/
    /***** Code when not using condition variables ***/
//    printf("Phil %d wants to pick up a SECOND chopstick \n", i);
//    while(!rightSatisfied){
//        if(!sticks[tempRight].owned){ //Pick up if not owned
//            sticks[tempRight].pickUp();
//            printf("Phil %d  picked up a SECOND chopstick %d\n", i, tempRight);
//            rightSatisfied = true;
//            rightChop=tempRight;
//        }
//        else{
//            tempRight++; //increment array index
//            if(tempRight >= 9)
//                tempRight=0; //Reset index once we get to the end
//        }
wait(15);

//    }



    /***** Eating with chopsticks and then releasing them back to middle ****/
    printf("Philosopher %d has enough chopsticks and is eating!\n", i);
//    sticks[leftChop].putDown();
//    sticks[rightChop].putDown();
wait(15);
    sticks[0].remove();
    printf("Philosopher %d put down chopstick\n", i );
    wait(100);
    printf("Philosopher %d put down all chopsticks and is finished eating!\n", i);
}


/**** Wait to encourage deadlock ****/
void wait (int seconds)
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

