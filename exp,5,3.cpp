#include<iostream>
#include<fstream>
using namespace std;
class student
{
public:
    int id;
    char name[25];
    char address[4][25];
    int age;
    int m[3];
    void getdata()
    {
        cout<<"\n\nEnter the student id:";
        cin>>id;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the address:-\nHouse name:";
        cin>>address[0];
        cout<<"City:";
        cin>>address[1];
        cout<<"DIstrict:";
        cin>>address[2];
        cout<<"State:";
        cin>>address[3];
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter mark1,mark2,mark3:";
        cin>>m[0]>>m[1]>>m[2];
    }
    void display()
    {
        cout<<"\nId:"<<id<<"\nName:"<<name<<endl;
        cout<<"Address: "<<address[0]<<","<<address[1]<<","<<address[2]<<","<<address[3]<<endl;
        cout<<"Age:"<<age;
        cout<<"\nMarks:-\n1:"<<m[0]<<"\n2:"<<m[1]<<"\n3:"<<m[2]<<endl;
    }
    void modify()
    {
        int op;
        char x='y';
        while(x=='y'||x=='Y')
        {
            cout<<"What do you want to change:-\n1.id\n2.name\n3.address\n4.age\n5.marks\n6.no change\nEnter an option:";
            cin>>op;
            switch(op)
            {
            case 1:
                cout<<"Enter the id:";
                cin>>id;
                break;
            case 2:
                cout<<"Enter the name:";
                cin>>name;
                break;
            case 3:
                cout<<"Enter the address:-\nHouse name:";
                cin>>address[0];
                cout<<"City:";
                cin>>address[1];
                cout<<"DIstrict:";
                cin>>address[2];
                cout<<"State:";
                cin>>address[3];
                break;
            case 4:
                cout<<"Enter the age:";
                cin>>age;
                break;
            case 5:
                cout<<"Enter mark1,mark2,mark3:";
                cin>>m[0]>>m[1]>>m[2];
                break;
            case 6:
                    return;
                break;
            }
            cout<<"Do you want to continue(y/n):";
            cin>>x;
        }
    }
    int findid()
    {
        return id;
    }
};
int main()
{
    fstream f;
    f.open("test.txt",ios::out);
    student s[10],st;
    int scount,ch;
    char x;
    cout<<"Enter the no. of students:";
    cin>>scount;
    for(int i=0;i<scount;i++)
    {
        s[i].getdata();
        f.write((char*)&s[i],sizeof(s[i]));
        s[i].display();
    }
    f.close();


    do
    {
        cout<<"\n#### MENU ####\n1.Display details of all student\n2.Display details of a student\n3.Modify the data of a student\n4.exit\nEnter an option:";
        cin>>ch;
         //f.seekg(0,ios::beg);
         f.open("test.txt",ios::in);
        switch(ch)
        {
        case 1:
            cout<<"### DETAILS OF ALL STUDENT ###\n\n";
            for(int i=0;i<scount;i++)
            {
                f.read((char*)&st,sizeof(st));
                st.display();
                cout<<endl;
            }
            f.close();
            break;
        case 2:
            {

            int sid,flag=1;
            cout<<"Enter the id:";
            cin>>sid;
            for(int i=0;i<scount;i++)
            {
                f.read((char*)&st,sizeof(st));
                int ssid=st.findid();
                if(sid==ssid)
                {
                    st.display();
                    flag=0;
                }
            }

            if(flag==1)
                    cout<<"\n!!! Invalid id !!!\n";
             f.close();
            break;
            }
        case 3:
            {

            int sid,flag=1;
            cout<<"Enter the id:";
            cin>>sid;
            for(int i=0;i<scount;i++)
            {
                f.read((char*)&st,sizeof(st));
                int ssid=st.findid();
                if(sid==ssid)
                {
                    st.modify();
                    f.close();
                    f.open("test.txt",ios::out);
                    for(int i=0;i<scount;i++)
                    {
                        f.write((char*)&s[i],sizeof(s[i]));
                    }
                    cout<<"\nAfter modification";
                    st.display();
                    flag=0;
                    //f.write((char*)&st,sizeof(st));
                }
            }
            if(flag==1)
                    cout<<"\n!!! Invalid id !!!\n";
             f.close();
            break;
            }

        }
        cout<<"Do you want to continue(y/n):";
        cin>>x;
        }while(x=='y'||x=='Y');

}
