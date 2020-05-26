#include<iostream>
using namespace std;
float calculateAverage(int m1,int m2,int m3,int m4)
{
    float avg;
    avg=(m1+m2+m3+m4)/4;
    return avg;

}
main()
{
    float m1,m2,m3,m4;
    float r;
    cout<<"enter 4 marks";
    cin>>m1>>m2>>m3>>m4;
    try
    {
        if((m1<0||m1>100)||(m2<0||m2>100)||(m3<0||m3>100)||(m4<0||m4>100))
            throw "Out of range";
        else
          {
              r=calculateAverage(m1,m2,m3,m4);
              cout<<r;
          }
    }
    catch(const char* msg)
    {
        cout<<msg;
    }

}
