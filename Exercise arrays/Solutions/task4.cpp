#include <iostream>
#include <cmath>
using namespace std;

const unsigned int N = 500;

int main(){
    float arr[N];
    unsigned int n, inpt_count = 0;

    cout<< "Kolko chisla shte vuvedete [2-" <<N<< "] :";
    cin>>n;



    if(n >= N && n<=2){
        cout<<"Vuvedenata stoinost e izvun intervala!";
        return 0;
    }


    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }

    bool isArithmetic = true, isGeometrical = true;

    float d = arr[1] - arr[0], q;

    if(arr[0] == 0){
        isGeometrical = false;
    }
    else{
        q = arr[1]/arr[0];
    }



    for(int i = 1; i < n && isArithmetic; i++){
        if(arr[i] != arr[i-1] + d){
            isArithmetic = false;
        }
    }

    for(int i = 1; i < n && isGeometrical; i++){
        if(arr[i] != arr[i-1]*q){
            isGeometrical = false;
        }
    }

    if(isGeometrical) cout<<"Chislata obrazuvat geomotrichna progresiq!"<<endl;
    else cout<<"Chislata NE obrazuvat geomotrichna progresiq!"<<endl;

    if(isArithmetic)  cout<<"Chislata obrazuvat aritmetichna progresiq!"<<endl;
    else cout<<"Chislata NE obrazuvat aritmetichna progresiq!"<<endl;

    cout<<endl;

}
