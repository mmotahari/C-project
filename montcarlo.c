#include <stdio.h>
#include <math.h>

double distance (double x , double y){
    return sqrt(pow( x , 2) + pow ( y,2));
}

int main(){
    double x , y , d ;
    x = 3;
    y = 4;
    d = distance(x,y);
    printf("d is %lf",d);
}