// AprioritHome2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Заимплементить приложение анкеты которое должно запросить у пользователя :
//First name
//Last name
//Age
//Daily wage
//Position
//
//Сохранить полученные данные и вывести в формате :
//Name: Полное Имя;
//Age: возраст;
//TermUntilRetirement: количество лет до пенисии(пенсия в 55)
//AnnualSalary(годовая зп за вычетом налогов 20 % .В году 250 рабочих дней)
//Position : должность


#include <iostream>



int main()
{
    char const*  CLEAR = "cls";
    int const RETIREMENT = 55;
    int const WORKS_DAY_IN_A_YEAR = 250;
    double const TAX = 20.0 / 100.0;

    std::string firstName;
    std::cout << "First name: ";
    std::cin >> firstName;
    std::string lastName;
    std::cout << "Last name: ";
    std::cin >> lastName;
    int age = 0;
    std::cout << "Age: ";
    std::cin >> age;

    bool pensioner = true;
    double dailyWage = 0;
    std::string position;
    if (age < RETIREMENT)
    {
        pensioner = false;
        std::cout << "Daily wage: ";
        std::cin >> dailyWage;
        
        std::cout << "Position: ";
        std::cin >> position;
    }
    else
    {
        position = "pensioner";
    }
    system(CLEAR);
    std::cout << "Name: " << firstName << " " << lastName << ";\n";
    std::cout << "Age: " << age << ";\n";
    
    if (false == pensioner)
    {
        int termUntilRetirement = RETIREMENT - age;
        std::cout << "TermUntilRetirement: " << termUntilRetirement << ";\n";

        double annualSalary = WORKS_DAY_IN_A_YEAR * dailyWage * (1.0 - TAX);
        std::cout << "AnnualSalary: " << annualSalary << ";\n";
    }
    std::cout << "Position: " << position << ";\n";
    
    return 0;
}
