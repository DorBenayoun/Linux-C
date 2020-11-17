#include <stdio.h>
#include "myMath.h"

float add(float x, float y){
	
	float sum = 0;
	
	/*printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);*/
	
	sum = x+y;

	/*printf("%f+%f = %f \n",x ,y ,sum);*/
	return sum;
}


float sub(float x, float y){
	float sum = 0;

	/*printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);*/

	sum = x-y;

	/*printf("%f-%f = %f \n", x, y, sum);*/
	return sum;
}


double mul(double x, int y){
	double sum = 0;
	
	/*printf("Enter x: ");
	scanf("%lf", &x);
	printf("Enter y: ");
	scanf("%d", &y);*/
	
	sum = x*y;
	/*printf("%lf*%d = %lf \n",x ,y ,sum);*/
	return sum;
}


double div(double x, int y){
	double sum = 0;
	
	/*printf("Enter x: ");
	scanf("%lf", &x);
	printf("Enter y: ");
	scanf("%d", &y);*/
		
	sum = x/y;	
	/*printf("%lf/%d = %lf \n",x ,y ,sum);*/		
	return sum;
}



double Exponent(int x){

	double res=1, e = 2.718281;

	/*printf("Enter exponent: ");
	scanf("%d", &x);*/
	
	if(x==0){
		/*printf("%lf^%d = %lf \n", e, x, res);*/
		return res;
	}
	
	for(int i=1; i<=x ;i++){
		res *= e;
	}
	
	/*printf("%lf^%d = %lf \n", e, x, res);*/
	return res;
}


double Power(double x, int y){

	double res=1;
	
	/*printf("Enter base: ");
	scanf("%lf", &x);
	printf("Enter exponent: ");
	scanf("%d", &y);*/
	
	if(y==0){
		/*printf("%lf^%d = %lf \n", x, y, res);*/
		return res;
	}
	
	for(int i=1; i<=y; i++){
		res*=x;
	}

	/*printf("%lf^%d = %lf \n", x, y, res);*/
	return res;
}







