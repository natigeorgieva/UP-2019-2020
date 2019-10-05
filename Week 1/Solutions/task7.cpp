#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ///Neka nasheto kvadrotno uravnenie e ot vida ax^2 + bx + c

    float a, b, c;  ///"Realni" promenlivi v koito shte zapishem podadenite ot klavieturata stoinosti

    cout<<"Vuvedete parametur 'a': ";
    cin>>a;
    cout<<"Vuvedete parametur 'b': ";
    cin>>b;
    cout<<"Vuvedete parametur 'c': ";
    cin>>c;

    ///Presmqtame diskriminantata
    float discriminant = b*b - 4*a*c;

    if(discriminant < 0){
        cout<<"Nqma realni koreni!"<<endl;
    }
    else if(discriminant == 0){
        cout<<"Edin realen koren: "<<(-b)/(2*a)<<endl;
    }
    else{
         cout<<"Dva realeni korena: "<<endl;
         cout<<"x1 = "<<(-b - sqrt(discriminant))/(2*a)<<endl;
         cout<<"x2 = "<<(-b + sqrt(discriminant))/(2*a)<<endl;
    }

    return 0;
}
