//MEHDI NAOUI
//2025
//File Copying
//THe C programming langage Ritchie&Khernighan

//read a character
//  while (character is not end-of-file indicator)
//  output the character just read
//  read a character

#include <stdio.h>

/*Copy input to output; 1st version*/

int main(){
    int c;

    c = getchar();

    while (c != EOF){
        putchar(c);
        c = getchar();

    }
}