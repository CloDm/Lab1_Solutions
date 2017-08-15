/*  A stopwatch :
    For this requirement a start :SW_tStart(),  end  SW_tEnd() )and reset restart()
    The start function starts the timer.
    The end and retart function return the time taken in second.   
*/

#include "StopWatch.h"

int main()
{
    //create stopwatch object
    StopWatch tobj;
    //variables to save execution times
    double execute_1;
    double execute_2;
    
    //start stopwatch
    tobj.SW_tStart();
    //Using a for loop to test execution time 
    for (int i=1;i<90;i++)
    {
        cout << i << endl;
    }

    //To determine the elapsed time
    execute_1 = tobj.restart();

    for (int i=1;i<90;i++)
    {
        cout << i << endl;
    }
    
    execute_2 = tobj.SW.tEnd();
    
    cout << execute_1 << endl << execute_2;
    
    return 0;
}