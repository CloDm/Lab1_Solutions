
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{6,6}; //Using scren class to generate a 6x6 screen object
    myScreen.clear(' ');
    //The cursor will begin in the top left
    
    //For loop to fill 6X1 with *
    
    myScreen.move(2,2);
    myScreen.set('*');
    myScreen.move(5,2);
    myScreen.set('*');
    
    myScreen.move(2,1);
    for(int i=2; i<6;i++)
    {
        myScreen.set('*');
        myScreen.down();
    }
    
    myScreen.move(6,3);
    for(int j=3;j<7;j++)
    {
        myScreen.set('*');
        myScreen.forward();
    }
    
    myScreen.move(1,3);
     for(int k=3;k<7;k++)
    {
        myScreen.set('*');
        myScreen.forward();
    }
    
    myScreen.display();
    cout<<endl;
    
/*   
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(3,3);
	myScreen.set("---");

	myScreen.display();
	cout << endl;

	myScreen.reSize(16,16);
	myScreen.display();
	myScreen.clear(' ');

	myScreen.move(7,7);
	myScreen.set("BIG");
	myScreen.move(8,5);
	myScreen.set("SCREEN");
	myScreen.display();
*/
	return 0;
    
/*  Excercise 4_2: 
    Const is a keyword which is used to declare a variable as a constant value throughout the programme. This makes 
    the variable that is declared as a constant unmodifiable
    The Const keyword is found in three situations:
    
    1>  const string::size_type TOP_LEFT=0;
        Here the cursor starting position is being defined. Therefor the starting position of the cursor never changes
        throughout the programme
        
    2>  function(const string& s)
        Here there argument passed in this function can not be modified within this function. This is the passing of an 
        argument by reference and const therefore has read-only permission
    
    3>  void Screen::display() const
        Here the function itself is declared as a constant. This ensures thats the complier is aware that the function is safely
        called for a constant object. This ensures thats the object will not change.
*/

//  Exercise 4_3
    //This is code is aimed to overload the move function and create a new screen object 
    
      Screen Screen_3{6,6};
    
    using objscr = Screen::Direction; 
    
    Screen2.clear(' ');
    
    
    
    for (int i=0;i<4;i++)
    {
        Screen_3.move(objscr::DOWN);
        Screen_3.set('*');
    }
    
    Screen_3.move(objscr::UP);
    Screen_3.move(objscr::FORWARD);
    Screen_3.move(objscr::FORWARD);
    //Screen2.move(objscr::FORWARD);
    Screen_3.set('*');
    Screen_3.move(objscr::UP);
    Screen_3.move(objscr::BACK);
    Screen_3.set('*');
    Screen_3.move(objscr::FORWARD);
    Screen_3.move(objscr::FORWARD);
    Screen_3.set('*');
    Screen_3.move(objscr::FORWARD);
    Screen_3.move(objscr::UP);
    
    for (int i=0;i<4;i++)
    {
        Screen_3.set('*');
        Screen_3.move(objscr::DOWN);
    }
    
    Screen_3.display();
    cout << endl;
    
    // Q4.4 
    // test wrap around
    
    Screen Screen_4{8,8}; //Createing a new screen
    Screen_4.forward();
    Screen_4.set('*');
    Screen_4.up(); 
    //Wrap around
    Screen_4.set('*');
    
    //Change position to test wrap around
    Screen_4.forward();
    Screen_4.forward();
    Screen_4.set('*');
    Screen_4.down();
    Screen_4.set('*');
    
    Screen_4.display();
    cout << endl; 
    
   // Q4.5 
    Screen Screen_5{6,6};
   
    Screen_5.clear(' ');
 
    Screen_5.square(1,1,5,5); //view sqaure
    
    Screen_5.display();

}

