/*
Задание №3
Дан string и вводится подстрока, найти первое вхождение подстроки в строку
*/
#include "stdafx.h" 
#include <iostream> 
#include <conio.h>
#include <string>;

using std::cin;
using std::cout;
using std::string;
using std::getline;

string str1;
string str2;

void input() {
	cout << "Enter the string 1: \n";
	getline(cin, str1);
	cout << "Enter the string 2: \n";
	getline(cin, str2);
}

int search(const string st1, const string st2) {
	if (st2.length() > st1.length()) {
		cout << "String 2 greater then string 1. \n";
		return -1;
	}
	int flag;
	for (int i = 0; i <= (st1.size() - st2.size()); i++) {
		flag = 0;
		while ((st1[i+flag] == st2[flag]) && (flag < st2.length())) {
			flag++;
		}
		if (flag == st2.length()) {
			return i;
		}
	}
	cout << "String 2 was not found in string 1 \n";
	return -1;
}

int main() {
	input();
	cout << str1.find(str2) << "\n";
	cout << search(str1, str2) << "\n";
	system("pause");
	return 0;
}