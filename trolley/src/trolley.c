/* File: trolley.c */
#include <stdio.h>

int main (void) {

    long long  cl, cr;

    while(1) {

        printf("Please enter the cost of going left: ");

        if (scanf("%lld", &cl) == EOF) {
            printf("terminating.");
            return 0;
        }

        printf("Please enter the cost of going right: ");
        int result_right = scanf("%lld", &cr);

        if (result_right != 1) {
            printf("No right cost provided.");
            return 1;
        } 

        if(cl <= cr)
            printf("Go left.\n");
        else
            printf("Go right.\n");
    }

    return 0;
}
