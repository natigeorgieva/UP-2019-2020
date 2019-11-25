#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

typedef unsigned int uint; /// Creating a shorthand for unsigned int

const int N = 100, MOD = 10;

/**
 *Sums all prime numbers under the main diagonal of a
 *square matrix
 * 
 *@param arr a pointer to a matrix of a N elements
 *@param len the dimension of the square matrix
 * 
 *@returns the sum of the prime elements under the main 
 * diagonal of the square matrix or 0 if none found
 */
int sumUnderMainDiag(int (*p)[N] /*== p[][N] */, uint len);

/**
 *Checks whether a given number is prime 
 * 
 * @param a the given number
 * 
 * @returns TRUE if the number is prime
 *      and FALSE in the other case
 */
bool isPrime(int a);

/**
 *By given square matrx and its dimention fills it with 
 *Random Generated Numbers (RNG) 
 * 
 * 
 *@param[out] p a pointer to the matrix
 *@param[out] len the lenght of a square matrix
 */
void inptArr(int (*p)[N], uint &len);

/**
 * Prints a given matrix
 * 
 * @param[in] p a pointer to the matrix
 *      that will be printed
 * @param[in] len a refenrece to the dimensition of the square matrix 
 */
void printArr(int (*p)[N], uint len);

int main()
{
    int matrix[N][N];
    uint len;

    inptArr(matrix, len);
    printArr(matrix, len);

    cout << "The sum is " << sumUnderMainDiag(matrix, len);
}

int sumUnderMainDiag(int (*p)[N] /*== arr[][N] */, uint len)
{
    int sum = 0;

    for (uint i = 0; i < len; i++)
    {
        for (uint j = i + 1; j < len; j++)
        {
            if (isPrime(p[j][i]))
                sum += p[j][i];
        }
    }

    return sum;
}

bool isPrime(int a)
{
    bool res = true;

    for (int i = 2; i <= a / 2 && res; i++)
    {
        if (a % i == 0)
            res = false;
    }

    return res;
}

void inptArr(int (*p)[N], uint &len)
{
    srand(time(NULL));

    do
    {
        cout << "Enter the dimension of the matrix [1 - " << N << "] : ";
        cin >> len;

    } while (!(len > 0 && len <= N));

    for (uint i = 0; i < len; i++)
    {
        for (uint j = 0; j < len; j++)
        {
            p[i][j] = rand() % MOD;
        }
        cout << endl;
    }
}

void printArr(int (*p)[N], uint len)
{
    for (uint i = 0; i < len; i++)
    {
        for (uint j = 0; j < len; j++)
        {
            cout << setw(3) << p[i][j] << " ";
        }
        cout << endl;
    }
}