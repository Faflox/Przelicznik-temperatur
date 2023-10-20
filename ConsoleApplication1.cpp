#include <iostream>
#include<cstdlib>

int main()
{
	double temp;
	bool wlacznik;
	while(wlacznik=1)
	{ 
	double temp=0;
	char jednostka;
	std::cout << "************* Zamiana temperatur *************\n\n";
	std::cout << "F = Fahrenheit\nC = Celcius\nDo jakiej jednostki chcesz wykonac konwersje?\n\n";
	std::cin >> jednostka;
		if (jednostka == 'F'||jednostka=='f')
		{
			system("cls");
			std::cout << "Podaj temperature w Celcjuszach\n";
			std::cin >> temp;
			temp = (1.8 * temp) + 32;
			wlacznik = 1;
			std::cout << "\nTemperatura wynosi: " << temp << " Fahrenhreitow\n";
		}
		else if (jednostka == 'C' || jednostka == 'c')
		{
			system("cls");
			std::cout << "Podaj temperature w Fahrenhreitach\n";
			std::cin >> temp;
			temp = (temp-32) /1.8;
			wlacznik = 1;
			std::cout << "\nTemperatura wynosi: " << temp << " Celcjuszy\n";
		} 
		else
		{
			system("cls");
			wlacznik = 0;
			std::cout << "Niepoprawna instrukcja, nastepuje wylaczenie programu...";
		}
	std::cout << "**********************************************\n\n";
	}
}