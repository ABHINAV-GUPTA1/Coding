/*Design a class called  "Complex" that represents complex numbers.
The class should
contain data members that stores real and imaginary parts. Moreover,
it should contain
member functions that can implement the elementary operations
(Addition, Subtraction,
Multiplication and division) of two complex numbers. Furthermore, the
class should contain
 Print() member function that print complex numbers and the result of
elementary operation
 on the screen in  the form a + ib.
ABHINAV GUPTA 1410991019
Date-
*/
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    float rel,img;
    public:
    void get()
    {
        cout<<"Enter the real and imaginary part of number respectively\n";
        cin>>rel>>img;
    }
    void display(string res)
    {
        cout<<"Result for "<<res<<" is = "<<rel<<" + "<<img<<"i"<<endl;
    }

    void add(Complex s1,Complex s2)
    {
        rel=(s1.rel)+(s2.rel);
        img=(s1.img)+(s2.img);
    }
    void sub(Complex s1,Complex s2)
    {
        rel=(s1.rel)-(s2.rel);
        img=(s1.img)-(s2.img);
    }
    void mul(Complex s1,Complex s2)
    {
        rel=((s1.rel)*(s2.rel))-((s1.img)*(s2.img));
        img=((s1.rel)*(s2.img))+((s2.rel)*(s1.img));
    }
    void div(Complex s1,Complex s2)
    {
        rel=(((s1.rel)*(s2.rel))+((s1.img)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
        img=(((s2.rel)*(s1.img))-((s1.rel)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
    }
};

void display(){
    cout<<"\n--------------------Complex Numbers------------\n"
        <<"1.Enter complex numbers\n2.Addition\n3.Subtraction\n"
        <<"4.Multiplication\n5.Division\n6.Exit\n--------------------------------------\nENTER
        YOUR choice\n";
}

int main()
{
    int ch;
    Complex c1,c2,answer;
    while(1){
        display();
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter first complex number\n";
            c1.get();
            cout<<"Enter second complex number\n";
            c2.get();
            break;
            case 2:
            answer.add(c1,c2);
            answer.display("Addition");
            break;
            case 3:
            answer.sub(c1,c2);
            answer.display("Subtraction");
            break;
            case 4:
            answer.mul(c1,c2);
            answer.display("Multiplication");
            break;
            case 5:
            answer.div(c1,c2);
            answer.display("Division");
            break;
            default:
            cout<<"\n----THANKS FOR USING THE PROGRAM BY ABHINAV GUPTA-----------\n"
                <<"----------------1410991019-------\n";
            return 0;
        }
    }
    return 0;
}