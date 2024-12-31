#include <stdio.h>
#include <stdlib.h>

void genrateX(int n){
    int x;
    for (int i =0;i<n;i++){
        x=rand() % 100;
    }
}

void genrateY(int n){
    int y;
    for (int i =0;i<n;i++){
        y=rand() % 100;
    }
}

int main(){
    int xs;
    xs = genrateX(5);
    for (int i = 0;i<5;i++){
        printf("%d",xs);
    }
}