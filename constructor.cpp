#include <iostream>

using namespace std;
 class calculator
{
    int a,b;
public:
    void add(float x,float y)
    {
        a=x;
        b=y;
        cout<<"the sum of"<<a<<"and"<<b<<"is: "<<a+b;
    }
    void sub(float x,float y)
    {
        a=x;
        b=y;
        cout<<"the difference of"<<a<<"and"<<b<<"is: "<<(a-b);
    }
    void mul(float x,float y)
    {
        a=x;
        b=y;
        cout<<"the product of"<<a<<"and"<<b<<"is: "<<a*b;
    }
    void div(float x,float y)
    {
        a=x;
        b=y;
        cout<<"the division of"<<a<<"and"<<b<<"is: "<<a/b;
    }
    void mod(float x,float y)
    {
        a=x;
        b=y;
        cout<<"the remainder of"<<a<<"and"<<b<<"is: "<<(a%b);
    }
~calculator()
{
    cout<<"\ndestructor called";
}
};
int main()
{
    int choice,a,b;
    calculator calc;

    Output:
    cout<<"\nwhich operation you want to perform?";
    cout<<"\n"<<"1.addition"<<"\n"<<"2.substraction"<<"\n"<<"3.multiplication"<<"\n"<<"4.division"<<"\n"<<"5.modulus"<<"\n";
    cin>>choice;
    cout<<"\nenter first number: ";
    cin>>a;
    cout<<"\nenter second number: ";
    cin>>b;
    if(choice==1)
    {
     calc.add(a,b);
    }
    else if(choice==2)
    {
        calc.sub(a,b);
    }
    else if(choice==3)
    {
        calc.mul(a,b);
    }
    else if(choice==4)
    {
        calc.div(a,b);
    }
    else if(choice==5)
    {
        calc.mod(a,b);
    }
     else
     {
         cout<<"invalid value";
     }
     string str;
     cout<<"\ndo you want to perform more calculations(y/n)?";
     cin>>str;
     if(str=="y")
     {
         goto Output;
     }
     else
     {
         return 0;
     }
}
