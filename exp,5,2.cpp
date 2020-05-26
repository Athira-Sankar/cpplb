#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int a[100],n;
    	fstream odd,even;
    	odd.open("odd.txt",ios::out);
    	even.open("even.txt",ios::out);
    	cout<<"Enter the number of elements:-";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			even<<a[i];
			even<<" ";
		}
		else
		{
			odd<<a[i];
			odd<<" ";
		}
	}
    	even.close();
	odd.close();
    	even.open("even.txt",ios::in);
	odd.open("odd.txt",ios::in);
    	cout<<"contents of the odd file are :"<<"\n";
	int x;
    	while(odd>>x)
    	{

    	    	cout<<x<<" ";
    	}
	cout<<"\n";
	cout<<"contents of the even file are :"<<"\n";
	while(even>>x)
        {

                cout<<x<<" ";
        }
	even.close();
        odd.close();
}

