
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale>
#include "Check.h"
using namespace ::std;


int main() {
	setlocale(LC_CTYPE, "ukr");
	std::ifstream inputFile("input.txt");
	if (!inputFile) {
		std::cerr << "Помилка відкриття файлу!" << std::endl;
		return 1;
	}
	int grnin;
	short int kopin;
	int quantity;
	struct Cheque total = { 0,0 };
	while (inputFile >> grnin >> kopin >> quantity) {
		struct Cheque now = { grnin,kopin };
		multiplyMoney(now, now, quantity);
		addMoney(total, now);
	}

	inputFile.close();

	printSum(total);

	return 0;
}

