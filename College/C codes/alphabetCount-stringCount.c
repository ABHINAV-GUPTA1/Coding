/*--------------------------------------
Program To Calculate Number Of consecutive alphabets/letters. 

----------------------------*/
/*
* author: ABHINAV GUPTA
  College : Chitkara University
  2014-2018
--------------------------------------
Input-1: 
	aaabbb
Output-1:
	a - 3 times
	b - 3 times
---------------------------------------	
Input-2: 
	abcdef
Output-2:
	abcdef
*/
#include <stdio.h>
int main() {
	char str[1000];
	scanf("%s",str);
	int cnt,i;
	for(i = 0; str[i] != '\0'; i++) {
		cnt=1;
		printf("%c",str[i]);
		if(str[i]!=str[i+1]) {
			continue;
		}
		else {
			while(str[i]==str[i+1]) {
				cnt++;
				i++;
			}
			printf(" - %d times\n",cnt);
		}
	}
	return 0;
}