//MEHDI NAOUI
//2025
//Write a program that prints its input one word per line.
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>


int main(void){
    int c,state;

    while((c=getchar()) != EOF){

        if(c== '\t' || c==' '){
            
            putchar('\n');
            //putchar(c);

        }else{
            
            putchar(c);
        }
        
        
    }


}