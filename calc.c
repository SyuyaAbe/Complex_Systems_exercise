#include <stdio.h> 
#include <stdlib.h>

int main(){
	FILE *output;
	output = fopen("result.dat", "w");

	double x1=0.0, x2=0.0, r=3.8;
	//scanf("%lf", &r);

	for(int i=0;i<1000;i++){
		x1 = x2;
		for(int j=1;j<=200;j++){
			x1 = r*(1-x1)*x1;
			if(j==200) fprintf(output, "%lf %lf\n", i*0.001, x1);
		}
		x2 += 0.001;
	}

	fclose(output);
	return 0;
}