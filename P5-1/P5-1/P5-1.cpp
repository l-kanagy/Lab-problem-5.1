#include <iostream> 
using namespace std;
int main()
{
	int sol1 = 0, sol2 = 0;
	for (int i = 0; i <= 100; i = i + 2) {
		if (i <= 100)
			sol1 = sol1 + i;
	}
	cout << "sum 1 is: " << sol1 << endl;

	for (int y = 1; y <= 100; y++) {
		sol2 = (y * y) + sol2;
	}

	cout << "sum 2 is: " << sol2 << endl;
	return 0;
}
