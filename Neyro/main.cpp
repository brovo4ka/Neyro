#include <iostream>
#include "Neyro.h"

int main(int argc, char * argv[]) {
	Neyron n = Neyron(1.0 ,3);
	std::cout << n.getVal() << std::endl;
	std::cout << n.getActivatedVal() << std::endl;
	std::cout << n.getDerivatedVal() << std::endl;

	std::cin.get();

	return 0;
}