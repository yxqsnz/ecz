#include "menu.hpp";
#include "console.h";

Function Menu::addOption(String option) {
	Menu::options.push_back(option);
}

Char Menu::show(String question) {
	Integer currentOption = 0;
	for (Variable option In Menu::options) {
		ConsoleOutput << currentOption << ": "<<  option << "\n";
		currentOption++;
	}

	ConsoleOutput << question;
	Char selected = getch__;
	ConsoleOutput << "-> " << selected << "\n";
	Return selected;
}