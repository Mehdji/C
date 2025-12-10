/*
MEHDI NAOUI
THe C programming langage Ritchie&Khernighan
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAXLINE 1000
#define TRESHOLD 80





void getline(char line[],int max); /*Collect characters,count and stop when get a'\n', if line is > than 80 call printline*/
void printline(char line[]); /*Print line*/


int main(int argc, char const *argv[])
{
    
    char line[MAXLINE] = {0};;
    
    getline(line,TRESHOLD);
    
    return 0;
}

void getline(char s[],int max){
    char c;
    int i = 0;

    while ((c = getchar()) != EOF) /*Collect user inputs while get EOF*/
    {
        if( c != '\n' && i < max-1){  //If we don't get line return, increment i and store character into line[i]
            s[i] = c;
            i++;
        
        
        }else {
            s[i] = '\0';
            
            if(i>=TRESHOLD){
            printf("line: %s\n",s);
            printf("count: %d\n",i);
            
            }

       
            i=0;
        }
    }
  
    printf("%d",i);
}

void printline(char line[]){
    printf("%s",line);
}