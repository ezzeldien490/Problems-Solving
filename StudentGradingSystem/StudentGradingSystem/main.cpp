#include "StudentInformation.h"
#include <string>
#include <iostream>

using namespace std;

struct stStudentInfo
{
	string Name;
	float Grades[100];
	int NumOfSubjects;

};

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message;
		cin >> Number; cout << endl;
	} while (Number <= 0);

	return Number;
}

void ReadStudentInformation(stStudentInfo &StudentInfo)
{
	cout << "Enter name: ";
	getline(cin >>ws, StudentInfo.Name); cout << endl;

	StudentInfo.NumOfSubjects = ReadPositiveNumber("Enter number of subjects: ");
	
	for (int i = 0; i < StudentInfo.NumOfSubjects; i++)
	{
		cout << "Enter grade for subject " << i + 1 << ": ";
		cin >> StudentInfo.Grades[i]; cout << endl;
	}
}

void PrintStudentsGradeResult(int NumberOfStudents)
{
	stStudentInfo StudentsInfo[100];
	for (int i = 0; i < NumberOfStudents; i++)
	{
		cout << "Enter details For Student " << i + 1 << ": \n";
		ReadStudentInformation(StudentsInfo[i]);

		StudentInformation StudentObj(StudentsInfo[i].Name, StudentsInfo[i].Grades, StudentsInfo[i].NumOfSubjects);
		StudentObj.PrintStudentInformation();
	}
}


int main()
{
	int NumberOfStudents = ReadPositiveNumber("Enter the number of students: ");
	PrintStudentsGradeResult(NumberOfStudents);

	return 0;

}