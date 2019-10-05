#include <iostream>

using namespace std;

int main(){
    int input;  ///Celochislena promenliva v koqto zapisvame vhoda ot klaviaturata

    cout<<"Vuvedete godina: ";
    cin>> input;

    /**
    Usloviqta edna godina da e visokosna:

    Every year that is exactly divisible by four is a leap year, except for years that are exactly
    divisible by 100, but these centurial years are leap years if they are exactly divisible by 400.
    For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are.
    */

    if(input%4==0 && (!(input%100 == 0) || (input%100 == 0 && input%400 == 0))){
       cout<<"Godinata e visokosna!"<<endl;
    }
    else{
        cout<<"Godinata NE e visokosna!"<<endl;
    }

    return 0;
}

