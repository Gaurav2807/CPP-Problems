                                    /*Swap elements between two arrays*/

#include<iostream>
using namespace std;

void swap(int *array1, int *array2, int size1, int size2)
{
    if(size1 == size2)
    {
        for(int i = 0; i < size1; i++)
        {
            int temp = array1[i];
            array1[i] = array2[i];
            array2[i] = temp;
        }
    }
    else
    {
        cout << endl << "Swapping can not be done";
    }
    
}

int main()
{
    int size1, size2;

    cout << "Enter size of array 1 : ";
    cin >> size1;
    
    int array1[size1];

    cout << "Initialize the array with numbers : ";

    for(int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter size of array : ";
    cin >> size2;
    
    int array2[size2];

    cout << "Initialize the array with numbers : ";

    for(int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }

    cout << "Present array 1 : ";
    for(int i = 0; i < size1; i++)
    {
        cout << array1[i] << " ";
    }

    cout << endl << "Present array 2 : ";
    for(int i = 0; i < size2; i++)
    {
        cout << array2[i] << " ";
    }

    swap(array1, array2, size1, size2);

    if(size1 == size2)
    {
        cout << endl << endl << "Swapped array 1 : ";
        for(int i = 0; i < size1; i++)
        {
            cout << array1[i] << " ";
        }  

        cout << endl << "Swapped array 2 : ";
        for(int i = 0; i < size2; i++)
        {
            cout << array2[i] << " ";
        }
    }
    return 0;   
}