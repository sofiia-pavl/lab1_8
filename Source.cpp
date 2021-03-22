#include <iostream>
#include "Payment.h"

using namespace std;

int main()
{
	Payment::Date today;
	cout << " Enter todays date:" << endl;
	today.Read();
	cout << endl;

	Payment P1;

	P1.Read();
	P1.Display();

	cout << " Years of expirience: " << P1.CountExpirience(today) << endl;
	cout << " Amount of SumNarah: " << P1.AmountSumNarah() << " uah" << endl;
	cout << " Amount of SumUtrym: " << P1.AmountSumUtrym() << " uah" << endl;
	cout << " Amount of Zarplata: " << P1.AmountZarplata() << " uah" << endl;

	return 0;
}