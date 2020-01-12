#include <iostream>
#include <math.h>
using namespace std;


const int MAX_SIZE = 20, SCORE = 3;

struct Laptop{
    float size;
    string brand;
    int scores[SCORE];
};

/**
    Понеже float/double аритметиката не е точна наука
    при сравнение на такива числа се налага да проверяваме дали
    тяхната разлика е по-малка от някаква грешка epsilon
*/
bool cmpf(float A, float B, float epsilon = 0.005f)
{
    return (fabs(A - B) < epsilon);
}

void removeElement(Laptop arr[], int& size, int pos){
    for(int i = pos; i<size-1; i++){
        arr[i] = arr[i+1];
    }

    size--;
}

void findLaptop(Laptop arr[], int& size){
    int posCurrMin = -1;
    float averageCurrMin = 100;

    for(int i = 0; i< size; i++){
        /**
            Проверяваме две float числа дали са равни. Изплозваме оператора ?:,
            за да дадем стойност по подразбиране, ако все още не сме намерили
            лаптоп с изискания размер, а все пак искаме да направим сравнението.
        */
        if(cmpf(arr[i].size, (posCurrMin!=-1 ? arr[posCurrMin].size: arr[i].size))){
            float avrg = 0;
            for(int j = 0; j < SCORE; j++){
                avrg += arr[i].scores[j];
            }

            avrg/=3;

            if(averageCurrMin > avrg){
                posCurrMin = i;
                averageCurrMin = avrg;
            }
        }
    }

    if(posCurrMin!=-1){
        removeElement(arr, size, posCurrMin);
    }
}

void printArr(Laptop arr[],int  size){
    for(int i =0; i<size; i++){
        cout<<arr[i].brand<<" "<<arr[i].size<<"\' ";
        for(int j = 0; j<SCORE; j++){
            cout<<arr[i].scores[j]<<" ";
        }

        cout<<endl;
    }
}


int main(){
  Laptop arr[MAX_SIZE];
  int size;

 cout<<"How many elements will you enter: ";
 cin>>size;

 for(int i =0; i < size; i++){
    cout<<"Brand: ";
    cin>>arr[i].brand;
    cout<<"Display size";
    cin>>arr[i].size;

    cout<<"Enter "<< SCORE<< " scores: ";
    for(int j = 0; j < SCORE; j++){
        cin>> arr[i].scores[j];
    }
 }

 cout<<"-------BEFORE FUNCTION-------"<<endl;

 printArr(arr, size);

 findLaptop(arr, size);


 cout<<"-------AFTER FUNCTION-------"<<endl;

 printArr(arr, size);

}

/**
5
ABC
15.6
5 5 5
ABCD
16.6
1 2 3
ABCDE
16.6
1 2 3
ABCDEF
15.6
5 5 4
ABCDEFG
15.6
5 5 4
*/
