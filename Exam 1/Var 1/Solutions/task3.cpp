#include <iostream>
using namespace std;

const int N = 20;

int main()
{
    int a, b, arrA[N], arrB[N], result[2*N], index = 0;

    do
    {
        cout<<"Enter a:";
        cin>>a;

        if(!(a>=1&&a<=N))
        {
            cout<<"Incorect input... Press any key.."<<endl;
            cin.ignore();
            cin.get();
        }
    }
    while(!(a>=1&&a<=N));

    for(int i = 0; i < a; i++)
    {
        cin>>arrA[i];
    }

    do
    {
        cout<<"Enter b:";
        cin>>b;

        if(!(b>=1&&b<=N))
        {
            cout<<"Incorect input... Press any key.."<<endl;
            cin.ignore();
            cin.get();
        }
    }
    while(!(b>=1&&b<=N));

    for(int i = 0; i < b; i++)
    {
        cin>>arrB[i];
    }

    for(int i = 0; i < a; i++){
        bool isIn = false;

        for(int j = 0; j < index && !isIn; j++){
            if(arrA[i]== result[j]){
                isIn = true;
            }
        }

        if(!isIn){
            result[index] = arrA[i];
            index++;
        }
    }

    for(int i = 0; i < b; i++){
        bool isIn = false;

        for(int j = 0; j < index && !isIn; j++){
            if(arrB[i]== result[j]){
                isIn = true;
            }
        }

        if(!isIn){
            result[index] = arrB[i];
            index++;
        }
    }

    for(int i = 0; i < index; i++){
        cout<<result[i]<<" ";
    }


    cout<<endl;
}

