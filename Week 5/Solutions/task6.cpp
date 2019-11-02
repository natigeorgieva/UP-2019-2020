#include <iostream>
using namespace std;

const int N = 500;

int main(){
    float arr[N], input = 1, sum = 0;
    int _count = 0;

    do{
        cout<<"Vuvedete chislo (otricatelno za spirane na vuvezhdaneto): ";
        cin>>input;

        if((input>= 0 && input<3.14) ||(input>6&&input<=106&&input!=5)){
            arr[_count] = input;
            _count++;
        }

        if(_count >= N) {
            break;
        }

    }while(input >= 0);

    for(int i = _count -1 ; i >=  _count/2; i--){
        sum += arr[i];
    }

    cout<<"Sredno aritmetichnata suma na vtorata polovina na masiva e : "<<sum/(_count/2);


    cout<<endl;
}
