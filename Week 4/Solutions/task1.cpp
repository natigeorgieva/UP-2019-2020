#include <iostream>
using namespace std;

int main(){
    int input;

    cout<<"Vuvedete chislo mezhdu 0 i 10: ";
    cin>>input;

    if(!(input>=0 && input<=10)){
        cout<<"Greshen vhod!";
        return 0;
    }

    for(int i = input; i <= 100; i++){
        if(!(i%2)&& !(i%3)){
            cout<<i<<" ";
        }
    }

    cout<<endl;

    return 0;

}
