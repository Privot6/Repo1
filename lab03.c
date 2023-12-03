#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

int main() {
	printf("zad1\n");
	
	int tab[10];

	for (int i = 0; i < 10; i++)
	{
		tab[i] = (i + 1) * 3;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}

	printf("\n\nzad2\n");

	for (int i = 0; i < 10; i+=2)
	{
		printf("%d ", tab[i]);
	}

	printf("\n\nzad3\n");
    int n, a;

    printf("Podaj wartosc calkowita a: ");
    scanf_s("%d", &a);

    printf("Podaj ilosc elementow n: ");
    scanf_s("%d", &n);

    if (n <= 0)
    {
        printf("Podaj ilosc elemenotw n>0!");
    }
    else
    {
        int* tablica = (int*)malloc(n * sizeof(int));

        for (int i = n - 1; i >= 0; i--) {
            tablica[i] = a;
            a -= 5;
        }

        printf("Tablica wypelniona wedlug wzoru a, a-5, a-10, ...:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", tablica[i]);
        }

        free(tablica);
    }
    printf("\n\nzad4\n");
    int nElem,min = 50;

    printf("Podaj ilosc elementow tablicy n: ");
    scanf_s("%d", &nElem);

    int* tablica1 = (int*)malloc(n * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < nElem; i++)
    {
        tablica1[i] = rand() % 74 - 23;
        if (tablica1[i] < min) min = tablica1[i];
    }

    for (int i = 0; i < nElem; i++)
    {
        printf("%d ", tablica1[i]);
    }
    printf("\nWartosc minimalna wynosi: %d",min);
    
    free(tablica1);

    printf("\n\nzad5\n");
    int tab1[5];
    int el1=0,el2=0;

    printf("Podaj wartosc 1 komorki: ");
    scanf_s("%d", &el1);
    printf("Podaj wartosc 2 komorki: ");
    scanf_s("%d", &el2);
    tab1[0] = el1;
    tab1[1] = el2;

    for (int i = 2; i < 5; i++)
    {
        tab1[i] = tab1[i - 1] + tab1[i - 2];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", tab1[i]);
    }

    printf("\n\nzad6\n");
    int tablica6[20] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 10; i < 20; i++)
    {
        tablica6[i] = tablica6[i - 10];
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", tablica6[i]);
    }

    printf("\n\nzad7\n");
    int macierz[3][3] = {1,2,3,4,5,6,7,8,9};
    int sumaPrzekatnej=0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", macierz[i][j]);
            if (i == j) sumaPrzekatnej += macierz[i][j];
        }
        printf("\n");
    }
    printf("Suma elementow na glownej przekatnej macierzy wynosi: %d",sumaPrzekatnej);

    printf("\n\nzad8\n");
    int macierz1[3][3] = { 1,2,3,4,5,6,7,8,9 };
    int macierz2[3][3] = { 1,3,4,5,2,7,6,9,8 };
    int macierzSuma[3][3];
    printf("Macierz1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", macierz1[i][j]);
        }
        printf("\n");
    }
    printf("Macierz2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", macierz2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            macierzSuma[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }
    printf("Macierz1+2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", macierzSuma[i][j]);
        }
        printf("\n");
    }
	}
