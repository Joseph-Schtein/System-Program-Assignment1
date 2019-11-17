#include <stdio.h>
#include "myMath.h"

float add(float x, float y){
	float output;	
	output = x + y;
	return output;
}

float sub(float x, float y){
	float output;	
	output = x - y;
	return output;
}

double mul(double x, int y){
	double output;	
	output = x*y;
	return output;
}

double div(double x, int y){
	double output;	
	output = x/y;
	return output;
}
