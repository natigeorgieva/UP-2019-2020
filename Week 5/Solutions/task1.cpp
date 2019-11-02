#include <iostream>
using namespace std;

const int N = 500;

int main(){
    int n;
    float arr[N];

    cout<<"Kolko elementa shte vuvedete [1 - "<<N<<"]: ";
    cin>>n;

    if(n<1&&n>N){
        cout<<"Vhoda e izvun intervala..";
        return 0;
    }

    for(int i = 0; i<n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    int posMin = 0, posMax = 0;

    for(int i = 1; i<n; i++){
        if(arr[i]>arr[posMax]){
            posMax = i;
        }

        if(arr[i]<arr[posMin]){
            posMin = i;
        }
    }

    float temp = arr[posMin];
    arr[posMin] = arr[posMax];
    arr[posMax] = temp;

    cout<<"Masiva sled razmqnata e: ";

    for(int i = 0; i<n; i++){

        cout<<arr[i]<<", ";
    }

    cout<<endl;
}
