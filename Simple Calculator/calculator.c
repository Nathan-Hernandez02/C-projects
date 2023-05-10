#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// create a calculator that takes in user input and outputs a result
int main(int argc, char * argv[]) {
    float num_one;
    float num_two;
    char op;

    scanf("What is the first number?: %f", &num_one);
    scanf("What is the operation you want to do?: %f", num_two);
    scanf("What is the second number?: %f", &num_two);

    which(num_one, op, num_two);
}

int which(float num, char op, float second) {

    float result;
    if(op == '+') {
        
    }

    if(op == '-') {

    }

    if(op == '/') {

    }

    if(op == '*' || op == 'x' || op == 'X') {

    }

    return result;
}
