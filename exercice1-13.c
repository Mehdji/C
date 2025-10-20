//MEHDI NAOUI
//2025
//Write a program to print a histogram of the lengths of words in its input. It is
//easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.p-25
//THe C programming langage Ritchie&Khernighan

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){

    int c,state,letter_counter = 0;

    //int words_length[46];

    while ((c=getchar()) != EOF){

        if(c==' ' || c=='\t' || c=='\n'){
            /*End of a word*/
            state = OUT;
        }else{
            state = IN;
        }

        if(state == IN){
            letter_counter++;
            //printf("counter = %d", letter_counter);
            putchar(c);
        }else{
            printf(" <-- nb of letters: ");
            for(int i = letter_counter; i>0 ;i--){
                printf("-");
            }
            printf("\n");
            letter_counter = 0;
        }
        /*
        if espace
            Pas dans un mot.
            etat = out
            compter lettre = 0
        else 
            dans un mot
            
            etat = in
            
        if etat in alors
        
            incrementer compteur lettre
            imprimer character
        else
            Pour compteur lettre égale tant ,décémenter de 1
                imprimer "-"
        */
        
        
    }

}