/*
Mr. Glass is maintaining a list of five names in his database. But an intruder has gained access of his system. Intruder intentionally changes the code which generates reverse of all the names. Write a modified version of code which the intruder might had used to reverse all the strings.
 
[HINT]:  1. Use class to class type conversion(user defined to user defined)
                2. Inbulit String Reverse function is not applicable.
                3. Define logic in source class
 
 
Sample Input Testcase 1:
shiva
rama
ganesha
shree
om
Sample Output Testcase 1:
avihs
amar
ahsenag
eerhs
mo
 
Explanation:
 
Input: It contains list of five names.
Output: It contains reverse of all strings.
 
MY ANSWER USING CLASS TO CLASS CONSTRUCTOR
*/
/*
ABHINAV GUPTA
2014-2018
4th sem
*/
////////////////////////////////////
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
class src{
    
    public:
    src(){}
        char str[100][100];
        void get(){
            for(int i=0;i<5;i++){
                cin>>str[i];
            }
        }
   /* operator dest(){
        dest a(str);
        return a;
    }*/
};

class dest
{
	
	char str_rev[100][100];
	public:
	
	void show()
	{
	for(int i=0;i<5;i++)
	{
	
	cout<<str_rev[i]<<endl;
	}
	}
	// incomplete class
   dest(){
       str_rev[0][0]='\0';
   }
    dest(char str_rev1[100][100]){
        char st[100];
        for(int i=0;i<5;i++)
            {
                
               int k=0,j=strlen(str_rev1[i])-1;
                while(j!=0){
                    str_rev[i][k++]=str_rev1[i][j--];
                }
            str_rev[i][k++]=str_rev1[i][j--];
            str_rev[i][k++]='\0';
                strcpy(str_rev1[i],str_rev[i]);
            }
    }
    dest(src &ab){
        dest b;
        b=ab.str;
      /*  for(int i=0;i<5;i++)
	{
	
	//cout<<ab.str[i]<<endl;
	}*/
    }
};

int main()
{
	src s;
	dest d;
	s.get(); // enter list of strings
	d=s; // class to class type conversion
	d.show(); // display all reversed strings
	return 0;
	
}