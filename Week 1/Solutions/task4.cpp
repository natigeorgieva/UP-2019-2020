#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float inputX, inputY;  ///Dve promenlivi suotvetno za dvete koordinati na tochkata
                           ///ZABELEZHKA : Izpolzvame float, ponezhe koordinatite mogat da budat realni chisla

    cout<<"Vuvedete X i Y koordinatite na tochkata (otdeleni s raztoqnie): ";
    cin>>inputX>>inputY;

    ///Namirame raztoqnieoto ot centura na okruzhnostta do tochkata
    ///Ako e mezhdu 0 i 6 vkluchitelno znachi tockata se namira v kruga

    float r = sqrt(pow(inputX, 2) + pow(inputY, 2));

    if(r>=0 && r <= 6){
        cout<<"Tochkata e v okruzhnostta!"<<endl;
    }
    else{
         cout<<"Tochkata NE e v okruzhnostta!"<<endl;
    }

    return 0;
}

