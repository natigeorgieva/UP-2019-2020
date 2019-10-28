#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input;

    cout<<"Vuvedete chislo: ";
    cin>>input;

    input = abs(input);
    bool isPrime = true;

    for(int i = 2; i <= sqrt(input) && isPrime; i++){
        if(!(input % i)){
            isPrime = false;
        }
    }

    if(isPrime){
        cout<<"Chisloto e prosto!";
    }
    else{

        cout<<"Chisloto NE e prosto!";
    }

    cout<<endl;

    return 0;

}
