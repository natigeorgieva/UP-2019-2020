#include <iostream>
using namespace std;

const int N = 500;

int main(){
    int arr[N], input = 1, _count = 0;

    do{
        cout<<"Vuvedete chislo (0 - spirane na vuvezhdaneto): ";
        cin>>input;

        if(input%2 == 0 && input % 17 == 0 && input % 6 != 0 &&input % 13 != 0 && input!=0){
            arr[_count] = input;
            _count++;
        }

        if(_count >= N) {
            break;
        }

    }while(input != 0);

    for(int i = _count -1 ; i >=  _count/2; i--){
        cout<<arr[i]<<", ";
    }


    cout<<endl;
}
