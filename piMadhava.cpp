#include <iostream>
#include <cmath>
#include "piMadhava.h"
/*
This function approximates pi using the madhava equation
Parameter n is the length of the series
*/

double piMadhava(int n){
	double pi=0;
	if(n<=0){ // in order to avoid invalid n values
		return 0;
	}
	for(int i=0;i<=n;++i){ // evaluate the series
		pi += pow((-1.0/3),i)/(2*i+1);
	}
	pi *= sqrt(12.0);
	return pi;
}