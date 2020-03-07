#include <stdio.h>

int calc(int age);

int main(void) {
    calc(23);
}

int calc(int age) {
    int days = age * 365;
    printf("You are %i days old.\n", days);
}