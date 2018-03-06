#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include "Random.h"

using namespace std;

int main()
{
	Search ss;
	int goal, search, jumpa, takJumpa;
	jumpa = 0;
	takJumpa = 0;
	ss.generate();
	goal = 0;
	srand(time(NULL)+1);

	cout << "Press enter to generate 50 random target ......";
	cin.get();
	for (int i = 0; i < SIZE; i++)
	{
		bool found = false;
		search = rand() % 500;
		cout << "Randomly generated target " << i + 1 << " is: \t";
		found = ss.searchEm(search, goal);
		if (found)
		{
			cout << search << "\tfound at index " << goal << endl;
			jumpa++;
		}
		else
		{
			cout << search << "\tis not found" << endl;
			takJumpa++;
		}
	}
	
	cout << "DATA FOUND = " << jumpa << " out of " << SIZE << endl;
	cout << "DATA NOT FOUND = " << takJumpa << " out of " << SIZE << endl;

	cin.get();
	return 0;
}