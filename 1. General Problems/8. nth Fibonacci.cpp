                                        /*Find the nth fibonacci number*/

#include<iostream>
using namespace std;

int nthFibonacci(int position)
{
    int Prev = 0;
    int Next = 1;
    
    for(int i = 3; i <= position; i++)
    {
        int Sum = Prev + Next;
        Prev = Next;
        Next = Sum;
    }
    return Next;
}

int main()
{
    int position;

    cout << "Enter the position : ";
    cin >> position;

    if(position == 1)
        cout << "0";
    else if(position == 2)
        cout << "1";
    else
    {
        cout << nthFibonacci(position);
    }
     
    return 0;
}