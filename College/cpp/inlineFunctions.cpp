/*Mohit wants to help his father in maintaining record of monthly sales.
 Mohit needs to create a program to ease the task of calculation.
Write a menu driven program to perform all basic mathematical operations
using concept of Inline functions.
ABHINAV GUPTA
2014-2018
*/
#include <iostream>

using namespace std;
class arithmatic
{
    public:
        inline double add(double a,double b)
        {
            return (a+b);
        }
        inline double sub(double a,double b)
        {
            return (a-b);
        }
        inline double multip(double a,double b)
        {
            return (a*b);
        }
        inline double div(double a,double b)
        {
            return (a/b);
        }
};
int main()
{
    int ch;
    double x,y,t;
    arithmatic obj;
    while(1)
    {
    cout<<"\n\tMENU \n";
    cout<<"1.Addition\n2.Subtraction\n";
    cout<<"3.Multiplication\n4.Division\n5.Exit\n";
    cout<<"\nEnter youer choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\nEnter two number: ";
            cin>>x>>y;
            t=obj.add(x,y);
            cout<<"Addition "<<x<<"+"<<y<<"="<<t<<endl;
            break;
        case 2:
            cout<<"\nEnter two number: ";
            cin>>x>>y;
            t=obj.sub(x,y);
            cout<<"Subtractin "<<x<<"-"<<y<<"="<<t<<endl;
            break;
        case 3:
            cout<<"\nEnter two number: ";
            cin>>x>>y;
            t=obj.multip(x,y);
            cout<<"\nMultiplication "<<x<<"*"<<y<<"="<<t<<endl;
            break;
        case 4:
            cout<<"\nEnter two number: ";
            cin>>x>>y;
            t=obj.div(x,y);
            cout<<"Division "<<x<<"/"<<y<<"="<<t<<endl;
            break;
        default:
            cout<<"\n----Thanks for using the program by ABHINAV
GUPTA\n----------";
            cout<<"----1410991019------\n";
            return 0;
        }
    }
    return 0;
}