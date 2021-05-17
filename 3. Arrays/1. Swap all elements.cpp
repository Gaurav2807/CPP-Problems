                                    /* Swap elements within the array */

#include<iostream>
using namespace std;

void swap(int *array, int size)
{
    for(int i = 0; i < size/2 ; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

int main()
{
    int size;
    
    cout << "Enter size of array : ";
    cin >> size;
    
    int array[size];

    cout << "Initialize the array with numbers : ";

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Present array : ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    swap(array, size);

    cout << endl << "Swapped array : ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }  

    return 0;
}




