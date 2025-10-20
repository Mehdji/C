//MEHDI NAOUI
//2025
//Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
//backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

int main(void){
    int c,tab=0;

    while(( c = getchar()) != EOF){

       if(c != '\t' && c != '\b' && c !='\\'){
        putchar(c);
       }
       
       if(c == '\t'){
            printf("\\t");
       }

       if(c == '\b'){
            printf("\\b");

       }

       if(c == '\\'){
            printf("\\\\");

       }

    }
    

}