#pragma once
#include "functii.h"
using namespace std;

void ex1() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	diagonalaPrincipala(x, m, n);
}
void ex2() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	diagonalaSecundara(x, m, n);
}
void ex3() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareDeasupraDiagonaleiPrincipale(x, m, n);
}
void ex4() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareDedesuptulDiagonaleiPrinicpale(x, m, n);
}
void ex5() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareDeasupraDiagonaleiSecundare(x, m, n);
}
void ex6() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareDedesuptulDiagonaleiSecundeare(x, m, n);
}
void ex7() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareTriunghiIsoscelNord(x, m, n);
}
void ex8() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareTriunghiIsoscelSud(x, m, n);
}
void ex9() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareTriunghiIsoscelEst(x, m, n);
}
void ex10() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	afisareTriunghiIsoscelVest(x, m, n);
}