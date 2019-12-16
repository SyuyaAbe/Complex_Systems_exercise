#include<stdio.h>
#define N 100

double next(double x, double r){ 
	return r*(1-x)*x;
}

int main(void){
	FILE *output;
	output = fopen("result.dat", "w");

	int n;
	double r;
	double xn =0.7;
	double xn1;

	scanf("%lf", &r);
	for(n=0; n<=N; n++){
		xn1 = next(xn, r);
		fprintf(output, "%lf %lf\n", xn, xn1);
		fprintf(output, "%lf %lf\n", xn1, xn1);
		xn = xn1;
	}
	fclose(output);
	return 0;
}
