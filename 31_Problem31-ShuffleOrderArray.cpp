/*
Problem #31
Copy Array in Reverse Order.

Concepts:
- Array Indexing (Forward vs Backward)
- Loop Control (i starting from 0, j starting from Length-1)
- Random Number Generation
- Array Manipulation
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random number within a specific range
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Function to fill the array with random numbers
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

// Function to print array elements
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
-----------------------------------------------------------
Function: CopyArrayInReverseOrder
Purpose : Copies elements from arrSource to arrDestination
          in reverse order using a dual-index approach.
-----------------------------------------------------------
*/
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    // Start i from 0 (destination start) 
    // and j from arrLength - 1 (source end)
    for (int i = 0, j = arrLength - 1; i < arrLength; i++, j--)
    {
        arrDestination[i] = arrSource[j];
    }
}

int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int arrSource[100], arrLength;
    int arrDestination[100];

    // Fill and Print the original array
    FillArrayWithRandomNumbers(arrSource, arrLength);
    
    cout << "\nOriginal Array Elements:\n";
    PrintArray(arrSource, arrLength);

    // Copying process in reverse
    CopyArrayInReverseOrder(arrSource, arrDestination, arrLength);

    // Print the reversed array
    cout << "\nArray Elements After Copying in Reverse:\n";
    PrintArray(arrDestination, arrLength);

    system("pause>0");
    return 0;
}
