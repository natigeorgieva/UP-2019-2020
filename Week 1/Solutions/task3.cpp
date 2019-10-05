#include <iostream>

using namespace std;

int main(){
    int input;  ///Celochislena promenliva v koqto zapisvame vhoda ot klaviаturata

    cout<<"Vuvedete tricifreno chislo: ";
    cin>>input; ///Prisvoqvame vuvedenata stoinost ot klaviаturata na promenlivata

    ///Ako chisloto se deli na trite chisla izpisva suobshteniteo na ekrana
    ///Edno chislo se deli na drugo chilo kogato pri delenie na modul ostatuka e nula
    if(input%2==0 && input%3 == 0 && input%5 == 0){
        cout<<"Chisloto izpulnqva uslovieto"<<endl;
    }
    else{
        cout<<"Chisloto NE izpulnqva uslovieto"<<endl;
    }


    return 0;
}
