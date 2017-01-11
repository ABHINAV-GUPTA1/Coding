/*Mathematics Teacher asked Triman to compute volume of various shapes
like Cube, Cylinder, and Cuboids etc. But the teacher wants him to use
only one function named VOLUME. Help Triman  to use concept of
Function overloading in designing the required program.
ABHINAV GUPTA
2014-2018
*/
#include<iostream>
using namespace std;
class measure
{
    public:
    void shape(int r);
    void shape(float l,int b,int h);
    void shape(float c, long int g);
    void shape(double j);
    void shape(float h, double f);
};
void measure::shape(int r)
{
    cout<<"Volume of cube is "<<r*r*r<<endl;
}
void measure::shape(float l,int b,int h)
{
    cout<<"Volume of cuboid is "<<l*b*h<<endl;
}
void measure::shape(float c, long int g)
{
    cout<<"Volume of the cone is "<<((3.14*c*c*g)/3)<<endl;
}
void measure::shape(double j)
{
    cout<<"Volume of the sphere is "<<(4.19)*j*j*j<<endl;//((4/3)*pi*r*r*r)
}
void measure::shape(float h, double f)
{
    cout<<"nVolume of the Cylinder is "<<3.14*f*f*h<<endl;
}
int main()
{
    char choice;
    int r,l,b;
    float c,h;
    int ch;
    double j,f;
    long int g;
    measure obj;
    while(1)
    {
        cout<<"\n---------Volume-------\n";
        cout<<"\n1. volume of cube";
        cout<<"\n2. volume of cuboid";
        cout<<"\n3. Volume of the cone";
        cout<<"\n4. Volume of the sphere";
        cout<<"\n5. Volume of the cylinder";
        cout<<"\n6. Exit";
        cout<<"\nEnter your choice\n-------------------\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"enter the value of side for cube";
            cin>>r;
            obj.shape(r);
            break;
            case 2:
            cout<<"Enter length,breadth and height of cuboid"<<endl;
            cin>>l>>b>>h;
            obj.shape(l,b,h);
            break;
            case 3:
            cout<<"nEnter the radius of the cone ";
            cin>>c;
            cout<<"nEnter the height of the cone ";
            cin>>g;
            obj.shape(c,g);
            break;
            case 4:
            cout<<"nEnter the radius ";
            cin>>j;
            obj.shape(j);
            break;
            case 5:
            cout<<"nEnter the radius ";
            cin>>f;
            cout<<"nEnter the height ";
            cin>>h;
            obj.shape(h,f);
            break;
            default:
            cout<<"\n----Thanks for using the program By ABHINAV GUPTA\n------------\n--------1410991019----\n";
                return 0;
            break;
        }
    }
    return 0;
}