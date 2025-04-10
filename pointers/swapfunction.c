#include <stdio.h>
    void swap(int *a ,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n1 , n2;
    scanf("%d" , &n1);
    scanf("%d" , &n2);
    printf("%d , %d" n1,n2);
    swap(n1,n2);
    printf("%d , %d" n1,n2);
}