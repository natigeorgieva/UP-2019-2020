#include <iostream>
using namespace std;

int main()
{
    float X, Y;

    cout<<"Enter X coordinate:";
    cin>>X;

    cout<<"Enter Y coordinate:";
    cin>>Y;

    bool isInOuterCircle = (X*X + Y*Y <= 4),
         isInInnerCircle = (X*X + Y*Y < 1),
         isInSquare = (X > 0 && X < 1 && Y > -1 && Y < 0);

    if(!isInInnerCircle&&isInOuterCircle&&!isInSquare){
        cout<<"The point is in the area!";
    }else{
        cout<<"The point isn't in the area!";
    }


    cout<<endl;
}

