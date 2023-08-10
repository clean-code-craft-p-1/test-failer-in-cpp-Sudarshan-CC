#include "Test.h"
#include <assert.h>
#include "weatherreport.h"
#include "misaligned.h"
#include"Tshirt.h"
#include <iostream>

using namespace WeatherSpace;

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
	TestRainy();
	TestHighPrecipitation();
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


void TestRainy()
{
	SensorStub sensor;
	std::string report = Report(sensor);
	std::cout << report << std::endl;
	assert(report.find("rain") != std::string::npos);
}

void TestHighPrecipitation()
{
	// This instance of stub needs to be different-
	// to give high precipitation (>60) and low wind-speed (<50)
	SensorStub sensor;

	// strengthen the assert to expose the bug
	// (function returns Sunny day, it should predict rain)
	std::string report = Report(sensor);
	assert(report.length() > 0);
	assert(report == "Alert, Stormy with heavy rain");

	HighPrecipitationStub possiblePrecipitation;
	report = Report(possiblePrecipitation);
	assert(report == "Alert, Stormy with heavy rain");
}


