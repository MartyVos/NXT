#ifndef SENSOR_H
#define SENSOR_H

#include "IR.h"
#include "RGB.h"
#include "ultrasonic.h"


//TODO: Doxygen generation

class Sensor
{
	
private:
	IR ir;
	RGB rgb;
	Ultrasonic ultrasonic;
	
// TODO: Update the header file
public:
	Sensor();
	Sensor(const unsigned int PORT_IR, const unsigned int PORT_RGB, const unsigned int PORT_US );
	~Sensor();
	bool object_near();
	int get_distance_object();
	bool both_black();
	bool both_white();
};

#endif // SENSOR_H
