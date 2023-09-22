#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Tollbooth
{
private:
    unsigned int total_number_of_car; // So luong o to
    double total_amount_of_money; // Tong so tien
public:
    Tollbooth() : total_number_of_car(0), total_amount_of_money(0)
    {}
    void payCar();
    void nopayCar();
    void display();
};

void Tollbooth::payCar()
{
    this->total_number_of_car++;
    this->total_amount_of_money = total_amount_of_money + 0.5;
}
void Tollbooth::nopayCar()
{
    this->total_number_of_car++;
}
void Tollbooth::display()
{
    cout<<setw(10)<<"\nTong xe trong ngay "<<setw(5)<<this->total_number_of_car;
    cout<<setw(10)<<"\nTong tien trong ngay "<<setw(5)<<this->total_amount_of_money;
}

int main()
{
    Tollbooth day_1;
    int i = 0;
    char ch = 'a';
    do{
        cout<<"\nXe co tra tien ko? (Y/N)\n";
        ch = getche();
        if (ch == 'y')
        {
            day_1.payCar();
        }
        if (ch == 'n')
        {
            day_1.nopayCar();
        }
        if(ch != 'y' && ch != 'n' && ch != 's')
        {
            cout<<"\n Nhap sai vui long nhap sdaffalai";
        }

    }while(ch != 's');
    day_1.display();
    getch();
    return 0;
}
