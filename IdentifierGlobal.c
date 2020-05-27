#include <stdio.h>
#include <conio.h>

int m = 3;

void lokal() {
	int a = 5;
	int b = a + 2;

	printf("Lokal a  = %d\n", a);
	printf("Lokal b  = %d\n", b);
}

int main() {
	int a = 1;
	int b = 2;
	int c = 3;

	lokal();

	printf("main a    = %d\n", a);
	printf("main b    = %d\n", b);
	printf("main c    = %d\n", c);
	printf("global m  = %d\n", m);

	_getch();
	return 0;
}