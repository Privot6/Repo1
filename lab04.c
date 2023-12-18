#include <stdio.h>

int silnia(int n);
int an(int n1);
int NWD(int a, int b);
int bin(int liczba);
int Fn(int n2);

int main() {
	printf("zad1\n");
	int n;
	printf("Podaj liczbe: ");
	scanf_s("%d", &n);
	if (n >= 0) {
		printf("%d! = %d", n, silnia(n));
	}
	else {
		printf("Podaj liczbe nieujemna");
	}
	
	printf("\n\nzad2\n");
	int n1;

	printf("Podaj liczbe n: ");

	scanf_s("%d", &n1);

	if (n1 >= 1) printf("%d wyraz ciagu to: %d", n1, an(n1));
	else printf("Podaj n >= 1!");

	printf("\n\nzad3\n");
	int a, b;
	printf("Wprowadz a : ");
	scanf_s("%d", &a);
	printf("Wprowadz b : ");
	scanf_s("%d", &b);
	printf("NWD %d i %d to %d", a, b, NWD(a, b));

	printf("\n\nzad4\n");
	printf("wynik(2)=1\nwynik(3)=1\nwynik(4)=3\nwynik(5)=3\nwynik(6)=5\nwynik(7)=4\nwynik(8)=8\n");

	printf("\n\nzad5\n");
	int liczba;
	printf("Podaj liczbe: ");
	scanf_s("%d", &liczba);
	bin(liczba);

	printf("\n\nzad6\n");
	int n2;
	printf("Podaj n: ");
	scanf_s("%d", &n2);
	printf("Fn dla n=%d to %d", n2, Fn(n2));
}

int silnia(int n)
{
	if (n == 0) return 1;
	else {
		return n * silnia(n - 1);
	}
}

int an(int n1)

{

	if (n1 == 1) return -1;

	else return (-1) * an(n1 - 1) * n1 - 2;

}

int NWD(int a, int b)

{
	if (a != b) {
		if (a > b) return NWD(a - b, b);
		else return NWD(a, b - a);
	}
	else return a;
}

int bin(int liczba)
{
	int binaryNum[32];
	int i = 0;
	if (liczba >= 0) {
		if (liczba == 0) printf("0 w systemie dwojkowym to 0");
		else {
			while (liczba > 0) {
				binaryNum[i] = liczba % 2;
				liczba = liczba / 2;
				i++;
			}
			printf("Liczba w systemie binarnym: ");
			for (int j = i - 1; j >= 0; j--) {
				printf("%d", binaryNum[j]);
			}
		}
	}
	else {
		printf("Podaj liczbe nieujemna!");
	}
	
}

int Fn(int n2)
{
	if (n2 >= 0) {
		if (n2 == 0) return 0;
		else {
			if (n2 == 1) return 1;
			else {
				return Fn(n2 - 2) + Fn(n2 - 1);
			}
		}
	}
	else printf("Podaj n>=0!");
}
