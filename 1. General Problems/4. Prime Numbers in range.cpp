                            /*Find all the prime numbers with in the give range*/

#include<iostream>
#include<cmath>
using namespace std;

void PrimeNumbersInRange(int leftLim, int rightLim)
{
    for(int i = leftLim; i <= rightLim; i++)
    {
        if(leftLim == 0 || leftLim == 1)
        continue;
        
        int divisible = 0;

        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                divisible = 1;
                break;
            }
        }

        if(divisible == 0)
        {
            cout << i << endl;
        }
    }
    return;
}

int main()
{
    int leftLim, rightLim;

    cout << "Enter left limit : ";
    cin >> leftLim;
    
    cout << "Enter right limit : ";
    cin >> rightLim;

    PrimeNumbersInRange(leftLim, rightLim);

    return 0;
}