#include<iostream>
using namespace std;

int main()
{
	cout << "Enter the amount you want to deposit: ";
	double depoAmnt;
	cin >> depoAmnt;

	cout << "Enter the number of months: ";
	double months;
	cin >> months;

	cout << "Enter the interest rate: ";
	double rate;
	cin >> rate;
	rate /= 100;

	double totalReceived = 0.0000;
	double depoAmnt1 = depoAmnt;

	for (int i = months; i >= 1; i--)
	{
		double doubleI = i;
		double eachMonthInterest = depoAmnt * doubleI * rate / months;
		eachMonthInterest += depoAmnt1;
		totalReceived += eachMonthInterest;
	}

	double totalInterest = totalReceived - (months * depoAmnt1);
	double eachMonthInterest = totalInterest / months;

	cout << endl << endl;

	cout << "Total money after "<<  months << " months: " << totalReceived << endl;
	cout << "Total interest after "<< months << " months: " << totalInterest << endl;
	cout << "Interest received each month: " << eachMonthInterest << endl;

	system("pause>0");
	return 0;
}