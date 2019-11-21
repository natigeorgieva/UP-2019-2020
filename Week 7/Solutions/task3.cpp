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

    for(int range = 0; range <= r/2; range++)
    {
        for(int i = range; i < c - range ; i++  )
        {
            cout<<arr[range][i]<<" ";
        }
        for(int i = range +1; i < r - range ; i++  )
        {
            cout<<arr[i][c - range - 1]<<" ";
        }
        for(int i = c - range-2 ; i >range ; i--  )
        {
            cout<<arr[r - range - 1][i]<<" ";
        }
        for(int i = r - range - 1; i >  range; i--  )
        {
            cout<<arr[i][range]<<" ";
        }
    }

}
