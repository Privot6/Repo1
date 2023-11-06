#include <stdio.h>

int main() {
	int ileLiczbDod = 0, ileLiczbUj=0;
	float sumaD=0,liczba, sumaU=0;

	for (int i = 1; i <= 10; i++)
	{
		printf("Podaj liczbe %d : ", i);
		scanf_s("%f", &liczba);

		if (liczba > 0) {
			ileLiczbDod++;
			sumaD += liczba;
		}
		else
		{
			if (liczba != 0) {
				ileLiczbUj++;
				sumaU += liczba;
			}
		}
	}

	printf("Liczb dodatnich jest %d", ileLiczbDod);
	if(ileLiczbDod != 0) printf("\nIch srednia = %f", sumaD / ileLiczbDod);
	
	printf("\nLiczb ujemnych jest %d", ileLiczbUj);
	if(ileLiczbUj != 0) printf("\nIch srednia = %f", sumaU / ileLiczbUj);

}