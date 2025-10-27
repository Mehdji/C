// MEHDI NAOUI
// 2025
// Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.p-25
// THe C programming langage Ritchie&Khernighan

#include <stdio.h>

#define IN 1           // In a word, value is 1
#define OUT 0          // Outside a word, value is 0
#define MAX_LETTERS 26 // Maximum number of letters possible in a word

 /*
    c - store character read by getchar
    state - 1 if we are in a word or outside 0 if we are outside
    letter_counter - count number of letters if we are in a word
    list_counter_record - keep a track of each count

    */

    int c, state, letter_counter = 0;
    int list_counter_record[26] = {0};

   void printResult();
   void printTable();


int main(void)
{
   

    // int words_length[46];
    // Start while loop: if char is different than EOF continue
    while ((c = getchar()) != EOF)
    {

        // test if it's beginning of a word
        if (c == ' ' || c == '\t' || c == '\n')
        {
            /*End of a word*/
            state = OUT;
        }
        else
        {
            state = IN;
        }

        // Test state: if in, we'e still in a word,keep counter incrementing
        if (state == IN)
        {
            letter_counter++;
        }
        else
        {
            list_counter_record[letter_counter]++; // Add counts to the arrays
            letter_counter = 0;
        }
    }

    printResult();
   

    
}

//Print result
void printResult(){

     printf("list counter records:\n");

    for (int i = 1; i < 5; i++)
    {
        printf("%d letter = %d\n", i , list_counter_record[i]);
        
    }

    printTable();

}

void printTable(){
    printf("\n");
    //Loop to print vertical number
    for(int i=5;i>0;i--){
        printf("%d ",i);

        //If count exist print a '*'
        for(int j=1; j<6;j++){
            
            if(list_counter_record[j]>=i){
                    
                printf("* ");    
                
                
            }else{
                printf("  ");
            }
            
        }
    printf("\n");
        
        
    }
    printf(" ");

    for(int i=0;i<6;i++){
        if(i==0){
            printf(" ",i);
        }else{
        printf("%d ",i);
        }
       
    }
    printf(" <-nb of letters\n");
}