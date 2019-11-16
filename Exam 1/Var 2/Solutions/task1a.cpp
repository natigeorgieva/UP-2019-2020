#include <iostream>
using namespace std;

int main()
{
    int input;

    do
    {
        cout<<"Enter a 3 digit number: ";
        cin>>input;

        if(!(input>=100&&input<=999))
        {
            cout<<"Incorect input... Press any key.."<<endl;
            cin.ignore();
            cin.get();
        }
    }
    while(!(input>=100&&input<=999));

    int a = input%10, b = input/10%10, c = input/100;

    bool isGreater = false;

    if(a>b&& a>c){
        isGreater = true;
    }else if(b>a&& b>c){
        isGreater = true;
    }else if(c>a&& c>b){
        isGreater = true;
    }

    if(isGreater){
        cout<<"The number satisfies the conditions...";
    }else{
        cout<<"The number doesn't satisfies the conditions...";
    }

    cout<<endl;
}
