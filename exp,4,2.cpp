#include <iostream>
using namespace std;

class person
{
    char name[20],gender[10];
    int age;
    public:
        void getdata()
        {
            cout<<"Name: ";
            cin>>name;
            cout<<"Age: ";
            cin>>age;
            cout<<"Gender: ";
            cin>>gender;
        }
        void display()
        {
            cout<<"Name: "<<name<<"\n";
            cout<<"Age: "<<age<<"\n";
            cout<<"Gender: "<<gender<<"\n";
        }
};

class employee: public person
{
    char company[100];
    double salary;
    public:
        void getdata()
        {
            person::getdata();
            cout<<"name of the company : ";
            cin>>company;
            cout<<"salary: ";
            cin>>salary;
        }
        void display()
        {
            person::display();
            cout<<"Name of Company: "<<company<<endl;
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

class programmer: public employee
{
    int number;
    public:
        void getdata()
        {
            employee::getdata();
            cout<<"Number of programming language known: ";
            cin>>number;
        }
        void display()
        {
            employee::display();
            cout<<"Number of programming language known: "<<number;
        }
};

main()
{
    programmer p;
    cout<<"Enter data"<<endl;
    p.getdata();
    cout<<endl<<"Displaying data"<<endl;
    p.display();

}
