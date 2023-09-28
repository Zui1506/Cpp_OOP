#include"Employee.h"
#include"date.h"
#include<iostream>

using namespace std;

std::istream& operator>>(std::istream& is, etype& obj) {
    std::string text;
    if (is >> text) {
        if (text == "executive") {
            obj = executive;
        }
        if (text == "researcher") {
            obj = researcher;
        }
        if (text == "laborer") {
            obj = laborer;
        }
        if (text == "secretary") {
            obj = secretary;
        }
        if (text == "manager") {
            obj = manager;
        }
        if (text == "accountant") {
            obj = accountant;
        }
        // TODO: else-if blocks for other values
        // TODO: else block to set the stream state to failed
    }
    return is;
}
void employee::get_employ()
{
    cout<<"Input name of employee :";cin.get(this->name,30);  // cin.get : Nhap chuoi co khoang cach
    cout<<"Input ID employment: ";cin>>this->ID;
    cout<<"Input salary: ";cin>>this->salary;
    cout<<"Input position: ";cin>>this->position;
    cout<<"Input start day: "; this->start_day.get_date();

}

void employee::put_employ()
{
    cout<<"\nName: "<<this->name;
    cout<<"\nID :"<<this->ID;
    cout<<"\nPosition: ";
    switch(this->position)
    {
        case laborer : {cout<<"laborer"; break;}
        case secretary : {cout<<"secretary"; break;}
        case manager : {cout<<"manager"; break;}
        case accountant : {cout<<"accountant"; break;}
        case executive : {cout<<"executive"; break;}
        case researcher : {cout<<"researcher"; break;}
    }
    cout<<"\nSalary: "<<this->salary;
    cout<<"\nStart day:";
    this->start_day.show_date();
}
