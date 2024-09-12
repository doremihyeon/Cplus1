#include <iostream>
using namespace std;

int main()
{	
	int P;
	int i = 2;
	int a = 0;
	int b = 1;

	cout << "몇 항까지 구할까요: ";
	cin >> P;

	cout << a << " " << b << " ";

	while (i < P) {
		int next = a + b;
		cout<< next << " ";
		a = b;
		b = next;
		i++;
		
	}
	return 0;
}