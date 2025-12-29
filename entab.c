/*
MEHDI NAOUI
THe C programming langage Ritchie&Khernighan

Exercise 1-21.Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?
*/

#include <stdio.h>
#define TAB 5

int main(int argc, char const *argv[])
{
    int i = 0, c = 0, tab_count = 0, space_count= 0;

    while((c=getchar())!=EOF){

        if((c==' ') || (c=='\t')){
            i++;
            
        }else if((c=='\n')){

            if(i%TAB == 0){
                //use modulo operator to find how many spaces are needed
                for(tab_count = i/TAB;tab_count>0;tab_count--){
                    putchar('\t');

                }
            }
             
        }else if(i%TAB != 0){
            
            for(tab_count = i/TAB;tab_count>0;tab_count--){
                    putchar('\t');

                }

            for(space_count = TAB - (i%TAB);space_count>0;space_count--){
                    putchar(' ');

                }
                putchar('\n');
                i =0;
        }
    }

    return 0;
}

