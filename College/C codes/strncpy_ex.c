/* stncpy implementation
 * @author:ABHINAV GUPTA 
 */
#include<stdio.h>

void Strncpy(char *s1,char *s2,int i){
    int j=1;
    while((*s2++=*s1++)&&(j++<i)){
    }
    //s2++;
    *s2++='\0';
   // puts(s2);
    //return s2;
} 
int main() {
    char s1[100],s2[100];
    int i;
    scanf("%s",s1);
    printf("Enter number of chars to be copied\n ");
    scanf("%d",&i);
   // printf("\n%s\n",
    Strncpy(s1,s2,i); 
    puts(s2);
    return 0;
}
