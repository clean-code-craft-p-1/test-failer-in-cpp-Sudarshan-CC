#include <iostream>
#include <string>
#include "misaligned.h"



int Misaligned::findPair(int majorCol, int minorCol)
{
	return majorCol * 5 + minorCol;
}

int Misaligned::printColorMap()
{
	int i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			std::cout << findPair(i, j) << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
		}
	}
	return i * j;
}


