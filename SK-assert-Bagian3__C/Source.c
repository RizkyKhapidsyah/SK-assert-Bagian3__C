#include <stdio.h>
#include <conio.h>
#include <assert.h>

int main() {

	int Input;

	printf("Masukkan sebuah nilai (1 sd 20)  : ");
	scanf_s("%i", &Input);

	assert(Input >= 1 && Input <= 20);

	printf("Angka yang Anda masukkan adalah  = %i", Input);

	_getch();
	return 0;
}