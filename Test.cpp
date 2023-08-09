#include "Test.h"
#include <assert.h>
#include "weatherreport.h"
#include "misaligned.h"
#include"Tshirt.h"
#include <iostream>


void TestTshirts::testforTshirtSizes()
{
	assert(Tshirt::size(37) == 'S');
	assert(Tshirt::size(38) == 'S');
	assert(Tshirt::size(40) == 'M');
	assert(Tshirt::size(42) == 'M');
	assert(Tshirt::size(43) == 'L');
	std::cout << "All is well (maybe!)\n";
}

void TestWeatherSpace::testForWeatherReport()
{
	WeatherSpace::TestRainy();
	WeatherSpace::TestHighPrecipitation();
	std::cout << "All is well (maybe)\n";
}


void TestMisaligned::testForMisalignment()
{
	int result = Misaligned::printColorMap();
	assert(Misaligned::findPair(0, 0) == 1);
	assert(Misaligned::findPair(5, 5) == 25);
	assert(result == 25);
	std::cout << "All is well (maybe!)\n";
}