#include<iostream>
using namespace std;

int Reverse(int number)
{
    int Rem = 0;
    int RevNumber = 0;

    for(int i = 0; number != 0; i++)
    {
        Rem = number % 10;
        RevNumber = (RevNumber * 10) + Rem;
        number = number / 10;
    }
    return RevNumber;
}

int main()
{
    int number;

    cout << "Enter the number : ";
    cin >> number;

    int reverse = Reverse(number);

    if(reverse == number)
    {
        cout << number << " is a plaindrome number";
    }
    else
    {
        cout << number << " is not a plaindrome number";
    }

    return 0;
}