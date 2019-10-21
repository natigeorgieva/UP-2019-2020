#include <iostream>
using namespace std;

int main(){
    int input;

    cout<<"Enter the index of the element you wish to print: "<<endl;
    cin>>input;


    for(int i = 1; i <= input; i++){

        cout<<"a_"<<i<<" = "<< i*i + 3*i<<",  ";
    }

    cout<<"..."<<endl;

}
