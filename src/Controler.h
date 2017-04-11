#ifndef CONTROLER_H_INCLUDED
#define CONTROLER_H_INCLUDED

class Controler
{
private:
	Vector<Control> controls;
	Vector<Command> commands;
	Vector<Flow> flows;

public:
	Controler();
	~Controler();
	
};

#endif