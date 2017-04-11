#ifndef IoT_H_INCLUDED
#define IoT_H_INCLUDED

class IoT
{
private:
	Vector<Sensor> sensors;
	Vector<Actuator> actuators;
	Agent agent;
	Memory memory;
	Ressource ressource;
	Controler controler;
public:
	IoT();
	~IoT();
	
};

#endif
