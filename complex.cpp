/* Exercise 3.1: This is the given source code
   The answer to this question is commented at the end of this code
*/

// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;

int main()
{
    complex<float> num1{ 2.0, 2.0 };  // using C++11 uniform initialisation syntax
    complex<float> num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);

    auto answer = num1 * num2; // using C++11 auto keyword,
                               // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl;

    // answer++;

    return 0;
}
/* //answer++ will not work as this is a built in operator for the variable type integer
    because the answer has been auto-ed to take on the data type of complex this build in
    operation cannot be performed unless the answer is an integer type. 