#include "Lock.h"
#include "CV.h"


class Server{
private:
    Lock lock;
    CV cv;
    int reasources;
    int threads;
    int available[];
    int max[][];
    int allocated[][];

public:
    bool isSafe();
    bool wouldBeSafe();
    void Request(int resourceID, int threadID);


};
