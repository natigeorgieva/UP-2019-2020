#include <iostream>
using namespace std;

int main(){
    int input;

    cout<<"Vuvedete chislo : ";
    cin>>input;

    cout<< ((input%2) ? "Nechetno" : "Chetno") <<endl;

    return 0;
}

