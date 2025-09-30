#include <stdio.h>



int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = -18.0;
    upper = 149.0;
    step = 20.0;

    celsius = lower;
    printf("Celsius\tfarheneit\n------------------\n");
    while(celsius<=upper){
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t|%6.1f\n",fahr, celsius);
        celsius = celsius + step;
    }

}