#include <iostream>
#include <string>

#include "Maker.h"

using namespace std;

Maker::Maker()
{

}

void Maker::setName(string name)
{
	this->_name = name;
}

string Maker::getName()
{
	return this->_name;
}

void Maker::setDescription(string description)
{
	this->_description = description;
}

string Maker::getDescription()
{
	return this->_description;
}