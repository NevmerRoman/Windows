/*
Задание №2
Дан string удалить из него все символы, которые идут подряд и повторяютя (aaabba -> aba)
*/
#include "stdafx.h" 
#include <iostream> 
#include <conio.h>
#include <string>;

using std::cin;
using std::cout;
using std::string;
using std::getline;

string str;

void input() {
	cout << "Enter the string: \n";
	getline(cin, str);
}

void delet() {
	auto iter = str.cbegin();
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == str[i + 1]) {
			str.erase(iter + i);
			i--;
		}
	}
}

void output(){
	cout << str << "\n";
}

int main(){
	input();
	delet();
	output();
	system("pause");
    return 0;
}