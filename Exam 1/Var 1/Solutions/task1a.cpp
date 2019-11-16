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

    int c = 0;

    if(input%10==input/100){
        c++;
    }

    if(input%10==input/10%10){
        c++;
    }

    if(input/100==input/10%10){
        c++;
    }

    if(c==1){
        cout<<"The number satisfies the condition!";
    }else{
        cout<<"The number doesn't satisfies the condition!";
    }

    cout<<endl;
}
