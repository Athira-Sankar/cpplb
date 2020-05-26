#include<iostream>
#include<cmath>
using namespace std;
class account
{

    protected:
      char name[20];
      int accno;
      char type;
      int bal;
    public:
      void init()
      {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter accno";
        cin>>accno;
        cout<<"Enter type";
        cin>>type;
        bal=500;
      }
      void display()
      {
        cout<<"Customer Name : "<<name<<"\n";
        cout<<"Account Number : "<<accno<<"\n";
        cout<<"Type : "<<type<<"\n";
        cout<<"Balance : "<<bal<<"\n";
      }
      void deposit()
      {
            int amt;
            cout<<"Enter the amount to deposit"<<"\n";
            cin>>amt;
            bal=bal+amt;
      }
};
class sav_acct:public account
{
      int interest;
      public:

      int comp_int()
      {
         int time,rate;
         rate=10;
         cout<<"CI CALCULATION"<<"\n";
         cout<<" Enter time period "<<"\n";
         cin>>time;
         interest=bal*pow(1+rate/100.0,time)-bal;
         bal=bal+interest;
         return interest;
      }

      void withdrawal()
      {
         int amt;
         cout<<"\n Enter amount to withdrawn";
         cin>>amt;
         if(bal-amt>=500)
         {
               bal=bal-amt;
               cout<<"amount withdrawn :"<<amt<<"\n";
               cout<<" balance amount is :"<<bal<<"\n";
         }
         else
         {
               cout<<" sorry ,the amount cannot be withdrawn"<<"\n";
         }
      }
  };

class cur_acct:public account
{
       public:
       void init()
      {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter accno";
        cin>>accno;
        cout<<"Enter type";
        cin>>type;
        bal=100;
      }

      void withdrawal()
      {
          int amt;
          cout<<"\n Enter the amount to withdrawn";
          cin>>amt;
          if(bal-amt>100)
          {
              bal=bal-amt;
              cout<<"withdrawal successful"<<"\n";
          }
          else{
              cout<<"\n The amount cannot be withdrawn";
          }
      }
};

main()
{
      sav_acct s;
      cur_acct c;
      cout<<" SAVINGS ACCOUNT "<<"\n";
      s.init();
      s.display();
      s.deposit();
      cout<<"\n";
      cout<<s.comp_int();
      cout<<"\n";
      s.display();
      s.withdrawal();
      s.display();
      c.init();
      c.display();
      c.deposit();
      cout<<"\n";
      c.display();
      c.withdrawal();
      c.display();

}
