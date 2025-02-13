#include <stdio.h>
int main(){
    int target = 61;
    int arry[6] = {16,21,24,24,40,56,63};
    for (int i =0 ; i<6;i++){
        for (int j = i ; j<6;j++){
            if (arry[i]+arry[j] == target){
                printf("indexses is %d and %d\n",i,j);
            }
        }
    }


}