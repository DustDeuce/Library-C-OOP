#include "interface_en.h"
#include "interface_ru.h"
#include <string>
#include <locale.h>

Main_ru menu_ru;
Main_en menu_en;

int main()
{
	setlocale(LC_ALL, "Ru_ru");
	std::string localiz;

	std::cout << "Выберите локализацию/Select localization, ru or en: ";
	std::getline(std::cin, localiz);
	if (localiz == "ru")
		menu_ru.mainMenu_ru();
	else if (localiz == "en")
		menu_en.mainMenu_en();
	else
		return 0;
}