#include<stdio.h>
#include<stdlib.h>

float get_random(){
    return 2*((float)rand() / RAND_MAX)-1;
}

int is_inside_circle(float x,float y){
    return x*x+y*y<=1;
}

int main(){
    int sample_size=10000000;
    int inside=0;
    for(int i=0;i<sample_size;i++){
        float x=get_random();
        float y=get_random();
        if (is_inside_circle(x,y)){
            inside++;
        }
    }

    float result=4*(inside/(float)sample_size);
    printf("pi=%f\n",result);
   /*printf("%d\n",is_inside_circle(0,0));
   printf("%d\n",is_inside_circle(-1,-1));
   printf("%d\n",is_inside_circle(0.75,0.5));
   printf("%d\n",is_inside_circle(0.8,1));*/
}