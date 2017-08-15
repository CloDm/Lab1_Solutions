#include <iostream>
#include <ctime> // time for seeding srand
#include <cstdlib> //srand & rand 

using namespace std;

/*Function gGame : used to compare input and random value in order to produce 
 a specific output*/
 
bool gGame(int pInput, int pRand, bool pWinner)
{
    int iCount=5;
    
    while (iCount!=0)
    {
        if (pInput < pRand)
        {
            iCount--;
            cout<<"Guess Higher"<<endl;
            cout<<"You have "<<iCount<<" attempts left"<< endl;
            cin>>pInput;
        }
        
        else if (pInput > pRand)
        {
            iCount--;
            cout<<"Guess Lower"<<endl;
            cout<<"You have "<<iCount<<" attempts left"<< endl;
            cin>>pInput;
        }
        
        else if (pInput==pRand)
        {
            cout<<"You win"<<endl;
            cout<<"After "<<iCount<<" attempts "<< endl;
            pWinner=1;
            break;
        }
    }
        return pWinner;
}

int main()
{
    int iInput=0;
    int iRand=0;
    bool bWin=0;
    cout<<"Welcome to guessing game You will have 5 attempts at this"<<endl;
    cout<<"GoodLuck"<<endl;
    cout<<"Please Guess a Number between 1-100"<<endl;
    
    cin>>iInput;
    
    srand(time(0));
    iRand=rand()%100+1;
    
    bWin=gGame(iInput, iRand, bWin);

	return 0;
}
