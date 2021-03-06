#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <map>

#include "component.h"

class Plugboard : public Component {
private:
	int* _config;
	int _size;
	std::map<int, int> _in;
	Plugboard();
	void fillMaps();

public:
	Plugboard(int* config, int& size);
	virtual int map(int input);
	void printMaps();
};

#endif
