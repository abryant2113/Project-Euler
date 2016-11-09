#include <stdio.h>
#include <stdlib.h>

void getMultiples();

/*gets all of the multiples of 3 and 5 below 1000 and sums them.*/

int main(void){


    getMultiples();

    return 0;
}


void getMultiples(){

    int i, sum = 0;

    for(i=0; i<1000; i++){
        if(i % 3 == 0 || i % 5 == 0) sum += i;
    }
    //prints out the answer
    printf("The sum of all of the multiples of 3 and 5 from 1 to 1000 is: %d\n", sum);
}
