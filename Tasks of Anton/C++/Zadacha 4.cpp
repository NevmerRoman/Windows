/*
Задание №4
В интовом векторе удалить все элементы n
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

vector<int> V;

void input() {
	int i, j;
	cout << "Enter the size of the vector: \n";
	cin >> i;
	cout << "Enter the elements of the vector: \n";
	while (i){
		cin >> j;
		V.push_back(j);
		i--;
	}
}

void delet() {
	cout << "Enter the number to be deleted: \n";
	int n;
	int flag = 0;
	cin >> n;
	for (int i = 0; i < V.size(); i++) {
		if (V[i] == n) {
			auto iter = V.cbegin();
			V.erase(iter + i);
			i--;
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "There is no such element.\n";
	}
}

void output() {
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
}

int main(){
	input();
	delet();
	output();
	system("pause");
    return 0;
}