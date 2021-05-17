                                        /*Armstrong Number*/

/*In number theory, a Narcissistic number in a given number base is a number that is the sum of its own digits
                            each raised to the power of the number of digits.*/

#include<iostream>
#include<cmath>
using namespace std;

int length(int number)
{
    int count = 0;
    
    for(int i = 0; number != 0; i++)
    {
        count++;
        number /= 10; 
    }
    return count;
}

int isArmstrong(int number)
{
    int AuxiVar = number;
    int Rem = 0;
    int result = 0;

    for(int i = 0; AuxiVar != 0; i++)
    {
        Rem = AuxiVar % 10;

        result = result + pow(Rem, length(number));

        AuxiVar = AuxiVar / 10;
    }
    return result;
}

int main()
{
    int number;
    int result;

    cout << "Enter a number : ";
    cin >> number;

    result = isArmstrong(number);

    if(result == number)
    {
        cout << "The number is Armstrong Number";
    }
    else
    {
        cout << "The number is not an Armstrong Number";
    }
    return 0;
}