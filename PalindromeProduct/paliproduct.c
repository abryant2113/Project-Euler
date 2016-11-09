//Austin Bryant
//5/9/2016
//Project Euler - #4

#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num);
int testNums();

int main(void){

    int a = testNums();

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", a);

    return 0;
}

int isPalindrome(int num){

    char integer[10];
    int i = 0, j =0, k;

    while(num != 0){
        integer[i] = num%10;
        i++;
        num = num/10;
    }

    //prepares the decrement variable
    k = i-1;

    for(j=0; j<i; j++){
        //if they don't match, break out of the function
        if(integer[j] != integer[k]) return 0;
        k--;
    }
    return 1;
}

int testNums(){

    int i, j, max = 0, product;

    for(i=100; i<1000; i++){
        for(j=100; j<1000; j++){
            product = i*j;
            //checks to see if the current answer is the largest palindrome
            if(isPalindrome(product) && product > max) max = product;
        }
    }
    return max;
}
