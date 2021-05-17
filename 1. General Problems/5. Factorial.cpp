                                    /*Find Factorial of the given number*/

/* The factorial of a positive integer 'n', denoted by 'n!', is the product of all positive integers less than or 
                                    equal to n. Factorial of '0' is '1' */

#include<iostream>
using namespace std;

int Factorial(int number)
{
    int Fact = 1;
    
    for(int i = 1; i <= number; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}

int main()
{
    int number;
    int Fact;

    cout << "Enter a number : ";
    cin >> number;

    Fact = Factorial(number);

    cout << "Factorial of " << number << " is " << Fact;

    return 0;
}