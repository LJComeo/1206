#include <iostream>
using namespace std;


class Solution {
public:
	int Add(int num1, int num2)
	{
		if (num2 == 0)
		{
			return num1;
		}
		int tmp = num1 ^ num2;
		int cur = (num1 & num2) << 1;
		return Add(tmp, cur);
	}
};
int main1()
{
	Solution s;
	int tmp = s.Add(10,8);
	cout << tmp << endl;
	return 0;
}