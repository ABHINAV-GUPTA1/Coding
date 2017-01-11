/*Substring Search*/
#include <string.h>
#include <stdio.h>
/*
Author:ABHINAV GUPTA
2014-2018
made during 3rd semester 
*/
int main()
{
    char str[80] = "hello world hello world hel hellooo";
    char strsch[10]="hello";
    char* s = str;
    char* d =strsch;
    int count =0;
    while(*s != '\0') {
        if(*s != *d) {
            s++;
            continue;
        } else {
            while(*d!= '\0') {
                if(*s == *d) {
                    s++;
                    d++;
                } else {
                    d = strsch;
                    break;
                }
            }
            if(*d == '\0') {
                count++;
                d=strsch;
            }
        }
    }
    printf("%d",count);
    return 0;
}