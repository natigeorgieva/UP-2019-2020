#include <iostream>
#include <string>
using namespace std;

typedef unsigned int uint; /// Creating a shorthand for unsigned int

const int N = 100;

/**
 * Reverse a given array of integers
 * 
 * @param[in, out] arr a pointer to the beginnig of the array
 *      that will be reversed
 * @param[in] len the lenght of the array     
 */
void reverse(int *arr, uint len);

/**
 * Prints a given array
 * 
 * @param[in] arr a pointer to the beginnig of the array
 *      that will be printed
 * @param[in] len the lenght of the array 
 */
void printArr(int *arr, uint len);

int main()
{
    int arr[N];
    unsigned int n;

    do
    {
        cout << "How many numbers you will enter [1-" << N << "]";
        cin >> n;

        if (!(n >= 1 && n <= N))
        {
            cout << "Incorect input... Press any key.." << endl;
            cin.ignore();
            cin.get();
        }
    } while (!(n >= 1 && n <= N));

    for (uint i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before reverse: " << endl;
    printArr(arr, n);

    reverse(arr, n);

    cout << endl
         << "After reverse: " << endl;
    printArr(arr, n);
}

void reverse(int *arr, unsigned int n)
{
    for (uint i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void printArr(int *arr, unsigned int len)
{
    for (uint i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}