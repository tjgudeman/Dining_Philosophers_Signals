#include <stdio.h>
#include "Server.h"

bool
Server:: isSafe(){
int j;
int toBeAvail[][] = copy available[]; //Using [i][j]

bool finished[]=[false, false, false];

while(true){
j = //any threadID such that:
(finish[j] == false) && forall i: need[i][j] <= toBeAvail[i];
}
}

boolServer:: wouldBeSafe(){
}


Server:: Request(int resourceID, int threadID){
lock.Acquire();
assert(isSafe());
while (!wouldBeSafe(resourceID,threadID)){
    cv.Wait(&lock);
}
alloc[resourceID[threadID]++;
avail[resourceID]--;
assert(isSafe());
lock.Release();
}
