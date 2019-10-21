#include <iostream>
using namespace std;

int main(){
    int input, factorial = 1;

    cout<<"What factorial you want to calculate: ";
    cin>>input;

    for(int i = 1; i <= input; i++){
        factorial *= i;
    }

    cout<<input<<"! = "<<factorial<<endl;
}
