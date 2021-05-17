                            /*Check whether the given number is Prime or not*/
                            
/*A number can not be divisible by any number if the divisor exceeds half the value of that number, except that number itself*/

/*If a number 'n' is not prime, it can be factored into two factors a and b : (n = a * b)

Now a and b can't be both greater than the square root of n, since then the product a * b would be greater than 
sqrt(n) * sqrt(n) = n. So in any factorization of n, at least one of the factors must be smaller than the square 
root of n, and if we can't find any factors less than or equal to the square root, n must be a prime.*/

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int number)
{
    bool divisible = 0;
    
    for(int i = 2; i <= sqrt(number); i++)
    {
        if(number % i == 0)
        {
            divisible = 1;
            break;
        }
    }
    return divisible;
}

int main()
{
    int number;
    bool result;

    cout << "Enter a number : ";
    cin >> number;

    result = isPrime(number);

    if(result == 0)
    {
        cout << "The number is a Prime Number";
    }
    else
    {
        cout << "The number is not a Prime Number";
    }
    return 0;
}