#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 

#define N 2

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
	printf("Aalacnl %i crdcnle\n", N);
	setZod(arrayZnak);
again:
	puts("1 - Ddineindlnu eiinrenu\n2 - Auadrnu di cireo ciacreo\n3 - Creii?cnu draino");
	scanf("%i", &key);
	switch (key)
	{
	case 1: printZod(arrayZnak);	break;
	
	case 3: puts("Ndrncai cr cndieuciaricl ddiadreeeu"); return 0;
	}
	goto again;
	return 0;
}

void setZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++) {
		printf("Aalacnl ce?: ");
		//scanf("%s", &arrayZnak->name);
		scanf("%s %s %s", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2]);

		printf("Aalacnl ciacre: ");
		scanf("%s", &arrayZnak->zodiak);
		printf("aa.ee.aa: ");
		scanf("%d.%d.%d", &arrayZnak->bday[0], &arrayZnak->bday[1], &arrayZnak->bday[2]);
		printf("\n\n");
		arrayZnak++;
	}
}

void printZod(ZNAK* arrayZnak) {
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i<N; i++)
	{
		printf("Ce?: %s %s %s\nCiacre: %s\nAD : %d.%d.%d\n\n", &arrayZnak->name[0], &arrayZnak->name[1], &arrayZnak->name[2], arrayZnak->zodiak, arrayZnak->bday[0], arrayZnak->bday[1], arrayZnak->bday[2]);
		arrayZnak++;
	}
}
