#include <stdio.h>
#include <string.h>
/*ABHINAV GUPTA ABHIG605@GMAIL.COM*/
int isAnagram(char *s1, char *s2) {
    int A1[256]={0}, A2[256]={0};
    
    int i, j;
    for(i=0; s1[i]!='\0'; i++)
        A1[s1[i]]++;

    for(i=0; s2[i]!='\0'; i++)
        A2[s2[i]]++;
    
    for(i=0; i<256; i++)
        if(A1[i]!=A2[i])
            return 0;
    
    return 1;
}

int main() {
    int N;
    char str[2][100];
   
    printf("Enter two strings to check if they are anagrams: \n");
    scanf("%s", str[0]);
    scanf("%s", str[1]);

    if(isAnagram(str[0], str[1]))
        printf("\n-----------------\n%s and %s are Anagram\n-----------------\n",str[0], str[1]);
    else
        printf("\n------------------\n%s and %s are Not anagrams\n------------------\n", str[0], str[1]);
    
    return 0;
}
