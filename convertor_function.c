#include <stdio.h> 

double f2c (double f) {
return (f - 32) * 0.55;
}

double c2f (double c){
    return (c * 1.8) + 32;
}

int main(){
    double f ,c ;
    int a;
    scanf ("f2c 1 or c2f 2 ", &a);
    if (a=1){
    scanf("%lf/n",&f );
    c = f2c (f);
    printf("celsius is : %lf",c);
    }
    else {
    scanf("%lf/n",&c );
    f = c2f (c);
    printf("fahrenhit is : %lf",f);   
    }
   

}