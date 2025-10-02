//MEHDI NAOUI
//2025
//File Copying with while
//THe C programming langage Ritchie&Khernighan
//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
//Exercise 1-7. Write a program to print the value of EOF.
#include <stdio.h>


int main(void){

    int c;
    int b;

    printf("EOF = %d\n",  EOF);

    while((c = getchar()) != EOF){
        //putchar(c);
        //b = (c != EOF);
        printf("getchar(%c) = %d\n",c, c != EOF);
    }
    
}