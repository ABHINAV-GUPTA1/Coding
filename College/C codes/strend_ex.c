/* strend implementation
 * @author: ABHINAV GUPTA
 */
#include<stdio.h>
#include<string.h>
int Strend(char *s1,char *s2){
    int len=strlen(s1);
    int i,j=0;
    for(i=len-strlen(s2);i<len;i++)
	if(s1[i]!=s2[j])
		return 0;
        else
            j++;
    return 1;	
}
int main(){
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%d\n",Strend(s1,s2));
}
