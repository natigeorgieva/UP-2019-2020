#include <iostream>

using namespace std;

int main(){
    int input;  ///Celochislena promenliva v koqto zapisvame vhoda ot klaviaturata

    cout<<"Vuvedete tricifreno chislo: ";
    cin>>input; ///Prisvoqvame vuvedenata stoinost ot klaviаturata na promenlivata

    ///Ako chisloto ne e tricifreno programata se prekratqva
    if(!(input>=100&&input<=999)){
        cout<<"TRIcifreno xhislo molq!"<<endl;
        return 0;
    }

    int units, tens, hundreds;

                                ///Neka za primer imame chisloto 123
    units = input % 10;         ///Delenieto po modul shte ni vurne 3 (123 % 10 = 3)
    tens = (input/10)%10;       ///Deleneito (obiknovenno) s 10 shte ni vurne v sluchaq 12
                                ///i veche sledvasshtoto delenie (po modul) shte ni vurne 2
                                /// 123 / 10 = 12, 12 % 10 = 1
    hundreds = input /100;      ///Tuk delenieto sus 100 shte ni vurne v primera  1

    ///Otpechatvame iziskanoto ot zadachata i programata prikluchva
    cout<<"Hundreds: "<<hundreds<<"\nTens: "<<tens<<"\nUnits: "<<units<<endl;
    cout<<"Sum of digits: "<< units + tens + hundreds<<endl;

    return 0;
}
