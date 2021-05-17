                    /*Check whether the given number lies in Fibonacci Sequence or not*/

#include<iostream>
using namespace std;

void isFibonacci(int number)
{
    int Prev = 0;
    int Next = 1;

    if(number == 0 || number == 1)
    {
        cout << number << " is a Fibonacci Number";
        return;
    }
    else
    {
        int Sum = 0;
        for(int i = 2; Sum <= number; i++)
        {
            Sum = Prev + Next;
            Prev = Next;
            Next = Sum;

            if(number == Sum)
            {
                cout << number << " is a Fibonacci Number";
                return;
            }
        }
        cout << number << " is not a Fibonacci Number";
    }
}

int main()
{
    int Number;

    cout << "Enter a number : ";
    cin >> Number;

    isFibonacci(Number);

    return 0;
}