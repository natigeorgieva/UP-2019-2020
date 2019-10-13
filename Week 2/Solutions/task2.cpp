#include <iostream>
using namespace std;

int main(){
    float input;

    cout<<"Vuvedete chislo : ";
    cin>>input;

    if((input>=0 && input<=3.14) || (input>4 && input<=106 && input!=5)){
        cout<<"Chisloto e v intervala!";
    }else{
        cout<<"Chisloto NE e v intervala";
    }

    cout<<endl;

    return 0;
}
