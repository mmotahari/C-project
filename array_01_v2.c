#include <stdio.h>
#include <stdlib.h>
int main(){
    int creatarry(int size){
        int array[size];
        for (int i =0 ; i < size;i++){
            array[i]=rand();
        }
        return array;
    }
}