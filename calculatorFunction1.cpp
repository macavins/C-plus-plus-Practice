#include<iostream>
#include<cmath>

using namespace std;

double calculatorFunction(double a, double b, char op);

int main()
{
	char choice = '+';
	double num1, num2 = 0.0;
	
	cout << "Please input two numbers and an operator: ";
	cout << "Number 1: ";
	cin >> num1;
	cout << "Number 2: ";
	cin >> num2;
	cout << "Operator (+ - * / ^ Q for quit): ";
	cin >> choice;

	while (choice != 'Q')
	{
		cout << "Result: " << calculatorFunction(num1, num2, choice) << endl;

		cout << "Please input two numbers and an operator: ";
		cout << "Number 1: ";
		cin >> num1;
		cout << "Number 2: ";
		cin >> num2;
		cout << "Operator (+ - * / ^ Q for quit): ";
		cin >> choice;
	}

	system("PAUSE");

	return 0;
}

double calculatorFunction(double a, double b, char op)
{
	double result = 0.0;

	if (op == '+')
	{
		result = a + b;
	}
	else if (op == '-')
	{
		result = a - b;
	}
	else if (op == '*')
	{
		result = a * b;
	}
	else if (op == '/')
	{
		result = a / b;
	}
	else if (op == '^')
	{
		result = pow(a, b);
	}
	else
	{
		cout << "Wrong operator please kindly try again! " << endl;
	}

	return result;
}