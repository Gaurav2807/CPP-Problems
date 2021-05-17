                                                /*Strong Number*/
        /*A Strong number 'n' is a number whose sum of factorial of all digits is equal to the number ‘n’*/

#include<iostream>
using namespace std;

int Factorial(int value)
{
    int Fact = 1;
    
    for(int i = 1; i <= value; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}

int isStrong(int number)
{
    int AuxiVar = number;
    int Rem = 0;
    int Result = 0;

    for(int i = 0; AuxiVar != 0; i++)
    {
        Rem = AuxiVar % 10;

        Result = Result + Factorial(Rem);

        AuxiVar = AuxiVar / 10; 
    }
    return Result;
}

int main()
{
    int number;
    int result = 0;

    cout << "Enter a number : ";
    cin >> number;

    result = isStrong(number);

    if(result == number)
    {
        cout << "The number is Strong Number";
    }
    else
    {
        cout << "The number is not a Strong Number";
    }
    return 0;
}

#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

string upper(string code)
{
	for(int i = 0; i != '\0'; i++)
	{
		code[i] = code[i] + 32;
	}
	return code;
}

int index(char ch)
{
	char alpha = 'A';

	for(int i = 0; i < 26; i++)
	{
		if(alpha == ch)
		{
			return i + 1;
		}
		alpha++;
	}
}

double Encrypt(string blocks)
{
	double sum = 0;
	int power = blocks.length() - 1;

	for(int i = 0; blocks[i] != '\0'; i++)
	{
			{
				sum = sum + pow(26,power)* index(blocks[i]);
				--power;
			}
	}

	return sum;
}

