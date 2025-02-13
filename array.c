#include<stdio.h>
int main(){
    int val = 1;
    int numbers [5];
    for (int i = 0 ; i<5; i++){
        scanf("%d",&numbers[i]);
    }
    int is_equal(int val , numbers[i]){
        if (val == numbers[i]){
            return 1;
        }
    }

/*    for (int i = 0 ; i<5 ; i++){
        if (numbers[i] == val){
            numbers[i] = numbers[i+1];
        }*/
    for (int i = 0 ; i<5 ; i++){
        printf("%d",numbers[i]);
    }
    }