/*Write Program to demonstrate use of constructors
and destructors for performing dynamic operations
ABHINAV GUPTA
2014-2018
*/
#include <iostream>

using namespace std;
int i=0;
class data{
    private:
        string str;
    public:
        data(string a){
            str=a;
        }
        void show(){
            cout<<"Data "<<++i<<" = "<<str<<endl;
        }
        void compare(data d){
            if(d.str==str)
                cout<<"Both Objects have same text"<<endl;
            else
                cout<<"Both Objects have different text"<<endl;
        }
        ~data(){
            cout<<"Release memory allocated to "<<str<<endl;
        }

};
int main()
{
    data d1("obfuscation");
    data d2("obstruction");
    d1.show();
    d2.show();
    d1.compare(d2);
    return 0;
}