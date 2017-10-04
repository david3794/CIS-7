/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int n;
char xy;
char tryAgain;


int
main ()
{
    boop:
  {
    cout << "Enter an integer: ";
    cin >> n;


    if (cin.fail ())
      {
	cout << "ERROR -- You did not enter an integer \n";
	return 0;
    

      }
    else

      (n % 2 == 0) ? cout << n << " is even.\n" : cout << n << " is odd.\n";

    cout << "Would you like to run again? y/q: ";
    cin >> tryAgain;
    if (tryAgain == 'y')
      {
    cout << "\033[2J\033[1;1H"; // found on stack overflow
    goto boop;
      }
    else if (tryAgain == 'q','n','Q','N')
      {
    cout <<"You have exit";
	return 0;
      }
  }
  return 0;
}
