#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "Random.h"

using namespace std;

Search::Search() {}
Search::~Search() {}

void Search::generate()
{
	srand(time(NULL));
	int j =0;
	cout << "50 randomly generated Data\n";
	for (int i = 0; i < SIZE; i++)
	{
		ele[i] = rand() % 500;
		cout << ele[i] << " ";
		if (j == 9)
		{
			cout << endl;
			j = 0;
		}
		else
			j++;
	}
	cout << endl;

}

bool Search::searchEm(int query, int& goal)
{
	int i = 0;
	bool ans = false;
	while(i < 50)
	{
		if (ele[i] != query)
		{
			i++;
		}
		else
		{			
			ans = true;
			goal = i;
			break;
		}
	}
	return ans;
}
