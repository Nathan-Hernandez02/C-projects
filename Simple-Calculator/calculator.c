#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


void which(float num, char op, float second, float * ret);

// create a calculator that takes in user input and outputs a result
int main(int argc, char * argv[]) {
    float num_one;
    float num_two;
    char op;
    float result;


    printf("What is the first number?: ");
    scanf("%f", &num_one);

    printf("What is the operation you want to do?: ");
    scanf(" %c", &op);

    printf("What is the second number?: ");
    scanf("%f", &num_two);

    // since which is a void method a pointer is needed.
    // the & sends the address to the method.
    which(num_one, op, num_two, &result);

    printf("This is the result: %f\n", result);

    return 0;
}

// checks which operation the user wants to do.
void which(float num, char op, float second, float * ret) {

    float result;
    if(op == '+') {
        result = num + second;
    }

    if(op == '-') {
        result = num - second;
    }

    if(op == '/') {
        result = num / second;
    }

    if(op == '*' || op == 'x' || op == 'X') {
        result = num * second;
    }
    
    // deferences the ret so that result is now stored.
    *ret = result;
}
