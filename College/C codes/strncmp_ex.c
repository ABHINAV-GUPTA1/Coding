/* strcmp implementation
 * @author : ABHINAV GUPTA
 */
#include<stdio.h>

int Strncmp(char *s1,char *s2,int i){
    int j=0,k,m=0;
    for(k = 0; s1[k] != '\0' && s2[k] != '\0'; k++){
        j+=s1[k];
        m+=s2[k];
    }
    if(j>m)
	return 1;
    else if(j==m)
         return 0;
    else
         return -1; 
}
int main(){
    char s1[100],s2[100];
    scanf("%s",s1);
    int i;
    scanf("%s",s2);
    printf("Enter no. of els to be compared");
    scanf("%d",&i);
    printf("%d\n",Strncmp(s1,s2,i));

}
