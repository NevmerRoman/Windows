/*
Задание №1
Вывести кол-во 1 в битовом представлении числа 2 способами:
1)С помощью битового сдвига
2)С помощью таблицы
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using std::cin;
using std::cout;

typedef unsigned char byte;

int KolBit(const byte b) {
	int k = 0;
	for (int i = 0; i < 8; i++) {
		k = k + ((b >> i) & 1);
		cout << ((b >> 7 - i) & 1);
	}
	cout << "\n";
	return k;
}

int stepen(int s) {
	int r = 1;
	for (int i = 0; i < s; i++) {
		r = r * 2;
	}
	return r;
}

int tab[256] = { 0 };

void table() {
	for (int j = 0; j < 8; j++) {
		for (int i = stepen(j); i < stepen(j + 1); i++) {
			tab[i] = tab[i - stepen(j)] + 1;
		}
	}
}

int main(){
	int b;
	table();
	cin >> b;
	cout << KolBit(b) << "\n" << tab[b] << "\n";
	system("pause");
    return 0;
}