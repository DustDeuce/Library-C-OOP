#include <iostream>

class Page1
{
private:
	void display()
	{
		int choice;
		std::cout << "ИТ-11 Первый курс:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) Первый семестр" << std::endl;
		std::cout << "2) Второй семестр" << std::endl;
		std::cout << std::endl;

		std::cout << "0) Назад" << std::endl;
		std::cout << std::endl;

		std::cout << "Выберите курс: "; std::cin >> choice;
		
		switch (choice)
		{

		default:
			break;
		}
	}
public:
	void print_Page1()
	{
		display();
	}
};

class Main
{
public:
	void mainMenu()
	{
		Page1 page1;
		int choice = 1;
		while (choice != 0)
		{
			std::cout << "Моя библиотека лабораторных работ на C++ по ППП " << std::endl;
			std::cout << std::endl;

			std::cout << "1) Первый курс" << std::endl;
			std::cout << "2) Второй курс" << std::endl;
			std::cout << std::endl;

			std::cout << "0) Выход из программы" << std::endl;
			std::cout << std::endl;
			
			std::cout << "Выберите курс: "; std::cin >> choice;

			switch (choice)
			{
			case 1:
				system("cls");
				page1.print_Page1();
				break;
			case 2:
				std::cout << "ИТ-21 Второй курс:" << std::endl;
				std::cout << std::endl;
				
				std::cout << "1) Третий семестр" << std::endl;
				std::cout << "2) Четвёртый семестр" << std::endl;
				std::cout << std::endl;

				std::cout << "0) Назад" << std::endl;
				std::cout << std::endl;

				std::cout << "Выберите курс: "; std::cin >> choice;
				break;
			default:
				break;
			}
		}
	}
};

int main(Main menu)
{
	menu.mainMenu();
	return 0;
}