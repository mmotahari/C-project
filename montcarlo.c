#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double distance (double x , double y){
    return sqrt(pow( x , 2) + pow ( y,2));
}

int main(){
    for ( int i = 0; i <3 ; i++){
    double x= 2 * ((double)rand() / RAND_MAX) -1;
    double y=(double)rand() / RAND_MAX;
    double d = distance(x,y);
    printf("distance is %lf\n",d);
    }
}