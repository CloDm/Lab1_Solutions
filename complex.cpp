/* Exercise 3.2: This is the given source code
   This will make use of aliases 
*/

// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;
using xC = complex<float>; //This is the declaration of an alias 
//This can also be declared using type def(C)

int main()
{
    xC num1{ 2.0, 2.0 };  // using C++11 uniform initialisation syntax
    xC num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);

    auto answer = num1 * num2; // using C++11 auto keyword,
                               // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl;

    // answer++;

    return 0;
}
/* answer++ will not work as this is a built in operator for the variable type integer
    because the answer has been auto-ed to take on the data type of complex this build in
    operation cannot be performed unless the answer is an integer type. */