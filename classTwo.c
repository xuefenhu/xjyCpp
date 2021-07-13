#include <stdio.h>

int addArray(int array[], int n);
void main(){
    int num[10]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(num)/sizeof(num[0]);
    int sum = addArray(num,n);
    printf("sum is : %d\n",sum);
}

int addArray(int array[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
    }
    return sum;
}
