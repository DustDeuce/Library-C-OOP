#include <iostream>

class Page1_en
{
private:
	void display_en()
	{
		int choice;
		std::cout << "IT-11 First year:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) First semester" << std::endl;
		std::cout << "2) Second semester" << std::endl;
		std::cout << std::endl;

		std::cout << "0) Back" << std::endl;
		std::cout << std::endl;

		std::cout << "Select semester: "; std::cin >> choice;

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
		std::cout << "IT-21 Second year:" << std::endl;
		std::cout << std::endl;

		std::cout << "1) Third semester" << std::endl;
		std::cout << "2) Fourth semester" << std::endl;
		std::cout << std::endl;

		std::cout << "0) Back" << std::endl;
		std::cout << std::endl;

		std::cout << "Select a semester: "; std::cin >> choice;
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
			std::cout << "My laboratory works for C++ on PPP " << std::endl;
			std::cout << std::endl;

			std::cout << "1) First year" << std::endl;
			std::cout << "2) Second year" << std::endl;
			std::cout << std::endl;

			std::cout << "0) Exit program" << std::endl;
			std::cout << std::endl;

			std::cout << "Select a course: "; std::cin >> choice;

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