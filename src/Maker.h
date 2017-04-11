#ifndef MAKER_H_INCLUDED
#define MAKER_H_INCLUDED

class Maker
{
private:
	std::string _name;
	std::string _description;

public:
	Maker();
	~Maker();
	
	// Getter & Setter
	void setName(std::string);
	std::string getName();

	void setDescription(std::string description);
	std::string getDescription();
};

#endif