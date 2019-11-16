#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;

    cout<<"Enter a:";
    cin>>a;

    do
    {
        cout<<"Enter b:";
        cin>>b;

        if(b<=a)
        {
            cout<<"Incorect input... Press any key.."<<endl;
            cin.ignore();
            cin.get();
        }
    }
    while(b<=a);

    for(int i = a; i <=b; i++)
    {

        bool t = false;
        if(i%3==0)
        {
            int temp = i;

            while(temp && !t)
            {
                if(temp%10 == 7)
                {
                    t = true;
                    c++;
                }
                temp/=10;
            }
        }
    }

    cout<<"The count is : "<<c;


    cout<<endl;
}

