#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
	printf("zad1\n");
	float liczba, suma=0, srednia, M=0;
	int iter=0;
	
	do
	{
		printf("Podaje liczbe niemniejsza od 0: ");
		scanf_s("%f", &liczba);
		if (liczba >= 0) {
			suma += liczba;
			iter++;
		}
		if (liczba > M) {
			M = liczba;
		}
	} while (liczba>=0);

	if (iter > 0) {
		srednia = suma / iter;
		printf("Suma liczb wynosi: %f", suma);
		printf("\nSrednia liczb wynosi: %f", srednia);
		printf("\nNajwieksza liczba wynosi: %f", M);
	}
	else {
		printf("Podaj liczbe >= 0");
	}
	
	printf("\n\nzad2\n");
	int ileLiczbDod = 0, ileLiczbUj = 0;
	float sumaD = 0, l1, sumaU = 0;

	for (int i0 = 1; i0 <= 10; i0++)
	{
		printf("Podaj liczbe %d : ", i0);
		scanf_s("%f", &l1);

		if (l1 > 0) {
			ileLiczbDod++;
			sumaD += l1;
		}
		else
		{
			if (l1 != 0) {
				ileLiczbUj++;
				sumaU += l1;
			}
		}
	}

	printf("Liczb dodatnich jest %d", ileLiczbDod);
	if (ileLiczbDod != 0) printf("\nIch suma = %f", sumaD);

	printf("\nLiczb ujemnych jest %d", ileLiczbUj);
	if (ileLiczbUj != 0) printf("\nIch suma = %f", sumaU);

	printf("\n\nzad3\n");
	int n = 0,liczba1,suma1=0;
	printf("Podaj ilosc liczb ciagu: ");
	scanf_s("%d", &n);
	if (n > 0) {
		for (int j1 = 0; j1 < n; j1++)
		{
			printf("Podaj %d liczbe: ",j1+1);
			scanf_s("%d", &liczba1);
			
			if (liczba1%2==0) {
				suma1 += liczba1;
			}
		}
		printf("Suma parzystych liczb ciagu wynosi: %d",suma1);
	}
	else {
		printf("Podaj liczbe n>0");
	}
	
	printf("\n\nzad4\n");
	int n1 = 0, liczba2, suma2 = 0;
	printf("Podaj ilosc losowanych liczb: ");
	scanf_s("%d", &n1);
	if (n1 > 0) {
		srand(time(NULL));
		for (int k = 0; k < n; k++)
		{
			liczba2 = rand() % 56 - 10;
			if (liczba2 % 2 == 0) {
				suma2 += liczba2;
			}
		}
		printf("Suma parzystych liczb ciagu wynosi: %d", suma2);
	}
	else {
		printf("Podaj liczbe n>0");
	}

	printf("\n\nzad5\n");
	int n2 = 0, iterator = 1;
	float pkt, sumaPkt=0,sredniaPkt;
	printf("Podaj liczbe studentow: ");
	scanf_s("%d", &n2);
	while (iterator<=n2)
	{
		printf("Podaj liczbe punktow %d studenta: ", iterator);
		scanf_s("%f", &pkt);
		sumaPkt += pkt;
		iterator++;
	}
	if (n > 0) {
		sredniaPkt = sumaPkt / n2;
		printf("Srednia punktow w tej grupie studentow wynosi: %f", sredniaPkt);
	}
	else {
		printf("Podaj liczbe wieksza od 0");
	}

	printf("\n\nzad6\n");
	printf("petla 1\n");
	for (int i1 = 1; i1 <= 100; i1++)
	{
		printf("%d ", i1);
	}
	printf("\npetla 2\n");
	for (int i2 = 100; i2 >=0; i2--)
	{
		printf("%d ", i2);
	}
	printf("\npetla 3\n");
	for (int i3 = 7; i3 <=77; i3=i3+7)
	{
		printf("%d ", i3);
	}
	printf("\npetla 4\n");
	for (int i4 = 20; i4>=0; i4=i4-2)
	{
		printf("%d ", i4);
	}

	printf("\n\nzad7\n");
	int i, j;

	for (i = 0; i < 10; i++)

	{

		for (j = 0; j <= i; j++)

			printf("X");

		printf("\n");

	}

	printf("\n");

	for (i = 1; i <= 10; i++)

	{

		for (int k = 1; k <= 10 - i; k++)

			printf(" ");

		for (j = 1; j <= 2 * i - 1; j++)

			printf("X");

		printf("\n");

	}

	printf("\n");

	for (i = 0; i < 10; i++)

	{

		//zamaluj ostatni element w wierszu

		for (int j = 0; j < 10 - i - 1; j++)

			printf(" ");

		for (int k = 0; k <= i; k++)

			printf("X");

		printf("\n");

	}

	printf("\n");

	printf("\n");

	for (int i = 9; i >= 0; i--)

	{

		//zamaluj ostatni element w wierszu

		for (int j = 0; j < 10 - i - 1; j++)

			printf(" ");

		for (int k = 0; k <= i; k++)

			printf("X");

		printf("\n");

	}

	printf("\n");

	for (i = 0; i < 10; i++)

	{

		for (j = 9; j >= i; j--)

			printf("X");

		printf("\n");

	}
}