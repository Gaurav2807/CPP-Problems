                            /*Print the Fibonacci Sreies upto given range*/

/* Fibonacci numbers, commonly denoted Fₙ, form a sequence, called the Fibonacci sequence, such that each number 
                    is the sum of the two preceding ones, starting from 0 and 1 */

#include<iostream>
using namespace std;

void FibonacciSeries(int limit)
{
    int Prev = 0;
    int Next = 1;

    cout << Prev << "  ";
    cout << Next << "  ";
    
    for(int i = 2; i < limit; i++)
    {
        int Sum = Prev + Next;
        Prev = Next;
        Next = Sum;

        cout << Sum << "  ";
    }
    return;
}

int main()
{
    int limit;

    cout << "Enter the limit upto which Series need to be printed : ";
    cin >> limit;

    FibonacciSeries(limit);

    return 0;
}