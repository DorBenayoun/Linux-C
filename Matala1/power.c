#include <stdio.h>

double Exponent(int x){

	double res=1, e = 2.718281;

	printf("Enter exponent: ");
	scanf("%d", &x);
	
	if(x==0){
		printf("%lf^%d = %lf \n", e, x, res);
		return res;
	}
	
	for(int i=1; i<=x ;i++){
		res *= e;
	}
	
	printf("%lf^%d = %lf \n", e, x, res);
	return res;
}


double Power(double x, int y){

	double res=1;
	
	printf("Enter base: ");
	scanf("%lf", &x);
	printf("Enter exponent: ");
	scanf("%d", &y);
	
	if(y==0){
		printf("%lf^%d = %lf \n", x, y, res);
		return res;
	}

	for(int i=1; i<=y; i++){
		res*=x;
	}

	printf("%lf^%d = %lf \n", x, y, res);
	return res;
}

double Exponent(int x);
double Power(double x, int y);

void main(){
	int x,y;
	double z;
	Exponent(x);
	Power(z,y);

}









