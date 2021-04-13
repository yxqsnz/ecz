#include "includes.h";
#include "types_definitions.h";

class Menu {
public:
	void addOption(String option);
	
	Char show(String question);


private:
	std::vector<String> options;
};