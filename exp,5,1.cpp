#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
    string d;
    fstream file;
    file.open("dracula.txt",ios::out);
    getline(cin,d);
    file<<d;
    file.close();
    file.open("dracula.txt",ios::in);
    char a;
    cout<<"contents of file are :"<<"\n";
    while(!file.eof())
    {
        file>>noskipws>>a;
        cout<<a;
    }
    file.close();
    int s;
	char ch;
	cout<<"\n"<<"reverse: "<<"\n";
    fstream f("dracula.txt");
    f.seekg(0,ios::end);
    s=f.tellg();
    for(int i=1;i<=s;i++)
    {
        f.seekg(-i,ios::end);
        char ch=f.get();
        cout<<ch;
    }
    f.close();
}
