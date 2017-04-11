#ifndef SENSOR_H_INCLUDED
#define SENSOR_H_INCLUDED

class Sensor
{
private:
	std::string type;
	std::string resolution;
	int sensitivity; // Remember it not the correct types for this attribute
	int linearity;
public:
	Sensor();
	~Sensor();
	
};

#endif