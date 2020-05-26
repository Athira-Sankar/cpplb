#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int rno,m1,m2,m3,total;
    char name[10];

public:
    void input(int rno,int m1,int m2,int m3,char name[10])
    {

        this->rno=rno;
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
	strcpy(this->name,name);
        total=m1+m2+m3;
    }
    friend void best(student&,student&);
};
void best(student& s1,student& s2)
{
    if(s1.total>s2.total)
        cout<<"Best student:-\nRoll no : "<<s1.rno<<"\n"<<"Names : "<<s1.name<<"\n"<<"marks are: "<<"\n"<<"mark 1:-"<<s1.m1<<"\n"<<"mark 2: "<<s1.m2<<"\n"<<"mark 3: "<<s1.m3<<"\n";
    else if(s1.total<s2.total)
        cout<<"Best student:-\nRoll no : "<<s2.rno<<"\n"<<"Names : "<<s2.name<<"\n"<<"marks are: "<<"\n"<<"mark 2:-"<<s2.m1<<"\n"<<"mark 2: "<<s2.m2<<"\n"<<"mark 3: "<<s2.m3<<"\n";
}
int main()
{
    int rno,m1,m2,m3;
    char name[10];
    student s1,s2;
    cout<<"Enter the details of first student:-\n";
    cout<<"Roll no:";
    cin>>rno;
    cout<<"Name:-";
    cin>>name;
    cout<<"Mark 1:";
    cin>>m1;
    cout<<"Mark 2:";
    cin>>m2;
    cout<<"Mark 3:";
    cin>>m3;
    s1.input(rno,m1,m2,m3,name);
    cout<<"Enter the details of second student:-\n";
    cout<<"Roll no :";
    cin>>rno;
    cout<<"Name:-";
    cin>>name;
    cout<<"Mark 1:";
    cin>>m1;
    cout<<"Mark 2:";
    cin>>m2;
    cout<<"Mark 3:";
    cin>>m3;
    s2.input(rno,m1,m2,m3,name);
    best(s1,s2);

}
