#include <iostream>

class Page1_ru
{
private:
	void display_ru()
	{
		int choice;
		std::cout << "��-11 ������ ����:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) ������ �������" << std::endl;
		std::cout << "2) ������ �������" << std::endl;
		std::cout << std::endl;

		std::cout << "0) �����" << std::endl;
		std::cout << std::endl;

		std::cout << "�������� �������: "; std::cin >> choice;

		switch (choice)
		{

		default:
			break;
		}
	}
public:
	void print_Page1_ru()
	{
		display_ru();
	}
};

class Page2_ru
{
private:
	void display2_ru()
	{
		int choice;
		std::cout << "��-21 ������ ����:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) ������ �������" << std::endl;
		std::cout << "2) ��������� �������" << std::endl;
		std::cout << std::endl;

		std::cout << "0) �����" << std::endl;
		std::cout << std::endl;

		std::cout << "�������� �������: "; std::cin >> choice;
	}

public:
	void print_Page2_ru()
	{
		display2_ru();
	}
};

class Main_ru
{
public:
	void mainMenu_ru()
	{
		Page1_ru page1_ru; Page2_ru page2_ru;
		int choice = 1;
		while (choice != 0)
		{
			system("cls");
			std::cout << "��� ������������ ������ �� ����� C++ �� ��� " << std::endl;
			std::cout << std::endl;

			std::cout << "1) ������ ����" << std::endl;
			std::cout << "2) ������ ����" << std::endl;
			std::cout << std::endl;

			std::cout << "0) ����� �� ���������" << std::endl;
			std::cout << std::endl;

			std::cout << "�������� ����: "; std::cin >> choice;

			switch (choice)
			{
			case 1:
				system("cls");
				page1_ru.print_Page1_ru();
				break;
			case 2:
				system("cls");
				page2_ru.print_Page2_ru();
				break;
			default:
				break;
			}
		}
	}
};