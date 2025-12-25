/*
MEHDI NAOUI
THe C programming langage Ritchie&Khernighan

Exercise 1-20. Write a program detab
that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>


#define TAB 5




/*print the longest input line*/

int main(){
    int i =0,c=0;
    
    
    

    while ((c = getchar()) != EOF)
    {
        
        
        if(c == '\t'){ //if there is a tabulation in the input change by number need of space to go to next tab stop
            for(int j = TAB - (i % TAB); j>0; j--){ //use modulo operator to find how many spaces are needed
                putchar('_');
                
            }
            
            i=0;
        }else{
            
            putchar(c);
            i++;
        }
        
        
    
    }
    
   return 0;
}





    
