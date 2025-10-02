//MEHDI NAOUI
//2025
//Line Counting
//First version
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

/*Count lines in input*/
int main(){
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
    
}