/*Write a C++ program to swap the values of two variables
using Call by value and Call by reference mechanism.
ABHINAV GUPTA 1410991019
Date-
*/
#include <iostream>
using namespace std;
void display(){
    cout<<"\n--------------------Program for swapping------------\n"
        <<"1.Enter numbers\n2.Swap using call by value\n"
        <<"3.Swap using call by reference\n4.Function Overloading\n"
        <<"5.Const call by reference\n6.Default argument\n"
        <<"7.Return By
        Reference\n8.Exit\n--------------------------------------\nENTER YOUR
        choice\n";
}
template<typename T>
    void display1(T a,T b,string method){
    cout<<"\n------Swap in "<<method<<" ------\na="<<a<<"\tb="<<b<<endl;
}
void swap_call_by_value(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    display1(a,b,"call by value");
}
void swap_call_by_reference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    display1(a,b,"call by reference");
}
void swap_function_overloading(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    display1(a,b,"Function Overloading integers");
}
void swap_function_overloading(float &a, float &b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
    display1(a,b,"Function Overloading Float");
}
void swap_function_overloading(char &a, char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
    display1(a,b,"Function Overloading Characters");
}
void swap9(int &a,const int &b){
    int temp;
    temp=a;
    a=b;
    //b=temp;
    display1(a,b,"call by reference const");
}
int& abc(int &a){
    a=a+4;
    cout<<"A IN func"<<a<<endl;
    return a;
}
void function_overloading(int &a,int& b){
    cout<<"\n------Before swap in main--------\n";
    display1(a,b,"main");
    swap_function_overloading(a,b);
    float fx,fy;
    char cx,cy;
    cout<<"\nEnter 2 floating point no = ";
    cin>>fx>>fy;
    cout<<"Enter 2 characters = ";
    cin>>cx>>cy;
    cout<<"\n------Before swap in main float are--------\n";
    display1(fx,fy,"main");
    swap_function_overloading(fx,fy);
    cout<<"\n------Before swap in main chars are--------\n";
    display1(cx,cy,"main");
    swap_function_overloading(cx,cy);
}
void display_default_arguements(string c="ABHINAV GUPTA", int n=1){
    for(int i = 0; i <n; ++i) {
        cout<<c<<"\t";
    }
    cout<<endl;
}
void default_arguements(){
    cout<<"\nNo argument passed:\n";
    display_default_arguements();
    cout<<"\nFirst argument passed:\n";
    display_default_arguements("One argument");
    cout<<"\nBoth argument passed:\n";
    display_default_arguements("Two argument", 2);
}
int main()
{
    int a,b,c;
    while(1){
        display();
        cin>>c;
        switch(c){
            case 1:
            cin>>a>>b;
            break;
            case 2:
            cout<<"\n------Before swap in main--------\n";
            display1(a,b,"main");
            swap_call_by_value(a,b);
            cout<<"\n--------------AFTER SWAP in
                main-----------------------\n";
                display1(a,b,"main");
            break;
            case 3:
            cout<<"\n------Before swap in main--------\n";
            display1(a,b,"main");
            swap_call_by_reference(a,b);
            cout<<"\n--------------AFTER SWAP in
                main-----------------------\n";
                display1(a,b,"main");
            break;
            case 4:

            cout<<"\n---------Function Overloading----------\n";
            function_overloading(a,b);
            break;
            case 5:
            //Call by reference const
            cout<<"\n------In main--------\na="<<a<<"\tb="<<b;
            swap9(a,b);
            display1(a,b,"main");
            break;
            case 6:
            cout<<"\n-------------Default arguement---------------\n";
            default_arguements();
            break;
            case 7:
            cout<<"\nReturn by reference\n";
            int aa1;
            aa1=10;
            cout<<aa1<<endl;
            abc(aa1)=40;
            cout<<aa1<<endl;
            break;
            default:
            cout<<"\n-----------------THANKS FOR USING THE PROGRAM BY ABHINAV GUPTA--------------------\n"
                <<"-------------------1410991019------------\n";
            return 0;
        }
    }
    return 0;
}