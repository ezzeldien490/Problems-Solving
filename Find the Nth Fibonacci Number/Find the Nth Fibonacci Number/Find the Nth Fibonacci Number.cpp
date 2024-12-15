#include "ReadNumber.h"

int FindFibonacciNumber(int Number)
{
	if (Number <= 1)
		return Number;

	int FibonacciNum1 = 0;
	int FibonacciNum2 = 1;

	int FibonaccieNumber = 0;

	for (int i = 2; i <= Number; i++)
	{
			FibonaccieNumber = FibonacciNum1 + FibonacciNum2;
			FibonacciNum1 = FibonacciNum2;
			FibonacciNum2 = FibonaccieNumber;
	}

	return FibonaccieNumber;
}

int main()
{
	int Number = ReadNumberBetweenRange("Enter a number: ", 0, 50);
	int FibonacciNumber = FindFibonacciNumber(Number);

	cout << "The " << Number << "th Fibonaccie number is: " << FibonacciNumber;
	return 0;
}