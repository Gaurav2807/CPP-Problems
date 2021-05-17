#include<iostream>
using namespace std;

int Exponent(int base, int power)
{
    int result = 1;
    
    if(power == 0)
    {
        return 1;
    }
    else
    {
        for(int i = 1; i <= power; i++)
        {
            if(power != 0)
            {
                result  = result * base;
            }
        }
    }

    return result;
}

int main()
{
    int base, power;

    cout << "Enter base : ";
    cin >> base;

    cout << "Enter power : ";
    cin >> power;

    if(base == 0 && power == 0)
    {
        cout << "Indeterminate value";
    }
    else
    {
        int result = Exponent(base, power);

        cout << base << " ^ " << power << " is " << result;
    }
    
    return 0;
}