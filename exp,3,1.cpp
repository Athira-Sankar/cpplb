#include<iostream>
using namespace std;
class bank
{
    int count;
    public:
        bank()
        {
            count=0;
        }
        void operator++()
        {
            ++count;
        }
        void operator--()
        {
            --count;
        }
        void display()
        {
            cout<<count<<"\n";
        }
};
main()
{
    int q;
    bank b;
    do
    {
        cout<<"1.entry to bank"<<"\n"<<"2.exit from bank"<<"\n"<<"3.display no: of ppl in the bank"<<"\n";
        cin>>q;
        if(q==1)
            b.operator++();
        else if(q==2)
            b.operator--();
        else if(q==3)
            b.display();
        else
            cout<<"invalid choice"<<"\n";
    }while(q==1||q==2||q==3);
}
