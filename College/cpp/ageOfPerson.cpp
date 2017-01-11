/*Write a program to calculate the age of a person and
height in cms when year of birth and height in meters is known.
ABHINAV GUPTA
2014-2018
*/
#include <iostream>
#include <iomanip>
using namespace std;
class person_data{
    private:
    string name;
    int year,age;
    double height;
    public:
    person_data(string nm,int y1,double ht){
        name=nm;
        year=y1;
        height=ht;
    }
    void cal_age(int y){
        age=y-year;
    }
    void cal_ht_cms(){
        height=height*100;
    }
    void show(){
        cout<<"Approximate age of a person: "<<age<<endl;
        cout<<"height in cms: "<<height<<endl;
    }

};
int main()
{
    person_data p1("Ram",1975,1.05);
    p1.cal_age(2016);
    p1.cal_ht_cms();
    p1.show();

    return 0;
}