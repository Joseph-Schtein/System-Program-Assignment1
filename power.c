#include <stdio.h>
#include "myMath.h"


double Exp(int x){
	double output = 1;
	
	if(x==0){
		return 1;	
	}
	
	if(x==-1){
		return 1/eular;
	}

	while(x>0){
		output*=eular;
		x--;
	}

	while(x<0){
		output*=eular;
		x++;
		if(x+1==0){
			output*=eular;
			x++;
			output = 1/output;	
		}
	}

	return output;
}

double Pow(double x, int y){
	double output = 1;
	
	if(x==0){
		return 0;	
	}

	else if(y==0){
		return 1;
	}

	else if(y==-1){
		return 1/x;	
	}	
	
	while(y>0){
		output*=x;
		y--;
	}

	while(y<0){
		output*=x;
		y++;
		if(y+1==0){
			output*=x;
			y++;
			output = 1/output;	
		}
	}	
	return output;
}
