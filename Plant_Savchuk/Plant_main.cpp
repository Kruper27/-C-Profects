#include <iostream>
#include "Savchuk_Plant.h"

// мікро тест
// зчитування з файла відсутнє
// зчитування з консолі не є необхідним
//  деякі перевірочні роботи для функцій
int main()
{
    Slave *slave = new Slave("Oleg", "babak", 10, 12, 1000);
    Head *head = new Head("Ya", "Golova", 10);
    head->addSlave(slave);
    head->SlaveList();
    auto *equip = new Equipment();
    equip->setEquip("pure c", 10, 1000);
    slave->AddEquip(equip);
    auto * eq = new Equipment();
    eq->setEquip("python", 11, 10001);
    cout << equip->price_of_equip() << endl;
    slave->AddEquip(eq);
}
