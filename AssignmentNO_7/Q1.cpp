#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int index=0;
    int choics;
    int m1=0;
    int s1=0;
    int sm1=0;

    Employee *ptr[10];
    do{
         cout <<"0. Exit" << endl;
        cout << "1. Accept Employee" << endl;
        cout << "2. Display the count of all employees with respect to designation" << endl;
        cout << "3. Display All Managers" << endl;
        cout << "4. Display All Salesman" << endl;
        cout << "5. Display All SalesManagers" << endl;
        cout << "Enter your choice - ";
        cin >> choics;
        switch (choics)
        {
        case 0:
        choics=0;
        cout<<"thank you for using this app"<<endl;
        break;
        case 1:
        {
        int choics1;
    
        do{
        cout << "1. Accept Manager" << endl;
        cout << "2. Accept Salesman"<<endl;
        cout << "3. Accept Salesmanager"<<endl;
         cout << "Enter your choice - ";
        cin >> choics1;
        switch (choics1)
        {
        case 1:ptr[index]=new Manager;
        ptr[index]->accept();
        index++;
        m1++;
        break;

        case 2:
        ptr[index]=new Salesman;
        ptr[index]->accept();
        index++;
        s1++;
        break;

        case 3:
        ptr[index]=new SalesManager;
        ptr[index]->accept();
        index++;
        sm1++;
        break;
        default:
        cout<<"invalied choics............"<<endl;
        break;
        }
        break;
        }while (choics1=0);
        }
        
        case 2:
        for(int i=0;i<index;i++){
            ptr[i]->display();
            cout<<"=============================="<<endl;
        }
        cout<<"Total  Employee:"<<(index)<<endl;
        cout<<"Total  Manager:"<<m1<<endl;
        cout<<"Total  Salesman"<<s1<<endl;
        cout<<"Total  SalesManager:"<<sm1<<endl;

        break;
        case 3:
        for(int i=0;i<index;i++){
            if(typeid(*ptr[i])==typeid(Manager)){
            ptr[i]->display();
            cout<<"=============================="<<endl;
        }
        }
        break;
        case 4:
        for(int i=0;i<index;i++){
            if(typeid(*ptr[i])==typeid(Salesman)){
            ptr[i]->display();
            cout<<"=============================="<<endl;
        }
        }
        break;
        case 5:
        for(int i=0;i<index;i++){
            if(typeid(*ptr[i])==typeid(SalesManager)){
            ptr[i]->display();
            cout<<"=============================="<<endl;
        }
        }
        break;
        default:
        cout<<"invalied choics............."<<endl;
            break;
        }

    }while(choics!=0);

     for (int i = 0; i < index; i++)
        delete ptr[i];
    return 0;
}
