#include <iostream>
#include <string>
using namespace std;

typedef unsigned int uint; /// Creating a shorthand for unsigned int

const int N = 100;

/**
 * By given two sorted arrays, merges them in a third so the third
 * is again sorted
 * 
 * @param[in] arr1, arr2  pointers to the beginnigs of the arrays
 *     that will be merged
 * @param[in] len1, len2 the lenghts of the respective arrays
 * @param[out] res a pointer to the array to which arr1 and arr2 
 *     will be merged
 */
void mergeArrs(int *arr1, int *arr2, int *res, uint len1, uint len2);

/**
 *By given array, sets the used lenght of the array and fills it
 *with values
 * 
 *@param[out] arr a pointer to the given array
 *@param[out] len a refenrece to the lenght of the given array
 */ 
void inptArr(int *arr, uint &len);

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
  int arr1[N], arr2[N], result[2*N];
  unsigned int len1, len2;
    
  inptArr(arr1, len1);
  inptArr(arr2, len2);
  
  mergeArrs(arr1, arr2, result, len1, len2);
  
  printArr(result, len1+len2);

}  
  

void mergeArrs(int *arr1, int *arr2, int *res, uint len1, uint len2){
    uint i1 = 0, i2 = 0, i3 = 0;
    
    while(i1<len1&&i2<len2){
        if(arr1[i1] <= arr2[i2]){
            res[i3] = arr1[i1];
            i1++;
            i3++;
        }else{
            res[i3] = arr2[i2];
            i2++;
            i3++;
        }
    }
    
    while(i1<len1){
        res[i3] = arr1[i1];
            i1++;
            i3++;
    }
    
    while(i2<len2){
        res[i3] = arr2[i2];
            i2++;
            i3++;
    }
    
}

void inptArr(int *arr, uint &len){
       do
    {
        cout<<"How many numbers you will enter for arr1 [1-"<<N<<"]";
        cin>>len;

        if(!(len>=1&&len<=N))
        {
            cout<<"Incorect input... Press any key.."<<endl;
            cin.ignore();
            cin.get();
        }
    }while(!(len>=1&&len<=N));
    
    
    for(uint i = 0; i < len; i++){
        cin>> arr[i];
    }
    
} 


void printArr(int *arr, unsigned int len){
    for(uint i = 0; i < len; i++){
        cout<< arr[i]<<" ";
    } 
}