#include "date.h"
#include<iostream>

using namespace std;
date::date()
{
    //ctor
}

date::~date()
{
    //dtor
}

void date::get_date()
{
    cout<<"\nInput date/month/year:\n";
    cout<<"Date: ";
    cin>>this->day;
    cout<<"Month: ";
    cin>>this->month;
    cout<<"Year: ";
    cin>>this->year;

}

void date::show_date()
{
    cout<<"\n"<<this->day<<"/"<<this->month<<"/"<<this->year;
}
