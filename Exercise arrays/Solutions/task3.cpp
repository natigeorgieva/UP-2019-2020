#include <iostream>
#include <cmath>
using namespace std;

const unsigned int N = 500;

int main(){
    int arr[N];
    unsigned int n, inpt_count = 0;
    int inpt, k;

    cout<< "Kolko chisla shte vuvedete [1-" <<N<< "] :";
    cin>>n;



    if(n >= N){
        cout<<"Vuvedenata stoinost e izvun intervala!";
        return 0;
    }


    while(inpt_count < n){
        cout<<"arr ["<< inpt_count << "] = ";
        cin>>inpt;

        bool isPrime = ( inpt!= 1);

        for(int i = 2 ; i <= sqrt(inpt) && isPrime; i++){
            if(inpt%i == 0){
                isPrime = false;
            }
        }

        if(!isPrime){
            cout<<endl<<"Vuvedenoto chislo ne e prosto! Opitaite pak"<<endl;
            continue;
        }

        arr[inpt_count] = inpt;
        inpt_count++;
    }

    cout<<"\nVuvedete k: ";
    cin>>k;

    for(unsigned int i = 0; i < n && k != 1; i++){
        while(k % arr[i] == 0){
            k = k / arr[i];
        }
    }

    cout<<endl<<endl;
    cout<<"Izhod :"<<endl;
    if(k==1){
        cout<<"V masiva se sudrzhat vsichki prosti mnozhiteli na k!";
    }
    else{
        cout<<"V masiva ne se sudrzhat vsichki prosti mnozhiteli na k!";
    }

    cout<<endl;

}
