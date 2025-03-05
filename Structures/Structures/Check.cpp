#include <iostream>
#include "Check.h"
using namespace ::std;



void addMoney(Cheque& result, const Cheque& m) {
	result.grn += m.grn;
	result.kop += m.kop;
	if (result.kop >= 100) {
		result.grn += result.kop / 100;
		result.kop %= 100;
	}
}
void multiplyMoney(Cheque& result, const Cheque& m, int n) {
	int kops = (m.grn * 100 + m.kop) * n;
	result.grn = kops / 100;
	result.kop = kops % 100;
}
void to10(Cheque& m) {
	if (m.kop % 10 >= 5) {
		m.kop = (m.kop / 10 + 1) * 10;
		if (m.kop == 100) {
			m.grn++;
			m.kop = 0;
		}
	}
	else {
		m.kop = (m.kop / 10) * 10;
	}
}
void printSum(Cheque& m) {
	cout << "Загальна сума: " << m.grn << " гривень " << m.kop << " копiйок" << endl;
	to10(m);
	cout << "Сума пiсля заокруглення: " << m.grn << " гривень " << m.kop << " копiйок" << endl;
}