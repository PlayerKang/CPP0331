#include <iostream>

using namespace std;

int main()
{
	int Map[10][10] = { 1 };
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				cout << Map[Y][X];
			}
			cout << endl;
		}
	return 0;
}