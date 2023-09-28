#include<iostream>
#include"date.h"

enum etype { laborer, secretary, manager, accountant, executive,researcher };

class employee
{
private:
    char name[30];
    unsigned int salary;
    etype position;
    int ID;
    date start_day; //Ngay nhan vien bat dau lam
public:
    void get_employ();
    void put_employ();
};
