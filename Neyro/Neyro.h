#pragma once
#define TAHN 1
#define RELU 2
#define SIGM 3

#include <iostream>
#include <math.h>

class Neyron {
public:
	Neyron(double val);
	Neyron(double val, int type);
	void setVal(double val);
	void activate(); 
	void derivate(); 
	double getVal() { return this->val; }
	double getActivatedVal() { return this->activatedVal; }
	double getDerivatedVal() { return this->derivatedVal; }

private:
	double val;
	double activatedVal;
	double derivatedVal;
	int type = 3;
};