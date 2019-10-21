#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter the following sides.."<<endl;
    cout<<"\ta = ";
    cin>>a;
    cout<<"\tb = ";
    cin>>b;
    cout<<"\tc = ";
    cin>>c;


    if(a < b + c && b < a + c && c < a + b){
        cout<<"Exist, ";

        if(a == b || a == c || b == c){
            cout<<"isosceles.";
        }else if(a == b && a == c){
            cout<<"equilateral.";
        }
        else{
            cout<<"scalene.";
        }

    }
    else{
        cout<<"Does not exist!";
    }

    cout<<endl;
}
