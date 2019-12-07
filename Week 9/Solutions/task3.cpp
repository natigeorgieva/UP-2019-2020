#include <iostream>
#include <string>
using namespace std;

/**
 * Returns the longest word in the given string
 *
 * @param[in] str the given string
 * @returns the longest word in the given string, or a empty string
 *          if the given string doesn't contain any words
*/
string minMaxWord(string str){
        int currCount = 0, currMaxCount = 0,  startMax = -1;

        for(int i = 0; i < str.length(); i++){

            while((str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')&&i<str.length()){
                currCount++;
                i++;
            }

            if(currCount>currMaxCount){
                startMax = i - currCount;
                currMaxCount = currCount;
            }

            currCount = 0;
        }

        if(startMax == -1){
            return "";
        }else{
            return str.substr(startMax,  currMaxCount);
        }
}

int main()
{
    string input;

    cout<<"Enter a string: ";
    getline(cin, input);

    cout<<"The longest word is "<<minMaxWord(input);

    return 0;

}
