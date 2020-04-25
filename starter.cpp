#include <iostream>
#include "piMC.h"
#include "piTan.h"
#include "piLn.h"
#include "piMadhava.h"
#include "piBuffon.h"
using std::cout;
using std::endl;
using std::cin;

/*
This program is a combination of different methods for 
approximating pi which the user can choose between via a menu.
*/

int main(){
	cout << "#Select your method for approximating pi#" << endl;
	cout << "#1 = Monte Carlo                        #" << endl;
	cout << "#2 = Arctan equation                    #" << endl;
	cout << "#3 = Natural log equation               #" << endl;
	cout << "#4 = Madhava equation                   #" << endl;
	cout << "#5 = Buffon's needle                    #" << endl;
	int choice=0;
	while(choice<1 || choice>5){ // will ignore integers not in [1,5]  while !(choice>=1 && choice <=5)
		cin >> choice;
	}
	double pi=0;
	if(choice==1){
		pi = piMC();
	}else if(choice==2){
		pi = piTan();
	}else if(choice==3){
		pi = piLn();
	}else if(choice==4){
		cout << "How many iterations would you like to perform?" << endl;
		int n;
		cin >> n;
		pi = piMadhava(n);
	}else if(choice==5){
		pi = piBuffon();
	}
	cout << "Pi is " << pi << endl;
	return 0;
}