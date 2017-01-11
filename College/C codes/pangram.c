/*Pangarm*/
#include<stdio.h>
#include<ctype.h>
/*
author:ABHINAV GUPTA
made during 3rd semester 
2014-2018
*/
int main() {
    char str[]="abcdefghijklmnopqrstuvwxyz";
    char* s= str;
    int arr[26] ={0};
    while(*s != '\0') {
        if(isalpha(*s)) {
            int x= (int)(*s);
            if(x>=97)
                x= x-97;
            else
                x= x-65;
            arr[x]++;
        }
        s++;
    }
    int i;
    for(i=0;i<26;i++) {
        if(arr[i] == 0) {
            printf("NOT PANGRAM");
             break;
        }
    }
    if(i == 26)
        printf("PANGRAM");
    return 0;
}