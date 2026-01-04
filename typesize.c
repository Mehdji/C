/*
MEHDI NAOUI
A small program to print size of each type.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Type int -> %d Octets\n",sizeof(int));
    printf("Type char -> %d Octets\n",sizeof(char));
    printf("Type float -> %d Octets\n",sizeof(float));
    printf("Type char* (pointeur) -> %d Octets\n",sizeof(char*));
    printf("Type long int -> %d Octets\n",sizeof(long));
    printf("Type short int -> %d Octets\n",sizeof(short));
    printf("Type double -> %d Octets\n",sizeof(double));
    return 0;
}
