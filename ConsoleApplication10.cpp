#include <iostream>
using namespace std;
int main()
{
	int space = 2, n;
	cout << "Enter number of rows:";
	cin >> n;
	int k = 2 * n - 2;

	for (int row = 1; row <= n; row++)
	{
		for (int j = 1; j <= k; j++)
		{
			cout << " ";
		}
		k = k - 2;
		for (int a = 1; a <= row; a++)
		{
			cout << "* ";
		}
		cout << endl;
	}



}