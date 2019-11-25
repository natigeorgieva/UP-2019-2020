#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

typedef unsigned int uint; /// Creating a shorthand for unsigned int

const int N = 100, MOD = 10;

/**
 *Multiplies two matrixes 
 * 
 *@param[in] h1, l1, h2, l2 The respective heights and lenghts of 
 *    the two given arrays
 *@param[in] p1, p2 pointers two the two given matrixes
 *@param[out] res pointer to the matrix that will hold the result to 
 *      the multiplication of p1 and p2
 */
void multMatrix(int (*p1)[N], int (*p2)[N], int (*res)[N], 
                            uint h1, uint l1, uint h2, uint l2);


/**
 *By given  matrx and its dimentions fills it with 
 *Random Generated Numbers (RNG) 
 * 
 *@param[out] p a pointer to the matrix
 *@param[out] h, l references to the heihgt and lenght of the matrix
 */ 
void inptArr(int (*p)[N], uint &h, uint &l);

/**
 * Prints a given matrix
 * 
 * @param[in] p a pointer to the matrix
 *      that will be printed
 * @param[in] h, l  the heihgt and lenght of the matrix
 */
void printArr(int (*p)[N], uint h, uint l);

int main()
{
  int matrix1[N][N], matrix2[N][N], result[N][N];
  uint h1, l1, h2, l2;
    
  inptArr(matrix1, h1, l1);
  cout<<"matrix1 : "<<endl;
  printArr(matrix1, h1, l1);
  inptArr(matrix2, h2, l2);
  cout<<"matrix2 : "<<endl;
  printArr(matrix2, h2, l2);
  
  if(l1!=h2){
      cout<<"Cannot multiply those matrixes..";
      return 0;
  }
  
  multMatrix(matrix1, matrix2, result, h1, l1, h2, l2);
  
  cout<<"result : "<<endl;
  printArr(result, h1, l2);
 
}  

void inptArr(int (*p)[N], uint &h, uint &l){
       srand (time(NULL)); 
       
    do
    {
        cout<<"Enter the number of rows (0 - "<<N<<"] : ";
        cin>>h;

    }
    while(!(h>0&&h<=N));

    do
    {
        cout<<"Enter the number of columns (0 - "<<N<<"] : ";
        cin>>l;

    }
    while(!(l>0&&l<=N));
    
    for(int i = 0; i< h; i++)
    {
        for(int j = 0; j < l; j++)
        {
            p[i][j] = rand()%MOD;
        }
    }
    
} 

void printArr(int (*p)[N], uint h, uint l){
for(int i = 0; i< h; i++)
    {
        for(int j = 0; j < l; j++)
        {
            cout<<setw(3)<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multMatrix(int (*p1)[N], int (*p2)[N], int (*res)[N], uint h1, uint l1, uint h2, uint l2){
    for(uint i = 0; i < h1; i++){
        for(int j = 0; j < l2; j++){
            int sum = 0;
            
            for(int k = 0; k < l1; k++){
                sum += p1[i][k]*p2[k][j] ;
            }
            
            res[i][j] = sum;
        }
    }
}