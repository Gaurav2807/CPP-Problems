                            /*Check whether the given string is plaindrome or not*/

#include<iostream>
#include<cstring>
using namespace std;

bool isPlaindrome(string str)
{
    bool flag = 0;
    int len = str.length();

    for(int i = 0; str[i] != NULL; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
}

int main()
{
    string str;
    bool flag;

    cout << "Enter the string : ";
    getline(cin, str);

    flag = isPlaindrome(str);

    if(flag == 0)
    {
        cout << str << " is plaindrome";
    }
    else
    {
        cout << str << " is not palindrome";
    }
    return 0;
}