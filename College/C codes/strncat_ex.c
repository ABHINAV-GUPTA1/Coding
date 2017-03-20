/* strncat implementation
 * @author : ABHINAV GUPTA
 */
#include<stdio.h>
#include<string.h>

void Strncat(char *s1,char *s2,int i){
    int j=1,len=0;
    len=strlen(s2);
    for(j=0;j<i && s1[j]!='\0';j++)
        s2[j+len]=s1[j];
    s2[j+len]='\0';
   // puts(s2);
    //return s2;
} 
int main() {
    char s1[100],s2[100];
    int i;
    scanf("%s",s1);
    scanf("%s",s2);
    printf("Enter number of chars to be copied\n ");
    scanf("%d",&i);
   // printf("\n%s\n",
    Strncat(s1,s2,i); 
    puts(s2);
    return 0;
}
