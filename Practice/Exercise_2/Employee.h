#include<iostream>
#include"date.h"

using namespace std;

enum etype { laborer, secretary, manager, accountant, executive,researcher };

class employee
{
private:
    unsigned int salary;
    etype position;
    int ID;
    Dates start_day; //Ngay nhan vien bat dau lam
public:
    void get_employ();
    void put_employ();
};

