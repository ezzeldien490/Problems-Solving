#pragma once

#include <iostream>
using namespace std;

class StudentInformation {
public:

	string StudentName;
	float SubjectsGrades[100];
	int NumOfSubjects;

	
	StudentInformation(string Name, float Grades[100], int NumOfSubjects);
	float GetSumOfGrades();
	float GetAverageOfGrades();
	string PassedorFailed();
	void PrintStudentInformation();
};
