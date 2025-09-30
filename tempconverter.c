#include <stdio.h>

/*print Farheneit-Celsius table
    for fahr = 0, 20, ...,3°°*/

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /*lower limit of temperature scale*/
    upper = 300; /*upper limit*/
    step = 20;  /* step size*/

    fahr = lower;
    printf("farheneit\tCelsius \n------------------\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%3.0f\t|%6.1f\n",fahr, celsius);
        fahr = fahr + step;
        
    }

    return 0;
}