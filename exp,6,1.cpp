#include<iostream>
using namespace std;
#include <iostream>

using namespace std;

class div
{
    double a,b;
    public:
    void read()
    {
        cout<<"\nEnter two double type numbers:";
        cin>>a>>b;
    }
    void divi()
    {
        try{

            if(cin.fail())
                throw "wrong input!";
            if( b == 0 )
                throw 0;
            cout<<a/b;
        }
        catch(const int n)
        {
            cout << "division by " << n << " not possible\n";
        }
        catch(const char* str)
        {
            cout<< str;
        }
    }
};

main()
{
    div o;
    int r=0,m;
    do
    {o.read();
    o.divi();
    cout<<"\n"<<"continue?";
    r=0;
    cin>>r;
    cin>>m;
    }while(m==1);
}
