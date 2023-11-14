//Write a program to convert the temperature entered in Celsius to Fahrenheit ( (temp *9/5)+32).

#include<stdio.h>
int main(){
    int c;
    float f = 0;
    printf("\nEnter Temprature in Celcius:");
    scanf("%d",&c);
    f = ( (c *1.8)+32);
    printf("\nTemprature in Fahrenheit is %f.",f);
    printf("\nSuyash Rusia Roll no.:58");
    return 0;
}