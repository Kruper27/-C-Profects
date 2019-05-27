//
// Created by Senior Sanyola on 24.05.2019.
//
#include <iostream>
#include "vector"
using namespace std;


// Клас Обладнаня
// знаходиться зверху тому що його потрібно напряму наслідувати й він має бути описаний раніше
class Equipment
{
    //необхідні поля для цього класу
private:
    string Name_of_equip;
    int the_number;
    int price;
public:
    //перелік функцій що він використовує
    void setEquip(string Name_of_equip, int the_number, int price);
    int price_of_equip();
};



//Абстрактний клас Людина
class Human{
private:
    virtual int salary() = 0;
};

// Клас Раб(скорочення від працівник)
class Slave:public Human
{
    // необхідні поня для цього класу
private:
    int PoorMoney;
    int Experience;
    string Name;
    string Surname;
    int Production;
    //закріплюємо за працівником обладнання
    vector<Equipment*> equips;
public:
    //перелык функцій що можливо потрібно буде використовувати надалі
    void setSlave(string Name, string Surname, int Exp, int Bet, int prod);
    Slave(string Name, string Surname, int Exp, int Bet, int prod);
    void AddEquip(Equipment *equip);
    int salary() override;
    string get_Name();
    string get_Surname();
};

// Клас керівник,він має за собой вектор працівників

class Head:public Human
{
    //необхідні поля для цього класу поля
private:
    string Name;
    string Surname;
    int Experience;
    vector<Slave*> slaves;
public:
    //деяці функії що можуть знадобитись
    Head(string name, string Surname, int exp);
    int salary() override;
    void addSlave(Slave* slave);
    void SlaveList();
};

// Сумісник,що просто сидить на зарплаті за роки й процент від свох інвестицій
class Pluralist :public Human
{
    // деякі поля що можуть бути потрібні
private:
    string Name;
    string Surname;
    int Experience;
    int salaryCoeff;
public:
    //перелік функцій
    Pluralist(int salaryCoeff, string name, string Surname, int exp);
    int salary() override;
};

//Клас Продукта який виробляє працівник
class Product
{
    //деякі поля що можуть бути потрібними
private:
    string Name_product;
    int number;
    int price;
public:
    //функція для обрахунку вартості
    int full_of_prod(string N, int number, int price);
};

//Клас Професія який існує
class Profession
{
    //деякі поля для створення
private:
    string Name_of_profession;
    int base_value;
public:
    //функції що можуть бути потрібні
    void setProf(string Name, int bet);
    string get_name(string Name_of_profession);
};






