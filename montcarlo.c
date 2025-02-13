#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double distance (double x , double y){
    return sqrt(pow( x , 2) + pow ( y,2));
}

double get_rand(){
    return 2*((double)rand() / RAND_MAX) -1; 
}
int is_inside(double x , double y){
    return distance(x,y) <= 1;
}
int main(){
    int replay = 2;
    int counter = 0;
    for ( int i = 0; i <replay ; i++){
    double x = get_rand();
    double y = get_rand();
    if (is_inside){
        counter=counter++
    };
    printf("x , y , counter %lf %lf %d\n" , x , y , counter );
    
    }
}