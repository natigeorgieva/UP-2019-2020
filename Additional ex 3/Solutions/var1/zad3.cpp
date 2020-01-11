#include <iostream>
using namespace std;

const unsigned int LEN = 5;

class Student{
    public:
        Student();
        Student(string name, float grades[3], int iq);

        void setName(string name);
        void setGrades(float grades[]);
        void setIq(int iq);

        string getName();
        float* getGrades();
        int getIq();

        bool isSmarterThan(Student enemy);


    private:
        string _name;
        float _grades[3];
        int _iq;
};

/**------------Student-Start------------*/
Student::Student(){};
Student::Student(string name, float grades[3], int iq){
    _name = name;
    _iq = iq;
    for(int j = 0; j < 3; j++){
        _grades[j] = grades[j];
    }
}


void Student::setName(string name){
    _name = name;
}
void Student::setGrades(float grades[]){
    for(int j = 0; j < 3; j++){
        _grades[j] = grades[j];
    }
}
void Student::setIq(int iq){
    _iq = iq;
}

string Student::getName(){
    return _name;
}
float* Student::getGrades(){
    return _grades;
}
int Student::getIq(){
    return _iq;
}

bool Student::isSmarterThan(Student enemy){
    float sumThis = 0, sumEnemy = 0;

    for(int j = 0; j < 3; j++){
        sumThis += _grades[j];
        sumEnemy += enemy.getGrades()[j];
    }

    if((sumThis / 3) > (sumEnemy / 3)){
        return true;
    }
    else if((sumThis / 3) < (sumEnemy / 3)){
        return false;
    }
    else{
        if(_iq > enemy.getIq()){
            return true;
        }
        else if(_iq < enemy.getIq()){
            return false;
        }
        else{
            return false;
        }
    }

}
/**------------Student-End--------------*/

int main(){
    float grades1[3] = {5,6 ,4}, grades2[3] = {5,5,5};
    Student student1("Pesho",grades1 , 130), student2("Gosho", grades2, 120);

    if(student1.isSmarterThan(student2)){
        cout<<student1.getName()<<" is smarter than "<<student2.getName()<<endl;
    }
    else{
        cout<<student1.getName()<<" is NOT smarter than "<<student2.getName()<<endl;
    }
}
