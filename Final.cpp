#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 

#define N 1

typedef struct {
	char name[3];
	char zodiak[25];
	int bday[3];
} ZNAK;

void setZod(ZNAK* arrayZnak);
void printZod(ZNAK* arrayZnak);

int main() {
	int key;
	setlocale(LC_CTYPE, "rus");
	ZNAK arrayZnak[N];
	printf("Input %i  name\n", N);
	setZod(arrayZnak);
again:
	puts("1 -Out put zodiak\n3 - Closed");
	scanf("%i", &key);
	switch (key)
	{
	case 1: printZod(arrayZnak);	break;

	case 3: puts("Closed project"); return 0;
	}
	goto again;
	return 0;
}

void setZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++) {
		printf("Input Name: ");
		//scanf("%s", &arrayZnak->name);
		scanf("%s %s %s", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2]);

		printf("Input zodiak: ");
		scanf("%s", &arrayZnak->zodiak);
		printf("Bday --.--.--: ");
		scanf("%d.%d.%d", &arrayZnak->bday[0], &arrayZnak->bday[1], &arrayZnak->bday[2]);
		printf("\n\n");
		arrayZnak++;
	}
}

void printZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
	{
		printf("Name: %s %s %s\nZodiak: %s\nBday : %d.%d.%d\n\n", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2], arrayZnak->zodiak, arrayZnak->bday[0], arrayZnak->bday[1], arrayZnak->bday[2]);
		arrayZnak++;
	}
}
