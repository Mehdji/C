//MEHDI NAOUI
//2025
//Count blank, tabs, new lines exo 1-8 p22
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

int nl =0,blk=0, tabs=0, c=0;


int main(void){

    while((c = getchar()) != EOF){
        if(c == '\n'){
            nl++;
        }
    

    if(c == '\t'){
            tabs++;
        }
    
    if(c == ' '){
            blk++;
        }
    }
    printf("Lines: %d, blank: %d, tabs: %d\n", nl, blk, tabs);

}