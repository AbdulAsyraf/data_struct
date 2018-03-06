#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>

const int SIZE = 50;

class Search
{
public:
	Search();
	~Search();
	int ele[SIZE];
	bool searchEm(int, int&);
	void generate();
};

#endif