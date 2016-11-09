#include <stdio.h>
#include <stdlib.h>

long long int getFib(int num);

int main(void){

    printf("Fib of 4 is: %lli\n", getFib(35));

    return 0;
}

long long int getFib(int num){

    int f1 = 0, f2 = 1, even_sum = 0, next, i;

    for(i=0; i<num; i++){
        //if the current iteration is less than or equal to 1, we manually iterate it
        if(i<=1){
            next = i;
        }
        else{
            next = f1+f2;
            f1 = f2;
            f2 = next;
            //if the current fib term is even, sum it with the others
            if(next % 2 == 0){
                even_sum += next;
                printf("Fib #%d is even: %d\n", i, next);
            }
        }
    }
    return even_sum;
}
