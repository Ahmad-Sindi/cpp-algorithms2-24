/* Algorithm Challenge & Problem Solving
 * 24 - Max of Random Array
 *
 * This program fills an array (up to 100 elements) with random numbers between 1 and 100. After generating the array, the program prints all elements and determines the maximum value.
 *
 * The program demonstrates:
 *   - Generating random numbers within a range
 *   - Filling a fixed-size array
 *   - Traversing arrays using loops
 *   - Finding the maximum element in a sequence
 *   - Modular design using clean helper functions
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generates a random number in the range [From, To]
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Reads array length and fills it with random numbers
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100); // Fill with random values
}

// Prints all elements of the array
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Returns the maximum element in the array
int MaxNumberInArray(int arr[100], int arrLength)
{
    int Max = arr[0]; // Start from first element for correctness

    for (int i = 1; i < arrLength; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    // Fill array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nMax number in array: ";
    cout << MaxNumberInArray(arr, arrLength) << endl;

    return 0;
}
