#include "piBuffon.h"
#include <cmath>
#include <random>
#include <iostream>
/*
This function will approximate and return pi using buffon's needle problem.
It will iterate until accurate to 5 digits after the decimal, and print the
number of iterations required.
*/
double piBuffon(){
	double pi=0;
	int nS=0; // number of successful needle drops
	int n=0; // total needles dropped
	bool isAccurate = false;
	std::default_random_engine generator;
	std::uniform_real_distribution<double> distribution(0.0,1.0);
	std::uniform_real_distribution<double> distributionRad(0.0,3.14159/2); // range for theta
	while(!isAccurate){
		++n;
		double d = distribution(generator);
		double theta = distributionRad(generator);
		if(d<=0.5*sin(theta)){
			++nS;
		}
		if(nS>0){
			pi=100000.0*n/nS;
		}
		if(int(pi) == 314159){
			isAccurate=true;
		}
	}
	std::cout << "Buffon's needle is accurate after " << n << " iterations." << std::endl;
	return 1.0*int(pi)/100000;
}