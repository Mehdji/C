//MEHDI NAOUI
//2025
//Character couting 
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

int main(void){
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    
    printf("%ld\n", nc);


}