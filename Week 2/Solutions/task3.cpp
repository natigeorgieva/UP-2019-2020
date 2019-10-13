#include <iostream>
using namespace std;

int main()
{
    unsigned short int input;

    cout<<"Vuvedete mesec ot godinata : ";
    cin>>input;

    if( !( input>=1 && input<=12 ) )
    {
        cout<<"Validni sa chisla v intervala [1, 12] !!"<<endl;
        return 0;
    }

    switch(input)
    {
    case 1:
    case 2:
    case 12:
    {
        cout<<"Zima..";
    };
    break;
    case 3:
    case 4:
    case 5:
    {
        cout<<"Prolet";
    };
    break;
    case 6:
    case 7:
    case 8:
    {
        cout<<"Lqto";
    };
    break;
    case 9:
    case 10:
    case 11:
    {
        cout<<"Esen";
    };
    break;
    default:
    {
        cout<<"Validni sa chisla v intervala [1, 12] !!"<<endl;
    }
    }
    cout<<endl;

    return 0;
}

