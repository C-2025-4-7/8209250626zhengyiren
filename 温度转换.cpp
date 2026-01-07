#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
	for (double cel = 40.0; cel >= 31.0; cel--) {
		double fah = celsius_to_fah(cel);
		cout << cel << "\t" << fah << "\t\t|\t";
		double fah2 = 120.0 - (40.0 - cel) * 10;
		double cel2 = fahrenheit_to_cels(fah2);
		cout << fah2 << "\t\t" << cel2 << endl;

	}
	return 0;
}
