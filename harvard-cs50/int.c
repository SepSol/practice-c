#include <stdio.h>
#include <cs50.h>

int main (void) {
    int answer = get_int("Type in a number: \n");
    printf("Your number was: %i", answer);
}