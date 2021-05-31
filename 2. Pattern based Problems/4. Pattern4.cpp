//                                                    * 
//                                                  * * 
//                                                * * * 
//                                              * * * * 
//                                            * * * * *                                                                                           



#include<iostream>
using namespace std;

void printPattern(int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "  ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "* ";
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