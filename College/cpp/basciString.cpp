/*
Basic string
Create a class named 'String' to model strings in C++. 
Take your clues from the main function and code stub defined in this problem.
 
Sample Input:
Tanmeet
 
Sample Output:
Tanmeet
YOUR ANSWER
*/
class String{
    char name[30];
  public:
    void getStr();
    void showStr();
};
/*ABHINAV GUPTA
2014-2018
4th sem*/     
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void String::getStr(){
    cin>>name;
}

void String::showStr(){
    cout<<name<<endl;
}
int main() {
    String s1;
    s1.getStr();
    s1.showStr();
    return 0;
}