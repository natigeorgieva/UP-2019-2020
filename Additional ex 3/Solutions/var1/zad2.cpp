#include <iostream>
using namespace std;

const unsigned int LEN = 5;

struct Student
{
    string name;
    float grades[3];
    int iq;
};

void printSudents(Student arr[], int arrSize);
void sortArr(Student arr[]);
void deleteBadStudent(Student arr[], int &arrSize);

int main()
{
    int arrSize = LEN;

    string namesArr[LEN] = {"Pesho", "Gosho", "Kiro", "Petur", "Stefan"};
    float gradesArr[LEN*3] = {2, 5, 3,  5, 6, 3,  3, 2, 2,  6, 6, 6,  2, 3, 2};
    int iqArr[LEN] = {100, 110, 70, 160, 70};

    Student arr[LEN];

    for(int i = 0; i < LEN; i++)
    {
        arr[i].name = namesArr[i];

        for(int j = 0; j < 3; j++)
        {
            arr[i].grades[j] = gradesArr[i*3 + j];
        }

        arr[i].iq = iqArr[i];
    }

    cout<<"!!!!!!BEFORE CHECK!!!!!!"<<endl<<endl;
    printSudents(arr, arrSize);

    deleteBadStudent(arr, arrSize);
    cout<<"!!!!!!AFTER CHECK 1!!!!!!"<<endl<<endl;
    printSudents(arr, arrSize);
    cout<<"Student count: "<<arrSize<<endl<<endl<<endl;

    deleteBadStudent(arr, arrSize);
    cout<<"!!!!!!AFTER CHECK 2!!!!!!"<<endl<<endl;
    printSudents(arr, arrSize);
    cout<<"Student count: "<<arrSize<<endl<<endl<<endl;

}

void printSudents(Student arr[], int arrSize)
{
    for(int i = 0; i < arrSize; i++)
    {
        cout<<"--------------"<<arr[i].name<<"--------------"<<endl;

        for(int j = 0; j < 3; j++)
        {
            cout<<"Grade "<<j+1<<":"<<arr[i].grades[j]<<endl;
        }

        cout<<"Iq :"<<arr[i].iq<<endl<<endl;
    }
}
void sortArr(Student arr[]){
    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN - i - 1; j++){
            if(arr[j].name=="DELETED"&&arr[j+1].name!="DELETED"){
                Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void deleteBadStudent(Student arr[], int &arrSize)
{
    bool isDeleted = false;

    for(int i = LEN -1; i >= 0 && !isDeleted; i--)
    {
        if(arr[i].name == "DELETED") continue;

        float sum = 0;

        for(int j = 0; j < 3; j++)
        {
            sum += arr[i].grades[j];
        }

        if((arr[i].iq < 80)&&((sum / 3) < 3.0))
        {
            arrSize--;

            arr[i].name = "DELETED";

            for(int j = 0; j < 3; j++)
            {
                arr[i].grades[j] = -1;
            }

            arr[i].iq = -1;

            sortArr(arr);

            return;
        }
    }
}
