
//
// Created by Senior Sanyola on 24.05.2019.
//
#include "Savchuk_Plant.h"
#include <utility>

// формула обрахунку зарплати
int Slave::salary()
{
    double salary = PoorMoney * 0.1 * Experience + (Production * 0.05);
    return (int)salary;
}

// функція для додавання абладнання до списку
void Slave::AddEquip(Equipment *equip)
{
    equips.push_back(equip);
}

//створення працівника
void Slave::setSlave(string Slave_Name, string Slave_Surname, int Exp, int Bet, int prod)
{
    Name = std::move(Slave_Name);
    Surname = std::move(Slave_Surname);
    Experience = Exp;
    PoorMoney = Bet;
    Production = prod;
}

//функція для виводу працівника
Slave::Slave(string Slave_Name, string Slave_Surname, int Exp, int Bet, int prod)
{
    setSlave(std::move(Slave_Name), std::move(Slave_Surname), Exp, Bet, prod);
    cout << Name << " " << Surname << " salary : " << Slave::salary() << endl;
}

// функія що повертає ім'я працівника
string Slave::get_Name()
{
    return Name;
}

//функція що повертає прізвище працівника
string Slave::get_Surname()
{
    return Surname;
}

//функція що повертає загальну ціну продукта
int Product::full_of_prod(string N, int m, int p)
{
    return m * p;
}

//функція для створеня голови
Head::Head(string Name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    Experience = exp;
}

// обрахунок зарплати Голови
int Head::salary()
{
    return slaves.capacity()==0?Experience*100:Experience*slaves.capacity()*100;
}

//функція для того щоб здобути ім'я працівника зі списку що закріплений за Головою
void Head::SlaveList()
{
    for (int i = 0; i < slaves.capacity(); i++)
    {
        cout << slaves[i]->get_Name() << endl;
    }
}

// функція що додає раба до списку Голови
void Head::addSlave(Slave* slave)
{
    slaves.push_back(slave);
}

// функція для створення Сумісника
Pluralist::Pluralist(int salaryCoeff, string Name, string Surname, int exp)
{
    Name = std::move(Name);
    Surname = std::move(Surname);
    salaryCoeff = salaryCoeff;
    Experience = exp;
}

//функція яка обраховує зарплату сумісника
int Pluralist::salary()
{
    return Experience*salaryCoeff*100;
}

//функція яка повертає ціну обладнання
int Equipment::price_of_equip() {
    return price;
}

//функція що задає обладнання
void Equipment::setEquip(string Name, int number, int equip_price)
{
    Name_of_equip = std::move(Name);
    the_number = number;
    price = equip_price;
}

// функція яка повертає назву професії
string Profession::get_name(string Name_of_profession) {
    return Name_of_profession;
}

//функція що задає професію
void Profession::setProf(string Name, int bet)
{
    Name_of_profession = std::move(Name);
    base_value = bet;
}