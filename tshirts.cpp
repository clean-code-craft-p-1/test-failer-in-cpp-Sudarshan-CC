#include <iostream>
#include "Tshirt.h"


char Tshirt::size(int cms)
{
	char sizeName = '\0';
	if (cms < 38) {
		sizeName = 'S';
	}
	else if (cms > 38 && cms < 42) {
		sizeName = 'M';
	}
	else if (cms > 42) {
		sizeName = 'L';
	}
	return sizeName;
}

void TestTshirts::testforTshirtSizes()
{
	assert(TShirt::size(37) == 'S');
	assert(TShirt::size(38) == 'S');
	assert(TShirt::size(40) == 'M');
	assert(TShirt::size(42) == 'M');
	assert(TShirt::size(43) == 'L');
	std::cout << "All is well (maybe!)\n";
}

int main() {

	TestTshirts::testforTshirtSizes();

	std::cout << "All is well (maybe!)\n";
	return 0;
}