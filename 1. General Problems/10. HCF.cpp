                                        /*Find HCF of three numbers*/

/* The greatest common divisor of two or more integers, which are not all zero, is the largest positive integer
                                     that divides each of the integers */

#include<iostream>
using namespace std;

int HCF(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    
    if(a == 0)
    {
        return b;
    }
    
    if(b == 0)
    {
        return a;
    }
    
    if(a > b)
    {
        return HCF(a-b, b);
    }
    return HCF(a, b-a);
}

int main()
{
    int a, b, c;
    int result1 = 0;
    int result2 = 0;

    cout << "Enter three numbers : ";

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    result1 = HCF(a, b);
    result2 = HCF(result1, c);
    
    cout << "HCF of " << a << ", " << b << " and " << c << " is " << result2;
    return 0;
}
