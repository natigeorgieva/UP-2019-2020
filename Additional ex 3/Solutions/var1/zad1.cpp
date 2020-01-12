#include <iostream>
using namespace std;

const unsigned int LEN = 5;

bool isIncreasing(float arr[], float prevNum, int index);

int main(){
    float arr[LEN] = {1, 2, -5, 0, 3};

    if(isIncreasing(arr, -1 , 0)){
        cout<<"The subset of all positive integers is increasing!"<<endl;
    }
    else{
        cout<<"The subset of all positive integers is NOT increasing!"<<endl;
    }
}

bool isIncreasing(float arr[], float prevNum, int index){
    if(index >= LEN ) return true;

    if(arr[index] > 0){
        return prevNum < arr[index] ? isIncreasing(arr, arr[index], index+1) : false;

    }

    return isIncreasing(arr, arr[index], index+1);

}
