#include <iostream>
#include <string>
using namespace std;

/**
 * By given a string finds the length of the longest and shortest word
 * in it and the number of words
 *
 * @param[in] str the given string
 * @param[out] minWord the length of the shortest word
 * @param[out] maxWord the length of the longest word
 * @param[out] countWord the number of words
*/
void minMaxWord(string str, int& minWord, int& maxWord, int& countWords){
        minWord =INT_MAX;
        maxWord = INT_MIN;
        countWords = 0;     ///Izbroqvame dumite kato broim intervalite

        int currCount = 0;  ///Broqch za dulzhinata na tekishtata duma

        if(str.length() == 0) return;

        for(int i = 0; i < str.length(); i++){

            /**
                Pri dostigane na raztoqnie, proverqvame razmera na tekuhtata duma
                dali e nai-maluk i nai-golqm. Zanulqvame broqcha na razmera na dumite
                i uvelichavame broqna dumite
            */
            if(str[i] == ' '){
                if(currCount < minWord){
                    minWord = currCount;
                }

                if(currCount > maxWord){
                    maxWord = currCount;
                }

                currCount = 0;

                countWords++;
            }else{
                currCount++;
            }


        }

        countWords++; ///Broq na dumite vinagi e s edno po-golqm ot tozi na raztoqniqta
}

int main()
{
    string input;
    int minWord, maxWord, countWords;

    cout<<"Enter a string: ";
    getline(cin, input);

    minMaxWord(input, minWord, maxWord, countWords);

    cout<<"Words count: "<<countWords;
    cout<<"\nMin length: "<<minWord;
    cout<<"\nMax length: "<<maxWord;

    return 0;

}
