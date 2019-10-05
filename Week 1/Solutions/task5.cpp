#include <iostream>

using namespace std;

int main(){
    int input;  ///Celochislena promenliva v koqto zapisvame vhoda ot klaviaturata

    cout<<"Vuvedete chislo: ";
    cin>>input; ///Prisvoqvame vuvedenata stoinost ot klaviаturata na promenlivata

    ///Ako chisloto se deli na 2 izpisvame podhodqshto suobshtenie na ekrana
    if(input%2 == 0 ){
        cout<<"Chisloto e chetno"<<endl;
    }
    else{
        cout<<"Chisloto NE e chetno"<<endl;
    }

    return 0;
}
