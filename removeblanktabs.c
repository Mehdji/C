/*
MEHDI NAOUI
THe C programming langage Ritchie&Khernighan
Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines
*/

#include <stdio.h>
#define MAXLINE 1000 /*Maximum input line length*/


int getline_custom(char s[],int lim);
void remove_trailing_whitespace(char s[]);
int is_blank_line(char s[]);

int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int len;

    while ((len = getline_custom(line,MAXLINE))> 0){
        remove_trailing_whitespace(line);

        if(!is_blank_line(line)){
            printf("%s",line);
        }
    }
    return 0;
}

int getline_custom(char s[],int lim){
    int c, i;

    for(i=0;i<lim-1 && (c = getchar()) != EOF && c!='\n';i++){
        s[i]=c;

    }

    if (c =='\n'){
        s[i]=c;
        i++;
    }

    s[i] = ('\0');
    return i;
}

void remove_trailing_whitespace(char s[]){
    int i;

    //Find end of the string(before newline)
    for(i=0; s[i] != '\0' && s[i] != '\n';i++);

    i--;
    while(i>=0 && (s[i]==' ' || s[i] == '\t')){
        i--;
    }

    if(s[i]=='\n' || (i>0 && s[i-1] != '\n')){
        s[i]='\n';
        i++;
    }
    s[i] ='\0';

    
}

int is_blank_line(char s[]){
    int i;

    for (i=0;s[i] != '\0' && s[i] != '\n'; i++ ){
        if(s[i] != ' ' && s[i] != '\t'){
            return 0;
        }
    }

    return 1;
}