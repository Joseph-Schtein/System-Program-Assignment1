#include <stdio.h>
#include "myMath.h"


double fuc1(double x){
  	int a = mul(x,1);
  	a = div(a,1);
  	double b = Exp(a);
	double c = Pow(x,3);
	float d = add((float)b,(float)c);
	float e = sub((float)d,2); 
	double output = e;
	return output;
}

double fuc2(double x){
	double a = mul(x, 3);
	double b = Pow(x, 2);
	double c = mul(b,2);
	float d = add((float)a,(float)c);
	double output = d;
	return output;
}


double fuc3(double x){
	double a = Pow(x,3);
	double b = mul(a,4);
	double c = div(b,5);
	double d = mul(x,2);
	float  e = sub((float)c,(float)d);
	double output = e;
	return output;
}


int main(){
	double x = 0;	
	printf("enter a number:\n");
	scanf("%lf", &x);
	int integerX = mul(x,1);
  	integerX = div(integerX,1);


	double a = fuc1(x);
	printf("e^%d + %0.4lf^3 - 2 = %0.4f\n",integerX,x,a);
	

	double b = fuc2(x);
	printf("3*%0.4lf + 2*%0.4lf^2 = %0.4f\n", x,x,b);

	double c = fuc3(x);
	printf("(4*%0.4lf^3)/5 - 2*%0.4lf = %0.4f\n", x,x,c);

	return 0;
}

