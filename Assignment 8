#include <iostream>
using namespace std;

int number;
int guess;
int primeNumber(int);
int counter =0;


int main()
{
    
    bool flag;

    cout << "Enter a number: ";
    cin >> number;

    

    for(int i = 2; i <= number; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = primeNumber(i);

        if(flag)
       counter++;
       
    }
    
    
    
    cout << "Guess the number of prime number between 1 and " <<number<<": ";
    cin >> guess;
    
    if (guess == counter)
    {
      cout << "Correct";
    }
      else
      {
      cout << "Incorrect, the correct answer is " << counter;
      return 0;
      }
}

// user-defined function to check prime number
int primeNumber(int n)
{
    bool flag = true;

    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
    
  return 0;
    
}
