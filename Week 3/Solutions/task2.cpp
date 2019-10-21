#include <iostream>
using namespace std;

int main(){
    ///INT_MIN i INT_MAX sa macroosi koito zadavat suotvetno
    ///maksimalnite i minimalnite stoinosti na tipa int
    int n, input, max_neg = INT_MIN, min_pos = INT_MAX;

    ///Vuvezhdame kolko chisla shte vuvedem
    ///Mozhe i da zadadem tova da e konstanta, izbora e vash
    cout<<"Enter how many numbers you will input :"<<endl;
    cin>>n;


    ///Pravim cikul koito shte se povotri n puti
    for(int i = 0; i < n; i++){

        /// Za vsqko izpulnenie na cikula suotvetno vuvezhdame chislo
        cout<<"Enter number "<<(i+1)<<": ";
        cin>>input;

        ///Proverqvame dali e polozhitelno
        if(input > 0){
            /// Ako e polozhitelno proverqvame da li e po malko ot tekushtoto
            ///minimalno polozhitelno vuvedeno chislo
            if(input < min_pos){

                ///Ako e taka togava tekushtoto vuvedeno chislo stava minimalno
                min_pos = input;
            }
        ///Ekvivaletno za maksimalnoto otricatelno chislo
        }else if(input < 0){
            if(input > max_neg){
                max_neg = input;
            }
        }
    }


    cout<<"Minimal positive value: "<<min_pos<<endl;
    cout<<"Maximal negative value: "<<max_neg<<endl;
}
