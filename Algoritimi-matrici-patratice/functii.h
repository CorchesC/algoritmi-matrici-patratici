#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void diagonalaPrincipala(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {
		cout << x[i][i] << " ";
	}
	cout << endl;
}
void diagonalaSecundara(int x[100][100], int m, int n) {
	for (int i = n - 1; i >= 0; i--) {
		cout << x[i][(n-1)-i] << " ";
	}
	cout << endl;
}
void afisareDeasupraDiagonaleiPrincipale(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {//i<j
		for (int c = i + 1; c < n; c++) {
			cout << x[i][c] << " ";
		}
	}
	cout << endl;
}
void afisareDedesuptulDiagonaleiPrinicpale(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {//i>j
		for (int c = 0; c < i; c++) {
			cout << x[i][c] << " ";
		}
	}
	cout << endl;
}
void afisareDeasupraDiagonaleiSecundare(int x[100][100], int m, int n) {
	for (int i = n-1; i >= 0; i--) {
		for (int c = 0; c < ((n - 1) - i); c++) {//i+j<n-1
			cout << x[i][c] << " ";
		}
	}
	cout << endl;
}
void afisareDedesuptulDiagonaleiSecundeare(int x[100][100], int m, int n) {
	for (int i = n - 1; i >= 0; i--) {
		for (int c = ((n - 1) - i)+1; c < n; c++) {//i+j>n-1
			cout << x[i][c] << " ";
		}
	}
}
void afisareTriunghiIsoscelNord(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j < n - 1) {
				cout << x[i][j] << " ";
			}
		}
	}
	cout << endl;
}
void afisareTriunghiIsoscelSud(int x[100][100], int m, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j > n -1) {
				cout << x[i][j] << " ";
			}
		}
	}
	cout << endl;
}
void afisareTriunghiIsoscelEst(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j && i + j > n - 1) {
				cout << x[i][j] << " ";
			}
		}
	}
	cout << endl;
}
void afisareTriunghiIsoscelVest(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i > j && i + j < n - 1) {
				cout << x[i][j] << " ";
			}
		}
	}
	cout << endl;
}