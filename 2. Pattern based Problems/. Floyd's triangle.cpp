
//                                                   1  
//                                                   2 3  
//                                                   4 5 6 
//                                                   7 8 9 10                                                                                           



#include<iostream>
using namespace std;

void printPattern(int rows, int columns)
{
    int k = 1;
    
    for(int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}
    
int main()
{
    int row, column;

    cout << "Enter number of rows : ";
    cin >> row;

    cout << endl << "Enter number of columns : ";
    cin >> column;

    printPattern(row, column);

    return 0;
}