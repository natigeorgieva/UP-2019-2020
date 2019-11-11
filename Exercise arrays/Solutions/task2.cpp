#include <iostream>
using namespace std;

const unsigned int N = 500;

int main(){
    int arr[N];
    unsigned int n;

    cout<< "Kolko chisla shte vuvedete [1-" <<N<< "] :";
    cin>>n;



    if(n >= N){
        cout<<"Vuvedenata stoinost e izvun intervala!";
        return 0;
    }

    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    cout<<endl<<endl;
    cout<<"Izhod :"<<endl;

    for(int i = 0; i < n/2; i++){
        cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
    }

    if(n%2){
        cout<<arr[n/2];
    }

    cout<<endl;

}
