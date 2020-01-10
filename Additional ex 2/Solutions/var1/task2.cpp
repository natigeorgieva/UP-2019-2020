/**
В случая тази програма само намира кои числа се срещат 'k' на брой пъти
в масива и записва в резултатния само веднъж числото отговарящо на изискването.
Според мен се получава двусмислица между условите и примера, така че съм решил по
трудния вариянт. Ако искате да ви изпечата както в примера не е нужно да сортирате
масива. Просто го обхождате елемент по елемент и всеки път проверявате колко пъти се среща
 текищя елемент в масива. Ако изпълнява условието записвате това число в резултатния масив.
*/

#include <iostream>
#include <string>
using namespace std;

const int N = 100;

void findOccurrences(float input[], float output[], int arrLen, int& outputLen, int times);
void selectionSort(float arr[], int n);

int main(){
    float arr[N], result[N];
    int len, lenRes = 0, k;

    do
    {
        cout << "Enter the length of the array [1 - " << N << "] : ";
        cin >> len;
    } while (!(len > 0 && len <= N));

    for(int i = 0; i < len; i++){
        cin>>arr[i];
    }

    do{

        cout<<"Minimal times found: ";
        cin>> k ;
    }while(k<1);

    selectionSort(arr, len);
    findOccurrences(arr, result, len, lenRes, k);

    for(int i = 0; i < lenRes; i++){
        cout<<result[i]<<" ";
    }
}

void findOccurrences(float input[], float output[], int arrLen, int& outputLen ,int times){
    int currCount = 1;

    for(int i = 0; i < arrLen - 1; i++){
        while((i < arrLen - 1)&&(input[i] == input[i + 1])){
            currCount++;
            i++;
        }

        if(currCount >= times){
            output[outputLen] = input[i];
            outputLen ++;
        }

        currCount = 1;
    }
}

void selectionSort(float arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        float temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
