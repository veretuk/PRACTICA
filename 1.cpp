#include "conio.h"
#include "locale.h"
#include "stdio.h"
#include "string.h"

struct Znak
{
	char name[30]; 
	char zodiac[30]; 
	int bday[3];
};

const char *number_zodiac[12] = { "Iaai", "Oaeao", "Aeeciaou", "?ae", "Eaa", "Aaaa", "Aanu", "Nei?ieii", "No?aeao", "Eica?ia", "Aiaieae", "?uau" }; // ii?yaie neaaiaaiey ciaeia ciaeaea

int main()
{
	setlocale(LC_CTYPE, "rus");
	const int size_array = 2; // eiee?anoai caienae
	puts("Aaaaeoa 3 caienae: ");
	Znak book[size_array]; // iauyaeyai iannea no?oeoo?
	int counter_rec = 0; // n??o?ee caienae

	while (counter_rec < size_array) // iiea ia aianee
	{
		puts("Aaaaeoa eiy e oaieee? ?a?ac i?iaae: ");
		scanf("&s", book[counter_rec].name);

		puts("Aaaaeoa ciae ciaeaea: ");
		scanf("&s", book[counter_rec].zodiac);

		puts("Aaaaeoa aaoo ?i?aaiey a oi?iaoa (aa.ii.aa) ");
		scanf("&s", book[counter_rec].bday[0]);
		scanf("&s", book[counter_rec].bday[1]); 
		scanf("&s", book[counter_rec].bday[2]); 
		counter_rec++; 
	}

	/*int month = 0;
	puts("Aaaaeoa ii?yaeiaue iiia? ianyoa: ");
	scanf("&s", month);
	*/
	return 0;
}
