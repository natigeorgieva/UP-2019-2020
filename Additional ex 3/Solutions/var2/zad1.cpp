#include <iostream>
using namespace std;


const int MAX_SIZE = 20;

bool rec(int arr[], int i, int size, int lastMin){
    if(i>=size){
        return true;
    }

    if(arr[i]<0){
        if(arr[i] <= lastMin){
        rec(arr, i+1,size, arr[i]);
    }else{
        return false;
    }
    }

    return rec(arr, i+1,size, lastMin);
}

int main(){
 int arr[MAX_SIZE], size;

 cout<<"How many elements will you enter: ";
 cin>>size;

 for(int i =0; i < size; i++){
    cin>>arr[i];
 }

 if(rec(arr, 0, size, 0)){
    cout<<"Podredicata ot otricatelni chisla namalqva! ";
 }
 else{
    cout<<"Podredicata ot otricatelni NE chisla namalqva! ";
 }
}
