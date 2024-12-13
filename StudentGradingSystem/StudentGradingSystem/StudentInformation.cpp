#include "StudentInformation.h"

StudentInformation::StudentInformation(string Name, float Grades[100],int NumberOfSubjects)
{
	StudentName = Name;
	
	for (int i = 0; i < NumberOfSubjects; i++)
		SubjectsGrades[i] = Grades[i];

	NumOfSubjects = NumberOfSubjects;
}

float StudentInformation::GetSumOfGrades()
{
	float SumOfGrades = 0;
	for (int i = 0; i < NumOfSubjects; i++)
		SumOfGrades += SubjectsGrades[i];

	return SumOfGrades;
}

float StudentInformation::GetAverageOfGrades()
{
	return (float)GetSumOfGrades() / NumOfSubjects;
}

string StudentInformation::PassedorFailed()
{
	if (GetAverageOfGrades() >= 50)
		return "Passed";

	return "Failed";
}

void StudentInformation::PrintStudentInformation()
{
	cout << "\nStudent Name : " << StudentName << "\n";
	cout << "Total GRades : " << GetSumOfGrades() << "\n";
	cout << "Average Grade: " << GetAverageOfGrades() << "\n";
	cout << "Status       : " << PassedorFailed() << endl << endl;
}

