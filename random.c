#include <stdio.h>
#include <stdlib.h>
int main(){
    for ( int i = 0; i <3 ; i++){
    double x=2*((double)rand() / RAND_MAX)-1;
    float y=(double)rand() / RAND_MAX;
    printf("X Random number %d: %f\n", i + 1, x);
    printf("Y Random number %d: %f\n", i + 1, y);
    }
}