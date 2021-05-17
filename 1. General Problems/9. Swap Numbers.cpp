                        /*Swap two numbers without using temporary variable*/

#include<iostream>
using namespace std;

void swap(int first, int second)
{
    first = first + second;
    second = first - second;
    first = first - second;

    cout << "The first number is " << first << endl;
    cout << "The second number is " << second;
}

int main()
{
    int first;
    int second;

    cout << "Enter first number : ";
    cin >> first;
    
    cout << "Enter second number : ";
    cin >> second;

    swap(first, second);

    return 0;
}