#include <stdio.h>

#define UPPER 144.0
#define LOWER -18.0
#define STEP 20.0

float convert(float);

int main(){
    for(float to_conv = LOWER; to_conv < UPPER ; to_conv+=STEP){
        printf("%3.0f celsius = %6.1f farheneit\n",to_conv ,convert(to_conv));
    }
}

float convert(float celsius){
    return celsius *(9.0/5.0) + 32.0; ;
}