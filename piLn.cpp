#include <cmath>
#include "piLn.h"
/*
Function to evaluate pi = ln(640320^3 + 744)/(163^0.5)
*/
double piLn(){
	return log(pow(640320,3)+744)/sqrt(163);
}