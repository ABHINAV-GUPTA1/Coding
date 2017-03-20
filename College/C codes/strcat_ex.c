/*strcpy implementation
 * @author : ABHINAV GUPTA
 */
#include<stdio.h>

void Strcpy(char* s1,char* s2){
    while(*s2++);//def
    s2--;
    while(*s2++=*s1++);//defabc	
} 
int main(){
    char s1[100],s2[100];
    gets(s1);//abc
    gets(s2);//def
    Strcpy(s1,s2);
    puts(s2); //defabc
    return 0;	
}
