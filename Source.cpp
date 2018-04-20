#include <iostream>
#include <math.h>

using namespace std;

void sumaSzereguMaclaurinaF(float x, float epsilon)
{
	cout << "Suma szeregu potegowego dla float   " << x << "   " << epsilon << endl;
	float suma = 0;
	float k = 1;
	double wynik = 0;
	float roznica = 0;
	float roznica2 = 0;

	wynik = log(1 + x);

	while (1)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(suma - wynik);

		if (roznica < epsilon || roznica == roznica2)
			break;

		roznica2 = roznica;

		k++;
	}

	cout << k << ": " << suma << "  " << roznica << endl;
	
}

void sumaSzereguMaclaurinaD(double x, double epsilon)
{
	cout << "Suma szeregu potegowego dla double   " << x << "   "  << epsilon << endl;
	
	double suma = 0;
	double k = 1;
	double wynik = 0;
	double roznica = 0;
	double roznica2 = 0;

	wynik = log(1 + x);
	while (1)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(suma - wynik);
		
		if (roznica < epsilon || roznica == roznica2)
			break;

		roznica2 = roznica;
		k++;
	}
	cout << k << ": " << suma << "  " << roznica << endl;

	cout << wynik << endl;

}

void sumaSzereguMaclaurinaD_wzglednie(double x, double epsilon)
{
	cout << "Suma szeregu potegowego dla double - blad wzgledny   " << x << endl;

	double suma = 0;
	double k = 1;
	double wynik = 0;
	double roznica = 0;
	double roznica2 = 0;

	wynik = log(1 + x);
	while (1)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(suma - wynik) / wynik;

		if (roznica < epsilon || roznica == roznica2)
			break;

		roznica2 = roznica;

		k++;
	}
	cout << k << ": " << suma << "  " << roznica << endl;

}

void sumaSzereguMaclaurinaF_wzglednie(float x, float epsilon)
{
	cout << "Suma szeregu potegowego dla float - blad wzgledny   " << x << endl;

	float suma = 0;
	float k = 1;
	float wynik = 0;
	float roznica = 0;
	float roznica2 = 0;

	wynik = log(1 + x);
	while (1)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(suma - wynik) / wynik;

		if (roznica < epsilon || roznica == roznica2)
			break;

		roznica2 = roznica;

		k++;
	}
	cout << k << ": " << suma << "  " << roznica << endl;

}

void poprzedniWyraz(double x, double epsilon)
{
	cout << "Suma szeregu potegowego dla double - obliczanie za pomoca poprzedniego wyrazu  " << x << "   " << epsilon << endl;

	double suma = x;
	double poprzedni = x;
	double k = 2;
	double wynik = 0;
	double roznica = 0;
	double roznica2 = 0;

	wynik = log(1 + x);
	while (1)
	{
		poprzedni *= (x-(k*x)) / k;
		suma += poprzedni;
		roznica = fabs(suma - wynik);

		if (roznica < epsilon || roznica == roznica2)
			break;

		roznica2 = roznica;
		k++;
	}
	cout << k << ": " << suma << "  " << roznica << endl;

	//cout << "    " <<wynik << endl;

}


void sumaSzreguMaxMin(double x)
{
	cout << "Suma szeregu potegowego dla double - sumowanie od najwiekszych" << endl;

	double suma = 0;
	double wynik = log(x + 1);
	double roznica = 0;

	for (int k = 50; k > 0; k--)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(wynik - roznica);

		cout << k << ":   " << suma << "   " << roznica << endl;

		

	}
	cout << endl;
	cout << wynik << endl;
}

void sumaSzreguMinMax(double x)
{
	cout << "Suma szeregu potegowego dla double - sumowanie od najmiejszych" << endl;

	double suma = 0;
	double wynik = log(x + 1);
	double roznica = 0;

	for (int k = 1; k <= 20; k++)
	{
		suma += pow(-1.0, k + 1)*(pow(x, k) / k);
		roznica = fabs(wynik - roznica);

		cout << k << ":   " << suma << "   " << roznica << endl;
	}


}


void main()
{
	double potega;
	double epsilon = 0;

	while (cin >> potega)
	{

		epsilon = pow(10, -potega);

		cout.precision(30);

	/*	
		sumaSzereguMaclaurinaF(0.2, epsilon);
		sumaSzereguMaclaurinaD(0.2, epsilon);

		sumaSzereguMaclaurinaF(0.5, epsilon);
		sumaSzereguMaclaurinaD(0.5, epsilon);

		sumaSzreguMaxMin();

		sumaSzereguMaclaurinaF(0.8, epsilon);
		sumaSzereguMaclaurinaD(0.8, epsilon);

		sumaSzereguMaclaurinaF(0.99, epsilon);
		sumaSzereguMaclaurinaD(0.99, epsilon);*/
/*
		sumaSzereguMaclaurinaD_wzglednie(0.99, epsilon);
		sumaSzereguMaclaurinaD_wzglednie(0.8, epsilon);
		sumaSzereguMaclaurinaD_wzglednie(0.5, epsilon);
		sumaSzereguMaclaurinaD_wzglednie(0.2, epsilon);

		sumaSzereguMaclaurinaF_wzglednie(0.99, epsilon);
		sumaSzereguMaclaurinaF_wzglednie(0.8, epsilon);
		sumaSzereguMaclaurinaF_wzglednie(0.5, epsilon);
		sumaSzereguMaclaurinaF_wzglednie(0.2, epsilon);*/

		//poprzedniWyrazD(0.5, epsilon);

	/*	sumaSzreguMaxMin(0.2);
		sumaSzreguMaxMin(0.5);
		sumaSzreguMaxMin(0.8);
		sumaSzreguMaxMin(0.99);
*/


		//poprzedniWyraz(0.2, epsilon);
	//	poprzedniWyraz(0.5, epsilon);
		//poprzedniWyraz(0.8, epsilon);
		poprzedniWyraz(0.99, epsilon);

		/*sumaSzreguMinMax(0.2);
		sumaSzreguMinMax(0.5);
		sumaSzreguMinMax(0.8);
		sumaSzreguMinMax(0.99);*/

	}
}