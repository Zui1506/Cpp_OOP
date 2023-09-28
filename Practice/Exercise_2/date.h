#ifndef DATE_H
#define DATE_H


class date
{
    private:
        int day;
        int month;
        int year;
    public:
        date();
        virtual ~date();
        void get_date();
        void show_date();

};

#endif // DATE_H
