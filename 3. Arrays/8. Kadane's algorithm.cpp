                                            /* Maximum Subarray Problem or Kadanes Theorem */

/* The maximum subarray problem is the task of finding the largest possible sum of a contiguous subarray, 
                    within a given one-dimensional array A[1…n] of numbers. */

/* For more information refer : https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d */

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void printMaxSumSubarray(vector<int> array, int *start, int *end, int maxSum)
{
    int *temp = start;

    while(temp != (end + sizeof(int)))
    {
        cout << *temp << "  ";
        temp = temp + sizeof(int);
    }
    cout << endl << maxSum; 
}



void maxSumSubarray(vector<int> array)
{
int currentSum = 0;
int maxSum = INT32_MIN;
int *start, *end;

for(int i : array)
{
    currentSum = currentSum + array.at(i);

    if(maxSum < currentSum)
    {
        maxSum = currentSum;
        end = &array[i];
    }

    if(currentSum < array.at(i))
    {
        currentSum = array.at(i);
        start = &array[i];
    } 
}

printMaxSumSubarray(array, start, end, maxSum);

}



int main()
{
    vector <int> array;
    int size;

    cout << "Enter size of vector : ";
    cin >> size;
    cout << endl;

    for(int i = 0; i < size; i++)
    {
        int value;
        cout << "Enter a number for array[" << i << "] : ";
        cin >> value;

        array.push_back(value);
    }

    //for loop to print the vector 
    for(int i : array)
    {
        cout << array[i] << "  ";
    }

    maxSumSubarray(array); 

    return 0;
}