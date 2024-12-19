#include <iostream>

class Page1_en
{
private:
	void display_en()
	{
		int choice;
		std::cout << "ИТ-11 Первый курс:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) Первый семестр" << std::endl;
		std::cout << "2) Второй семестр" << std::endl;
		std::cout << std::endl;

		std::cout << "0) Back" << std::endl;
		std::cout << std::endl;

		std::cout << "Выберите семестр: "; std::cin >> choice;

		switch (choice)
		{

		default:
			break;
		}
	}
public:
	void print_Page1_en()
	{
		display_en();
	}
};

class Page2_en
{
private:
	void display2_en()
	{
		int choice;
		std::cout << "ИТ-21 Второй курс:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) Третий семестр" << std::endl;
		std::cout << "2) Четвертый семестр" << std::endl;
		std::cout << std::endl;

		std::cout << "0) Back" << std::endl;
		std::cout << std::endl;

		std::cout << "Выберите семестр: "; std::cin >> choice;
	}

public:
	void print_Page2_en()
	{
		display2_en();
	}
};

class Main_en
{
public:
	void mainMenu_en()
	{
		Page1_en page1_en; Page2_en page2_en;
		int choice = 1;
		while (choice != 0)
		{
			system("cls");
			std::cout << "My laboratory works for C++ по PPP " << std::endl;
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
				page1_en.print_Page1_en();
				break;
			case 2:
				system("cls");
				page2_en.print_Page2_en();
				break;
			default:
				break;
			}
		}
	}
};