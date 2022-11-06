using namespace std;
#include <iostream>
#include "structuri.h"
#pragma once

//todo functie ce afiseaza marca unei masini

void afisareMarca(Masina masini[], int d) {
	for (int i = 0; i < d; i++) {
		cout << masini[i].marca << endl;
	}
}

//todo functie ce returneaza masina cu cel mai mare an

Masina celMaiMareAn(Masina masini[], int d) {
	int anMax = 0, j = 0;;
	for (int i = 0; i < d; i++) {
		if (masini[i].an > anMax) {
			anMax = masini[i].an;
			j = i;
		}
	}
	return masini[j];
}