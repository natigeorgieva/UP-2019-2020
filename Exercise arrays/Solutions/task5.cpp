#include <iostream>
#include <cmath>
using namespace std;

const unsigned int N = 500;

int main(){
    int arr[N];
    bool  wasOn[N];
    unsigned int n;

    cout<< "Kolko chisla shte vuvedete [5-" <<N<< "] :";
    cin>>n;



    if(n >= N && n<=5){
        cout<<"Vuvedenata stoinost e izvun intervala!";
        return 0;
    }


    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
        wasOn[i] = false;
    }

    int pos = n/2;

    bool isPossible = true;
    int countSteps = 0;

    while(pos>=0&&pos<n&&isPossible){
        if(wasOn[pos]){
            isPossible = false;
        }

        wasOn[pos] = true;

        if(arr[pos]%2){
            pos -= arr[pos];
        }
        else{
            pos += arr[pos];
        }

        countSteps++;
    }

    if(isPossible){
        cout<<"Izliza se ot masiva s "<<countSteps<<" stupki!";
    }
    else{
        cout<<"Ne mozhe da se izleze ot masiva!";
    }

    cout<<endl;

}
