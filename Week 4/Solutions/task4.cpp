#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input;

    cout<<"Vuvedete broq redove: ";
    cin>>input;

    if(input<0){
        input*=-1;
    }

    int counter = 1;

    for(int i = 0; i < input; i++){
        for(int j = 0; j <= i; j++, counter++){
            cout<<counter<<" ";
        }
        cout<<endl;
    }
}
