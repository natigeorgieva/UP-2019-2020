#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    int currMaxLen = 0, currMaxIterLen = 0;

    cout<<"Vuvedete simvolen niz: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++){

        while((i < input.length()) && ((input[i]>='a'&&input[i]<= 'z')||(input[i]>='A'&&input[i]<= 'Z'))){
            currMaxIterLen++;
            i++;
        }

        if(currMaxIterLen > currMaxLen){
            currMaxLen = currMaxIterLen;
            i--;
        }

        currMaxIterLen = 0;
    }

    cout<<"Nai dulgata duma e: "<<currMaxLen;
}
