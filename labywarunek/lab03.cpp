#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> tab = {3, 4, 5};
	vector<int> tab2 = {6, 7};
	tab[2] = 10;
	cout << tab[2] << endl;

	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << endl;
	}
}


