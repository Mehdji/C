//MEHDI NAOUI
//2025
//Write a program to copy its input to its output, replacing each string of one or
//more blanks by a single blankexo 1-9 p22
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

int main(void){
    int c,space_count;

    while((c = getchar()) != EOF){
        
       if(c==' '){
        space_count++;
        
            if(space_count>1){
                
                while(space_count != 1){
                    c='\0';
                    space_count--;
                    
                }  
            }
        
       }

        if(c!= ' '&&c!= '\0'){
            space_count = 0;
        }
        

        putchar(c);
        
    }
   
 }