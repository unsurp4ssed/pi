#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double calcPI(int n) {
	if (n == 1) return 4;
	return 4*pow(-1,n+1)*(1/(double)(2*n-1))+calcPI(n-1);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		exit:
        printf("This program calculates PI in [n] iterations.\nn has to be not more than 1.000.000\n");
        return 0;
    }
    if (strcmp(argv[1], "--help") == 0) {goto exit;}

    double pi = 0;
    int n = atoi(argv[1]);
    printf("%d", n);
	printf("calcuating pi...\n");
	pi = calcPI(n);
	printf("...done.\n");
	printf("PI is approx.:%llf\n", pi);
	return 0;
}