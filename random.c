#include <stdio.h>
#include <stdlib.h>
int main(){
    for ( int i = 0; i <3 ; i++){
    double x=(double)rand() / RAND_MAX;
    float y=(double)rand() / RAND_MAX;
    printf("X Random number %d: %f\n", i + 1, x);
    printf("Y Random number %d: %f\n", i + 1, y);
    }
}