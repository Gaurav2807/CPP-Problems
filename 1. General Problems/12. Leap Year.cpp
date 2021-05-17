#include<iostream>
using namespace std;

bool isLeap(int year)
{
    bool flag = 0;
    
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
    }
    return flag;
}

int main()
{
    int year;
    int flag;

    cout << "Enter year : ";
    cin >> year;

    flag = isLeap(year);

    if(flag == 0)
    {
        cout << year << " is not a leap year";
    }
    else
    {
        cout << year << " is a leap year";
    }
    
    return 0;
}

// Alternative solution

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n1, n2, max;

//     cout << "Enter two numbers: ";
//     cin >> n1 >> n2;
    
//     max = (n1 > n2) ? n1 : n2;

//     do
//     {
//         if (max % n1 == 0 && max % n2 == 0)
//         {
//             cout << "LCM = " << max;
//             break;
//         }
//         else
//             ++max;
//     } while (true);
    
//     return 0;
// }
