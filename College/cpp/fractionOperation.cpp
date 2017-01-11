/*
Fraction Operation
There is a class "fraction" having two integer data members nominator and denominator that stores the fractional information of the class. Write a code to overload + and * operator to find addition and multiplication of that fraction value
 
Sample input:
3 4
5 2
Output:
26 8
Explanation:
3 and 5 are nominator and 4 and 2 are denominator of two objects
3/2 + 5/2 = (6+20)/8 = 26/8
and result is 26 and 8.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////
/*
ABHINAV GUPTA
2014-2018
4th sem
*/
#include<iostream>
using namespace std;
class fraction
{
    int nominator;
    int denominator;
    public:
    friend fraction operator+(fraction &, fraction&);
    void get();
    friend ostream& operator<<(ostream&, fraction&);
};

void fraction::get(){
    cin>>nominator>>denominator;
}
fraction operator+(fraction &s1,fraction &s2){
    fraction t;
    t.nominator=s1.nominator*s2.denominator+s2.nominator*s1.denominator;
    t.denominator=s1.denominator*s2.denominator;
    return t;
}
ostream& operator<<(ostream &dout,fraction &s1){
    dout<<s1.nominator<<" "<<s1.denominator<<endl;
    return dout;
}
int main()
    {
    fraction f1,f2,f3;
    f1.get();
    f2.get();
    f3=f1+f2;
    cout<<f3;
    return 0;
}