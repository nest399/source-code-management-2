#include <iostream>
#include <iomanip>
using namespace std;

float average(int, int, int);
int validateInteger();

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; 
	n1 = validateInteger();
	cout << "Second number: "; 
	n2 = validateInteger();
	cout << "Third number: ";
	n3 = validateInteger();

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	cout << endl << "press enter to exit the program";
	cin.ignore(100, '\n');
	cin.get();
}

float average(int i1, int i2, int i3)
{
	float math = (i1 + i2 + i3) / 3.0f;
	return math;
}

int validateInteger()
{
	int variable;
	while (!(cin >> variable) || cin.fail())
	{
		cout << "whoops try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	return(variable);
}
