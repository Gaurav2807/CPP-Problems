
//                                                     * * * * * 
//                                                     * * * * 
//                                                     * * * 
//                                                     * * 
//                                                     *


#include<iostream>
using namespace std;

void printPattern(int rows, int columns)
{
    for(int i = 0; i < rows; i++)
    {
        for (int j = i; j < columns ; j++)
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