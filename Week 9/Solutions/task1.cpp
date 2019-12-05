#include <iostream>
#include <string>
using namespace std;

/**
 * Sums the occurrences of the letter between
 * ASCII values [n, m]
 *
 * @param[in] str the given string
 * @param[in] n first value, n>=32
 * @param[in] m second value, m<=216
 *
 * @returns -1 if m <= n, else the occurrences of the letter between
 * ASCII values [n, m]
*/
int sumOcc(string str, int n, int m)
{
    if(n>=m)
    {
        return -1;
    }

    int result = 0;

    for(int i = 0; i < str.length(); i++)
    {
        result += ( str[i]>=n&&str[i]<=m ? 1 : 0);
    }

    return result;
}

int main()
{
    string input;
    int n, m;

    cout<<"Enter a string: ";
    getline(cin, input);

    do
    {
        do
        {
            cout<<"Enter n ( n>= 32): ";
            cin>>n;

            if( n<32 || n >= 216)
            {
                cout<<"Wrong input!!";
            }
        }
        while(n<32 || n >= 216);

        do
        {
            cout<<"Enter m ( m <= 216): ";
            cin>>m;

            if( m<=32 || m > 216)
            {
                cout<<"Wrong input!!";
            }
        }
        while(m<=32 || m > 216);


        if(n>=m)
        {
            cout<<"Wrong input!!";
        }
    }
    while(n>=m);

    cout<<"The number of occurrences is: "<<sumOcc(input, n, m);

    return 0;

}
