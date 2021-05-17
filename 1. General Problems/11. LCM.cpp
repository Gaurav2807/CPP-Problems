#include<iostream>
using namespace std;

int hcf(int num1, int num2)
{
    int HCF;

    if(num1 == 0)
    {
        return HCF = num2;
    }

    if(num2 == 0)
    {
        return HCF = num1;
    }

    if(num1 == num2)
    {
        return HCF = num1;
    }

    if(num1 > num2)
    {
        HCF = hcf(num1 - num2, num2);
    }
    else
    {
        HCF = hcf(num1, num2 - num1);
    }

    return HCF;
}

int lcm(int num1, int num2)
{
    int LCM;
    int HCF;

    HCF = hcf(num1, num2);

    LCM = (num1 * num2) / HCF;

    return LCM;
}

int main()
{
    int num1, num2, num3;
    int LCM;

    cout << "Enter number 1 : ";
    cin >> num1;

    cout << "Enter number 2 : ";
    cin >> num2;

    cout << "Enter number 2 : ";
    cin >> num3;

    LCM = lcm(num1, num2);
    //LCM = lcm(LCM, num3);

    cout << "LCM of "<< num1 << /*", " << num3 <<*/  " & " << num2 << " is " << LCM;

    return 0;
}