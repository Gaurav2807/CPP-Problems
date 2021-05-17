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
    
    cout << "Enter a number : ";
    cin >> number;

    int result = Reverse(number);

    cout << "The reverse of " << number << " is " << result;
    
    return 0;
}