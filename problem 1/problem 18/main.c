#include<stdio.h>

int main(void){
    
    float fahrenheit,celsius;
    printf("fahrenhrit:");
    
    scanf("%f",&fahrenheit);
    
    celsius=(fahrenheit-32)*5/9;
    
    printf("celsius:%f\n",celsius);
    
    
    return 0;
}


