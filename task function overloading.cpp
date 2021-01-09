#include <iostream>

using namespace std;
double area(double r)
{
    cout<<"area of circle is: "<<3.14*r*r<<"  sq units";
}
int area(int length,int breadth)
{
    cout<<"area of rectangle is: "<<length*breadth<<"  sq units";
}
double area(double br,double h)
{
    cout<<"area of triangle is: "<<0.5*br*h<<"  sq units";
}
int main()
{
    int num,length,breadth;
    double br,h,r;
    cout<<"choose your shape\n";
    cout<<"1.circle\n"<<"2.rectangle\n"<<"3.triangle\n";
    cin>>num;
    if(num==1)
    {
        cout<<"enter radius: ";
        cin>>r;
        area(r);
    }
    else if(num==2)
    {
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter breadth: ";
        cin>>breadth;
        area(length,breadth);
    }
    else if(num==3)
    {
        cout<<"enter breadth: ";
        cin>>br;
        cout<<"enter height: ";
        cin>>h;
        area(br,h);
    }
    else
    {
        cout<<"invalid shape";
    }

}

