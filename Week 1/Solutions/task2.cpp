#include <iostream>

using namespace std;

int main(){
    int inputA, inputB;  ///Celochislena promenlivi v koqto zapisvame vhoda ot klaviаturata
                         ///V sluchaq mogat i da budat i ot floa ili double tip, nqma znachenie

    cout<<"Vuvedete 2 chisla (razdelenie sus raztoqnie):";
    cin>>inputA>>inputB;


    ///Ponezhe ne mozhem direktno da kazhem inputA=inputB, zashtoto shte zagubim stojnostta na inputA
    ///Suzdavame nova promenliva v koqto shte zapomnim nejnata stojnost
    int temp;


    cout<<"Predi razmenqneto..."<<endl;
    cout<<"InputA: "<<inputA;
    cout<<"\nInputB: "<<inputB;

    temp = inputA;
    inputA = inputB;
    inputB = temp;


    ///Printirame na ekrana iskanoto ot zadachata i programta prikluchva
    cout<<"\n\nSled razmenqneto..."<<endl;
    cout<<"InputA: "<<inputA;
    cout<<"\nInputB: "<<inputB;

    return 0;
}
