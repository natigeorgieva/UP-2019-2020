#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

const int R = 10, C = 20, MOD = 25;

int main()
{
    int arr[R][C];

    int r, c;

    srand (time(NULL));

    do
    {
        cout<<"Enter the number of rows (0 - "<<R<<"] : ";
        cin>>r;

    }
    while(!(r>0&&r<=R));

    do
    {
        cout<<"Enter the number of columns (0 - "<<C<<"] : ";
        cin>>c;

    }
    while(!(c>0&&c<=C));

    for(int i = 0; i< r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            arr[i][j] = rand()%MOD;
            cout<<setw(3)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < c; i++)
    {
        cout<<arr[i][i]<<" ";
    }

    for(int i = 0; i<c; i++)
    {
        for(int j = i+1; j < r; j++)
        {
            cout<<arr[j][i]<<" ";
        }
    }

    for(int i = c-1; i>=0; i--)
    {
        for(int j = i-1; j >= 0 ; j--)
        {
            cout<<arr[j][i]<<" ";
        }
    }

}
