#include <iostream>
using namespace std;

int main()
{

	int firstcash = 50;
	int targetcash = 250;
	int success = 0; 
	int totalBets = 0;
	int trials ;

	cout << "�ʱ� �ݾ� $50" << endl;
	cout << "��ǥ �ݾ� $250" << endl;
	cin >> trials;
	cout << "���� ";
	cin >> success;
	cout << "�� �¸�";

	for (int i = 0; i < trials; i++) {
		int cash = firstcash;
		int bets = 0;

		while (cash > 0 && cash < targetcash) {
			bets++;
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else cash--;
		}
		if (cash >= targetcash)success++;
		totalBets += bets;
	}

	cout << "�̱� Ȯ��=" << (double)success / trials << endl;
	cout << "��� ���� Ƚ�� =" << (double)totalBets / trials << endl;

	return 0;
}