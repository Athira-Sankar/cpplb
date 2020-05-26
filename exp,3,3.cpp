#include<iostream>
using namespace std;
class figures
{
    int r;
    int l;
    int b;
    int ba;
    int h;
    public:
    figures(int r)
    {
        cout<< (3.14*r*r)<<"\n";
    }
    figures(int l,int b)
    {
        cout<<l*b<<"\n";
    }
    figures(int h,int ba,float y)
    {
        cout<<y*h*ba<<"\n";
    }

};
main()
{

    figures f(6);
    figures f1(5,4);
    figures f2(4,2,0.5);
}
