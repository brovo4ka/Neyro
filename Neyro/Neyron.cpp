#include "Neyro.h"
Neyron::Neyron(double val) {
	this->setVal(val);
}

Neyron::Neyron(double val, int type) {
	this->type = type;
	this->setVal(val);
}

void Neyron::setVal(double val)
{
	this->val = val;
	this->activate();
	this->derivate();
}

void Neyron::activate() {
	if (type == TAHN) this->activatedVal = tanh(this->val);
	else if (type == RELU)
	{
		this->activatedVal = 0;
		if (this->val > 0) {
			this->activatedVal = this->val;
		}
	}
		else if (type == SIGM)
			this->activatedVal = 1 / (1 + exp(-this->val));
		else this->activatedVal = 1 / (1 - exp(-this->val));
}

void Neyron::derivate() {
	if (type == TAHN) this->derivatedVal = 1- this->activatedVal*this->activatedVal;
	else if (type == RELU)
	{
		this->derivatedVal = 0;
		if (this->val > 0) {
			this->derivatedVal = 1;
		}
	}
	else if (type == SIGM)
		this->derivatedVal = this->activatedVal*(1-this->activatedVal);
	else 	this->derivatedVal = this->activatedVal*(1 + this->activatedVal);
}