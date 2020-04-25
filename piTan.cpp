#include <cmath>
#include "piTan.h"
/*
This function approximates pi using the equation:
pi/4 = 4arctan(1/5) - arctan(1/239)
*/
double piTan(){
	return 4*(4*atan(0.2) - atan(1.0/239));
}