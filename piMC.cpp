#include <cmath>
#include <random>
#include <iostream>
#include "piMC.h"
using std::cout;
using std::endl;
/*
The following function will generate a table in the shell with approximations of pi
using the monte carlo method with different amounts of points/iterations.
The monte carlo method for pi involves drawing points randomly on the square between (0,0) and (1,1)
and keeping track of the number of points drawn inside a circle of radius 0.5 and the total
number of points drawn. The final value of pi=4*(innerPoints/totalPoints)

I found an excellent description of this method at https://academo.org/demos/estimating-pi-monte-carlo/

The table will display pi values for 10, 100, 1,000, 10,000, 100,000, and 10,000,000 points.
The function piMC() will return the final approximation of pi.
*/
double piMC(){
	std::default_random_engine generator;
	std::uniform_real_distribution<double> distribution(0.0,1.0); 
	int nI=0; //the number of points inside the circle
	double pi; // will be recalculated at every milestone of points
	cout << "--------------------" << endl;
	cout << "- Iterations --- Pi          -" << endl;
	for(int nT=1;nT<=10000000;++nT){ //nT is the total number of points
		double x = distribution(generator);
		double y = distribution(generator);
		if(((x-0.5)*(x-0.5))+((y-0.5)*(y-0.5))<=0.25){ //if point (x,y) is inside circle of radius 0.5
			++nI;
		}
		if(nT==10||nT==100||nT==1000||nT==10000||nT==100000||nT==10000000){
			pi=4.0*nI/nT;
			cout << "- " << nT << " --- " << pi << endl;
		}
	}
	cout << "--------------------" << endl;
	return pi;
}