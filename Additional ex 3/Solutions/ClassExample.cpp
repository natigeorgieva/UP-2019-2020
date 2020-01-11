#include <iostream>
#include <string>

using namespace std;

typedef unsigned int uint;

const int MAX_SIZE = 20;

class Student {
private:
	string Name;
	uint Id, CurrGradesSize;
	float Grades[MAX_SIZE];

public:

	///Конструктури 
	Student();		///По подразиране, защото сме направили друг
	Student(string _Name, uint _Id, uint _CurrGzSz,  const float* _Grades); ///Конструктур със списък с паметри


	///----Мутатори

	///Get-ъри: Това са функции, които връщат стойностите скрити от функциите извън класа
	string getName()const { return Name; }
	uint getId()const {return Id; }
	uint getCurrGrSz()const { return CurrGradesSize; }
	///Връщаме константен указател към масива, защото не
	///искаме някой друг да го променя извън класа
	const float* getGrades() { return Grades; }  


	///Set -ъри: Функции, които използваме да променяме данните на даден обект от класа
	void setName(string _Name) { Name = _Name; }
	void setId(uint _Id) { Id = _Id; }
	void setCurrGrSz(uint _CurrGrSz) { CurrGradesSize = _CurrGrSz; }
	void setGrades(const float* _Grades) { for (int i = 0; i < CurrGradesSize; i++)Grades[i] = _Grades[i]; }

	///Други член фунцкии

	float AverageGrades();
	void PrintStudent();
};


void InputStudents(Student arr[], uint size);

int main()
{
	Student arr[MAX_SIZE];
	uint size;
	cout << "Enter the number of students : ";
	cin >> size;
    

	InputStudents(arr, size);

	for (uint i = 0; i < size; i++) {
		arr[i].PrintStudent();
		cout << "And his average score is " << arr[i].AverageGrades()<<endl<<endl;
	}
}


Student::Student() {
	Name = "Default";
	Id = 0;
	CurrGradesSize = 0;
	for (int i = 0; i < MAX_SIZE; i++) {
		Grades[i] = -1;
	}
}

Student::Student(string _Name, uint _Id, uint _CurrGzSz, const float* _Grades) {
	Name = _Name;
	Id = _Id;
	CurrGradesSize = _CurrGzSz;

	for (int i = 0; i < CurrGradesSize; i++) {
		Grades[i] = _Grades[i];
	}
}

float Student::AverageGrades() {
	float result = 0;

	for (int i = 0; i < CurrGradesSize; i++) result += Grades[i];

	return result / CurrGradesSize;
}

void Student::PrintStudent() {
	cout << "Name :" << Name;
	cout << "\nId : " << Id << endl;
	for (int i = 0; i < CurrGradesSize; i++) {
		cout << Grades[i] << " ";
	}

	cout << endl;
}

void InputStudents(Student arr[], uint size) {
	
	if (size<0 || size>MAX_SIZE) {
		cout << "Wrong input in InputStdents()";
		return;
	}

	string Name;
	uint CurrSZ, Id;
	float Grade[MAX_SIZE];

	for (int i = 0; i < size; i++) {
		cout << "Student " << i + 1 << endl;

		cout << "Enter name: ";
		cin.ignore();
		getline(cin, Name);
		arr[i].setName(Name);

		cout << "Enter Id: ";
		cin >> Id;
		arr[i].setId(Id);

		cout << "Enter number of grades : ";
		cin >> CurrSZ;

		if (CurrSZ<0 || CurrSZ>MAX_SIZE) {
			i--;
			continue;
		}

		arr[i].setCurrGrSz(CurrSZ);

		for (int j = 0; j < CurrSZ; j++) {
			cout << "Ocenka " << j << " : ";
			cin >> Grade[j];
		}

		arr[i].setGrades(Grade);
	}
}