#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    int delA = 0;

    for(int i = 1; i <= a/2; i++){
        delA += i;
    }

    delA+=a;

    int sumB = 1;

    while(b){
        sumB*=b%10;
        b/=10;
    }

    if(delA == sumB){
        cout<<"The two numbers satisfies the conditions!";
    }else{
        cout<<"The two numbers doesn't satisfies the conditions!";
    }


    cout<<endl;
}

