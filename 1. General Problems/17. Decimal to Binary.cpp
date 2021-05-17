#include<iostream>
#include<vector>
using namespace std;

int* toBinary(int number)
{
    vector<int> binary;
    int rem;

    for(int i = 0; number != 0; i++)
    {
        binary[i] = number % 2;
        number = number / 2;
    }
    return binary;
}

int main()
{
    int number;
    int* binaryRev;
    vector<int> binary;

    cout << "Enter a number : ";
    cin >> number;

    binaryRev = toBinary(number);

    for(int i = binaryRev.end(); i != binaryRev.begin(); i--)
    {
        cout << binary[i];
    }

    cout << "Binary value of " << number << "is " << binary;

    return 0;
}


// //reverse an array

// int array[10];
// int rev[10];

// //reverse array
// for(int i = 9; i <= 0; i--)
// {
//     int rev[10-i-1] = array[i] 
// }

// //print reverse array
// for(int i = 0; i < 10; i++)
// {
//     cout << rev[i];
// }

