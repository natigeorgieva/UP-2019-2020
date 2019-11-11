#include <iostream>
using namespace std;

const unsigned int N = 500;

int main(){
    int arr[N];
    unsigned int n;

    cout<< "Kolko chisla shte vuvedete [1-" <<N<< "] :";
    cin>>n;

    n--;

    if(n > N){
        cout<<"Vuvedenata stoinost e izvun intervala!";
        return 0;
    }

    for(int i = 0; i <= n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    cout<<endl<<endl;


    for(int i = 0; i <= n; i+=2){
        cout<<arr[i]<<" ";
    }

    for(int i = (n%2 ? n : n-1); i > 0; i-=2){
        cout<<arr[i]<<" ";
    }

}
