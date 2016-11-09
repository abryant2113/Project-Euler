#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void primeFactor(long long int num);
int isPrime(int num);

int main(void){

    primeFactor(600851475143);

    return 0;
}


/*void primeFactor(long long int num){

    //interesting way of finding factors..
    long long int check = num;
    printf("Check is: %lli\n", check);
    while(check != 0){
        //if num is divisible by check, check is a factor.
        if(num % check == 0){
            printf("%lli is a factor of %lli\n", check, num);
        }
        printf("%lli\n", check);
        check--;
    }
}*/

void primeFactor(long long int num){

    int sqRoot = sqrt(num);

    int check = sqRoot;

    while(check != 0){
        if(num % check == 0){
           printf("%d is a factor of sqRoot.\n", check);
           if(isPrime(check)) printf("%d is PRIME! \n", check);
        }
        check--;
    }
}

int isPrime(int num){

    int check = num;
    int count = 0;
    while(check > 0){
        //checks to see if it's prime
        if(num % check == 0){
            count++;
        }
        check--;
    }
    if(count == 2) return 1;
    return 0;
}
