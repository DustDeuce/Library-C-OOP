#include <iostream>
#include <vector>
#include <string>

/*class MyClass
{
public:
    Page1 page1;
    Page2 page2;
    Main menu;
};*/

class Page
{
public:
    virtual void display() = 0;
    virtual ~Page() {}
};

// Меню первого курса
class Page1: public Page 
{
public:
    void display() override
    {
        int choice = -1;
        while (choice != 0)
        {
            std::cout << "ИТ-11 Первый курс:" << std::endl;
            std::cout << std::endl;

            std::cout << "1) Первый семестр" << std::endl;
            std::cout << "2) Второй семестр" << std::endl;
            std::cout << std::endl;

            std::cout << "0) Назад" << std::endl;
            std::cout << std::endl;

            std::cout << "Выберите семестр: "; std::cin >> choice;

            switch (choice)
            {
            case 1:

                break;
            case 2:

                break;
            case 0:

                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
                break;
            }
            if (choice != 0) {
                std::cout << "Нажмите Enter, чтобы продолжить...";
                std::cin.ignore(); // Ожидание ввода пользователя
                std::cin.get();    // Чтобы окно не закрывалось быстро
            }
        }
    }
};

// Меню второго курса
class Page2: public Page
{
public:
    void display() override
    {
        int choice = -1;
        while (choice != 0)
        {
            std::cout << "ИТ-21 Второй курс:" << std::endl;
            std::cout << std::endl;

            std::cout << "1) Третий семестр" << std::endl;
            std::cout << "2) Четвёртый семестр" << std::endl;
            std::cout << std::endl;

            std::cout << "0) Назад" << std::endl;
            std::cout << std::endl;

            std::cout << "Выберите семестр: "; std::cin >> choice;
            //system("cls");

            switch (choice)
            {
            case 1:

                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
                break;
            }
        }
        
    }
};

/*class Page3 : public Page
{

};*/

class Main
{
private:
    std::vector<Page*> pages;
    int currentPage;
public:
    Main() : currentPage(0)
    {
        // Загружаем страницы в меню
        pages.push_back(new Page1());
        pages.push_back(new Page2());
        //pages.push_back(new Page3());
    }

    ~Main()
    {
        for (Page* page : pages)
        {
            delete page;
        }
    }

    // Главное меню
    void mainMenu()
    {
        int choice = -1;
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
            //system("cls");

            switch (choice) {
            case 1:
                pages[0]->display();  // Показать меню первого курса
                break;
            case 2:
                pages[1]->display();  // Показать меню второго курса
                break;
            case 0:
                std::cout << "Выход из программы." << std::endl;
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
                break;
            }
            if (choice != 0) 
            {
                std::cout << "Нажмите Enter, чтобы продолжить...";
                std::cin.ignore(); // Ожидание ввода пользователя
                std::cin.get();    // Чтобы окно не закрывалось быстро
            }
        }
    }
};