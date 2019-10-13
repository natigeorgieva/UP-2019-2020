#include <iostream>
using namespace std;

int main(){
    int input;

    cout<<"Vuvedete chislo : ";
    cin>>input;

    if(input%2 == 0 && input%17 == 0 && input%6 != 0 && input%13 != 0){
        cout<<"Chisloto izpunqva uslovieto!";
    }
    else{
        cout<<"Chisloto NE izpunqva uslovieto!";
    }

    cout<<endl;

    return 0;
}
