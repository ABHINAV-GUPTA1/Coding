/*
You can compare string variables using strcmp() function. Let's see how you can use it to compare objects of String class.
 
Sample Input1:
Hello
Hello
 
Sample Output1:
Equal
 
Sample Input2:
Hello
hello
 
Sample Output2:
Not Equal
YOUR ANSWER
*/
/*
ABHINAV GUPTA
2014-2018
4th sem
*/
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

class String{
    char name[30];
  public:
    void getStr();
    int compare(String);
};

void String::getStr(){
    cin>>name;
}
int String::compare(String s1){
    return strcmp(name,s1.name);
}
int main() {
    String s1, s2;
    
    s1.getStr();
    s2.getStr();
    
    if( s1.compare(s2) == 0 )
        cout << "Equal";
    else
        cout << "Not Equal";
    return 0;
}
