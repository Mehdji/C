/*
MEHDI NAOUI
10/12/2025
THe C programming langage Ritchie&Khernighan
Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAXLINE 1000 //Define a maximum of character for a line

int getline(char s[],int lim);
void reverse(char s[],char s2[],int lim);


int main(int argc, char const *argv[])
{
    char line[MAXLINE] ={0};
    char reversed_line[MAXLINE]={0};

    while ((getline(line,MAXLINE)) > 0){  //If getline return more than 0 the loop continue
        reverse(line,reversed_line,MAXLINE);//Reverse the line
        printf("%s\n",reversed_line);
    }
    
    return 0;
}

int getline(char s[], int lim){
    int i,c;
    for(i=0; i< lim-1 && ((c=getchar()) != '\n' && c!=EOF);i++){ //Store line,wait for EOF or \n
        s[i]=c;

    }

     
    s[i]='\0'; //Add null character to mark end of the string
    
    return i; //return i ,wich is numbers of characters
}

void reverse(char s[],char s2[],int max){
    // if (s == NULL) return; //Check if null to avoid segfault
    int i,j,n=0, c = 0;
    
    for (i = 0; i < max-1 && s[i] != '\0'; i++); // Store the length of the line in i.

    for (j=i;j>0 ;j--){
        //putchar(s[j-1]);
        
        s2[n]=s[j-1];
        n++;
    }

    /*//
     Inverser en place avec alorithme mirroir,plus élégant
    for (int i = 0; i < len/2; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }*/
    s2[n] = '\0';  //Add null character to mark end of the string
  

}


