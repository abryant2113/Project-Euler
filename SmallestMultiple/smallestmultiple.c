//Austin Bryant
//5/9/2016
//Project Euler - #5

#include <stdio.h>
#include <stdlib.h>

int getDiv();
int smallestMultiple(int);

int main(void){

    int a = getDiv();

    printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: %d\n", a);

}

int getDiv(){

    int i = 1;
    //while smallest multiple returns false, we continue checking
    while(!smallestMultiple(i)){
        i++;
    }
    return i;
}

int smallestMultiple(int i){

    int j = 1;

    for(j = 1; j < 21; j++){
        //if not divisible, return false
        if(i % j != 0) return 0;
    }
    //return true, otherwise
    return 1;
}
