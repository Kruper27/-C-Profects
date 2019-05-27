//
// Created by Senior Sanyola on 27.05.2019.
//
#include "Set_of_Int.h"

#ifndef INTERVAL_SAV_QUADRAT_SAVCHUK_H
#define INTERVAL_SAV_QUADRAT_SAVCHUK_H


// типи данних для квадратних нерівностей
enum type_of_sign{
    greater,
    less,
    greater_equal,
    less_equal,
    equal,
    not_equal,

};

// структура що задає квадратне рівняння
// виду а*х**2 + б*х + с = 0
typedef struct s_quadratic_inequalities
{
    int a;
    int b;
    int c;
    enum type_of_sign sign;
}               QuadraticInequalities;

// перелік функція що відносяться до даної структури
QuadraticInequalities   *SetIneq(float a, float b, float c, enum type_of_sign sign);
set_intervals *Make_set(QuadraticInequalities test);
set_intervals* find_solution(set_intervals* ints1, set_intervals* ints2);
#endif //INTERVAL_SAV_QUADRAT_SAVCHUK_H