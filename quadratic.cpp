/*  Exercise 3_3
    This programme solves the quadratic equation 
    ax^2+bx+c=0 given a, b, c applying
    x=-b+-(b^2-4ac)^0.5/2a
*/

#include <iostream>
#include <complex>
#include <cmath>
#include <cstring>

using namespace std;
using cX = complex<float>;

//Global Variable allows for the user to exit the programmme if desired
bool bExit=0;

void ExitQ()
{
    bExit=0;
}
void qSolve(cX pA, cX pB, cX pC)
{
    cX numC {4.0, 0};
    cX denumC {2.0, 0};
    
    auto qX_P= (pB + sqrt((pB*pB) - (numC*pA*pC))/(denumC*pA));
    auto qX_N= (pB - sqrt((pB*pB) - (numC*pA*pC))/(denumC*pA));
    
    cout<<"The Roots for "<<pA<<"x^2 + "<<pB<<"x + "<<pC<<"=0 are:"<<endl;
    cout<<"x= "<<qX_P<<endl;
    cout<<"x= "<<qX_N<<endl;
    
}

int main()
{
    ExitQ();
    cX a=0;
    cX b=0;
    cX c=0;
    char cIn;
    
    while (bExit==0)
    {
        cout<<"Please enter the coefficients a, b and c for to slove for the roots of you quadratic equation"<<endl;
        cin>>a>>b>>c;
        qSolve(a,b,c);
        
        cout<<"Would you like to solve another equation? (y-yes, q-quit)"<<endl;
        cin>>cIn;
        
        if (cIn=='q')
        {bExit=1;}
    }

}
