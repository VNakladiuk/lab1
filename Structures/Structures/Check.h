#pragma once
struct Cheque
{
	int grn;
	short int kop;
};

void addMoney(Cheque& result, const Cheque& m);
void multiplyMoney(Cheque& result, const Cheque& m, int n);
void to10(Cheque& m);
void printSum(Cheque& m);