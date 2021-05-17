#include<iostream>
using namespace std;

bool isEven(int number)
{
    if(number % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    cout << "Enter the number : ";
    cin >> number;

    bool result = isEven(number);

    if(result == 0)
    {
        cout << number << " is Odd";
    }
    else
    {
        cout << number << " is Even";
    }

    return 0;
}