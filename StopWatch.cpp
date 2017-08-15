/*  Exercise 5_1
    This exercise uses the given files StopWatch.h and StopWatch.cpp
    The stopwatch is used to check how lon a section of code takes to execute
*/

#include "StopWatch.h"
#include <ctime>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
double getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

void StopWatch::SW_tStart()
{
    sTime= getProcessTime();
    return;
}

double StopWatch::SW_tEnd()
{
    eTime=getProcessTime();
    return (sTime - eTime);
}

double stopwatch::restart()
{
    eTime= getProcessTime();
    cout << "Elapsed time: " << eTime - sTime << "s" << endl;
    
    double elapsed = end_time - start_time;
        sTime = getProcessTime(); //end_time;
    return elapTime;
}

