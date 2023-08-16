#include <iostream>
#include "weatherreport.h"

using namespace std;

namespace WeatherSpace
{
	int SensorStub::Humidity() const
	{
		return 72;
	}
	int SensorStub::Precipitation() const
	{
		return 70;
	}
	double SensorStub::TemperatureInC() const
	{
		return 26;
	}
	int SensorStub::WindSpeedKMPH() const
	{
		return 52;
	}

	int HighPrecipitationStub::Precipitation() const
	{
		//high precipitation(> 60)
		return 61;
	}

	int HighPrecipitationStub::WindSpeedKMPH() const
	{
		//low wind - speed(< 50)
		return 49;
	}

	std::string Report(const IWeatherSensor& sensor)
	{
		int precipitation = sensor.Precipitation();
		// precipitation < 20 is a sunny day
		std::string report = "Sunny Day";

		if (sensor.TemperatureInC() > 25)
		{
			if (precipitation >= 20 && precipitation < 60)
				report = "Partly Cloudy";
			else if (sensor.WindSpeedKMPH() > 50)
				report = "Alert, Stormy with heavy rain";
		}
		return report;
	}

}