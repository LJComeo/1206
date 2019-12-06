#include <iostream>
using namespace std;

int main()
{
	double x, y, z;
	while (cin >> x >> y >> z)
	{
		if ((x + y) > z && (z + y) > x && (x + z) > y)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}