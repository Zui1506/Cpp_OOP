#include"date.h"

void Dates::get_date()
{
    cout<<"\nInput date/month/year:\n";
    cout<<"Date: ";
    cin>>this->day;
    cout<<"Month: ";
    cin>>this->month;
    cout<<"Year: ";
    cin>>this->year;

}

void Dates::show_date()
{
    cout<<"\n"<<this->day<<"/"<<this->month<<"/"<<this->year;
}
