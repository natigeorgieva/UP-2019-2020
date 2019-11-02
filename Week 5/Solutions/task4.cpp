#include <iostream>
using namespace std;

const int N = 500;

int main(){
    int arr[N], n;
    bool isPalindome = true;

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

    for(int i = 0; i < n/2 && isPalindome; i++){
        if(arr[i] != arr[n-i-1]){
            isPalindome = false;
        }
    }

    if(isPalindome){
        cout<<"Masivut e palindrom";
    }
    else{
        cout<<"Masivut NE e palindrom";
    }


    cout<<endl;
}
