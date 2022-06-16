// AprioritHome2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//�������������� ���������� ������ ������� ������ ��������� � ������������ :
//First name
//Last name
//Age
//Daily wage
//Position
//
//��������� ���������� ������ � ������� � ������� :
//Name: ������ ���;
//Age: �������;
//TermUntilRetirement: ���������� ��� �� �������(������ � 55)
//AnnualSalary(������� �� �� ������� ������� 20 % .� ���� 250 ������� ����)
//Position : ���������


#include <iostream>
#define WIN_CLS "cls"
#define LINUX_CLS "clear"
#define OS_CLS WIN_CLS

int const RETIREMENT = 55;
int const WORKS_DAY_IN_A_YEAR = 250;
double const TAX = 20.0 / 100.0;



int main()
{
    std::string firstName = "";
    std::cout << "First name: ";
    std::cin >> firstName;
    std::string lastName = "";
    std::cout << "Last name: ";
    std::cin >> lastName;
    int age = 0;
    std::cout << "Age: ";
    std::cin >> age;
    double dailyWage = 0;
    std::cout << "Daily wage: ";
    std::cin >> dailyWage;
    std::string position = "";
    std::cout << "Position: ";
    std::cin >> position;
    
    system(OS_CLS);
    std::cout << "Name: " << firstName << " " << lastName << ";\n";
    std::cout << "Age: " << age << ";\n";
    
    int termUntilRetirement = RETIREMENT - age;
    std::cout << "TermUntilRetirement: " << termUntilRetirement << ";\n";

    double annualSalary = WORKS_DAY_IN_A_YEAR * dailyWage * (1.0 - TAX);
    std::cout << "AnnualSalary: " << annualSalary << ";\n";
    return 0;
}
