#include <iostream>
using namespace std;

int main()
{

	int firstcash = 50;
	int targetcash = 250;
	int success = 0; 
	int totalBets = 0;
	int trials ;

	cout << "초기 금액 $50" << endl;
	cout << "목표 금액 $250" << endl;
	cin >> trials;
	cout << "중의 ";
	cin >> success;
	cout << "번 승리";

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

	cout << "이긴 확률=" << (double)success / trials << endl;
	cout << "평균 베팅 횟수 =" << (double)totalBets / trials << endl;

	return 0;
}