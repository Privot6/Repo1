#include <stdio.h>

int main() {
	printf("zad1\n");
	printf("Numer albumu: 131365");
	
	printf("\n\nzad2\n");
	int liczba,reszta;
	printf("Podaj liczbe calkowita: ");
	scanf_s("%d", &liczba);
	reszta = liczba % 2;
	if (reszta == 0) printf("Podana liczba calkowita jest parzysta");
	else {
		printf("Podana liczba calkowita jest nieparzysta");
	}

	printf("\n\nzad3\n");
	double a, b;
	printf("Podaj pierwsza liczbe: ");
	scanf_s("%lf", &a);
	printf("Podaj druga liczbe: ");
	scanf_s("%lf", &b);
	if (a > b) printf("Pierwsza liczba jest wieksza");
	else {
		if (a == b) printf("Liczby sa rowne");
		else {
			printf("Druga liczba jest wieksza");
		}
			
	}

	printf("\n\nzad4\n");
	float f1, f2, f3, f4, srednia;
	printf("Wprowadz cztery liczby:\n");
	scanf_s("%f", &f1);
	scanf_s("%f", &f2);
	scanf_s("%f", &f3);
	scanf_s("%f", &f4);
	srednia = (f1 + f2 + f3 + f4) / 4;
	printf("Srednia liczb wynosi: %f", srednia);

	printf("\n\nzad5\n");
	float l1, l2,wynik;
	int opcja;
	printf("===Kalkulator===\n");
	printf("1.Suma\n2.Roznica\n3.Iloraz\n4.Iloczyn\n");
	printf("Podaj dwie liczby:\n");
	scanf_s("%f", &l1);
	scanf_s("%f", &l2);
	printf("Wybierz dzialanie(1,2,3,4): ");
	scanf_s("%d", &opcja);

	switch (opcja)
	{
	case 1: {
		wynik = l1 + l2;
		printf("Suma liczb wynosi %f", wynik);
	}
		  break;
	case 2: {
		wynik = l1 - l2;
		printf("Roznica liczb wynosi %f", wynik);
	}
		  break;
	case 3: {
		if (l2 != 0) {
			wynik = l1 / l2;
			printf("Iloraz liczb wynosi %f", wynik);
		}
		else {
			printf("Nie mozna dzielic przez 0!");
		}
		break;
	}
	case 4: {
		wynik = l1 * l2;
		printf("Iloczyn liczb wynosi %f", wynik);
	}
		  break;
	default: printf("Wybrano niepoprawna opcje");
		break;
	}



}