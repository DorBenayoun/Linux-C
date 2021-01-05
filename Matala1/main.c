#include <stdio.h>
#include "myMath.h"


float add(float x, float y);
float sub(float x, float y);
double mul(double x, int y);
double div(double x, int y);
double Exponent(int x);
double Power(double x, int y);

int main(){
	double x;
	printf("Enter a real number: ");
	scanf("%lf", &x);
	
	printf("The value of: f(x) = e^x+x^3-2 at the point %lf is: ", x); 
	double a = add(Exponent(x),Power(x,3));
	double b = sub(a,2);
	printf(" %0.4lf \n",b);
	
	printf("The value of: f(x) = 3x+2x^2 at the point %lf is: ", x); 
	double c = add(mul(3,x),mul(2,Power(x,2)));
	printf(" %0.4lf \n",c);
	
	printf("The value of: f(x) = (4x^3)/5-2x at the point %lf is: ", x); 
	double d = div(mul(4,Power(x,3)),sub(5,mul(2,x)));
	printf(" %0.4lf \n",d);
	
	return 0;
	
}




