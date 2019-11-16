#include <iostream>
using namespace std;

int main()
{
    float X, Y;

    cout<<"Enter X coordinate:";
    cin>>X;

    cout<<"Enter Y coordinate:";
    cin>>Y;

    bool isInSemiCircle = (X*X + Y*Y <= 4)&&(Y>=0) ,
         isInTriangle = (X>-1&&X<0&&Y<1&&Y>-X);

    if(isInSemiCircle&&!isInTriangle){
        cout<<"The point is in the area!";
    }else{
        cout<<"The point isn't in the area!";
    }


    cout<<endl;
}

