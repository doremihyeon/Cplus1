#include <iostream>
using namespace std;

int main()
{
	int list[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	float c;
	for (int i : list) {
		i++;
	}
	for (int i : list) {
		c = (i - 32.0) * 5.0 / 9.0;
		cout << i << "	" << c << endl;
	}
}