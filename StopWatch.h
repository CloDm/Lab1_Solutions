#ifndef STOPWATCH_H
#define STOPWATCH_H

class StopWatch {
    

    public
    
    // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
    double getProcessTime();
    void SW_tStart();
    double SW_tEnd();
    double restart();
    
    private
    double sTime;
    double eTime;
}
#endif
