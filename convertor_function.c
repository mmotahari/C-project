#include <stdio.h> 

double c2f(double c){
    double f;
    f = (c * 1.8) + 32;
    return f;
}

double f2c(double f){
    double c;
    c = 0.55 * (f - 32);
    return c ;
}

int main() {
    int ch;
    double tem;
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2)\n");
    scanf("%d",&ch);
    if (ch==1){
        printf("Celsius : \n");
        scanf("%lf",&tem);
        tem = c2f(tem);
        printf("Fahrenhei is : %f\n",tem);
    }
    else if (ch==2){
        printf("Fahrenheit : \n");
        scanf("%lf",&tem);
        tem = f2c(tem);
        printf("Celsius is : %f\n",tem) ;  
    }
    else{
        printf("Invalid input");

    }
}