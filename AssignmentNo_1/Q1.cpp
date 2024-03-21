#include<iostream>
struct Date{
    int day;
    int month;
    int year;
    void initDate(struct Date *Dateptr)
    {
       (*Dateptr).day=01;
        (*Dateptr).month=01;
         (*Dateptr).year=2001;
    }
    void printDateOnConsole(struct Date* ptrDate)
    {
        std::cout<<(*ptrDate).day<<"-"<<(*ptrDate).month<<"-"<<(*ptrDate).year<<std::endl;
    }

    void acceptDateFromConsole(struct Date* ptrDate)
    {
     std::cout<<"enter date in DD/MM/YYYY"<<std::endl;
     std::cin>>(*ptrDate).day>>(*ptrDate).month>>(*ptrDate).year;
      std::cout<<(*ptrDate).day<<"-"<<(*ptrDate).month<<"-"<<(*ptrDate).year<<std::endl;
    }

    

};

int main()
{
Date *ptr ,d;
ptr=&d;
d.initDate(&d);
d.printDateOnConsole(&d);
d.acceptDateFromConsole(&d);
    return 0;
}