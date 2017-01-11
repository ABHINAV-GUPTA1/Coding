/*String Copy and Compare
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
#include<stdio.h>
#include<string.h>

void strcpy1(char* n,char*m) {
    int count =0;
    while(*m!='\0') {
        *n =*m;
        n++;
        m++;
        count++;
    }
    *n ='\0';
    printf("%d\t", count);
}

void strcmp1(char* n, char* m) {
    while((*n== *m) &&*n!='\0'&&*m!='\0') {
        n++;
        m++;
    }
    if(*n=='\0'&&*m=='\0') {
        printf("equal strings\n");
    }
    else
        printf("unequal strings\n");
}

int main() {
    char name[20]="abcd nnn";
    char name1[20];
    strcpy1(name1, name);
    strcmp1(name1,name);

}