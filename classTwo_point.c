#include <stdio.h>

int arraySum(int *array, int n);
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);
    int sum = arraySum(array, n);
    printf("sum is : %d\n", sum);
    return 0;
}

int arraySum(int *array, int n){
    int sum  = 0;
    for(int i = 0; i < n; i++){
        sum += *array++;
    }
    return sum;
}
