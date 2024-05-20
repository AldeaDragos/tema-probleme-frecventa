#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void vectorFrecventaCifre(int numar, int f[]) {


	while (numar != 0) {

		int  cifra = numar % 10;

		f[cifra]++;
		numar = numar / 10;
	}

}


void vectorFrecventaCifreVector(int v[], int dim, int f[]) {

	for (int i = 0; i < dim; i++) {


		int aux = v[i];
		while (v[i] != 0) {

			int cifra = v[i] % 10;

			f[cifra]++;
			v[i] = v[i] / 10;
		}
		v[i] = aux;
	}

}

void afisareFrecventaCifreVec(int numar) {


	int f[10]{};

	vectorFrecventaCifre(numar, f);

	for (int i = 1; i < 10; i++) {

		if (f[i] != 0) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}

void vectorFrecventaNumere(int v[], int dim, int f[]) {


	for (int i = 0; i < dim; i++) {
		f[v[i]]++;
	}

}

void afisareFrecventaNumere(int v[], int dim) {


	int f[1000]{};

	vectorFrecventaNumere(v, dim, f);

	for (int i = 0; i < 1000; i++) {

		if (f[i] != 0) {
			cout << i << " apare de " << f[i] << " ori " << endl;
		}
	}
}

int nrPerechi(int A[], int B[], int N, int R) {

	int ct = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (B[j] != 0 && A[i] % B[j] == R) {
				ct++;
			}
		}
	}
	return ct;
}

void perechiSosete(int sosete[], int dim) {

	int f[1000] = {};

	vectorFrecventaNumere(sosete, dim, f);

	int perechi = 0;

	for (int i = 0; i < 1000; i++) {
		perechi += f[i] / 2;
	}

	cout << "Numarul de perechi de sosete este: " << perechi << endl;
}

int sumaCifrelor(int numar) {
	int suma = 0;
	while (numar != 0) {
		suma += numar % 10;
		numar /= 10;
	}
	return suma;
}


void vectorFrecventaSumeCifre(int v[], int dim, int f[]) {
	for (int i = 0; i < dim; i++) {
		int suma = sumaCifrelor(v[i]);
		f[suma]++;
	}
}

void numarPerechiCuAceeasiSumaCifre(int f[]) {
	int perechi = 0;
	for (int i = 0; i <= 100; i++) {
		if (f[i] > 1) {
			perechi += (f[i] * (f[i] - 1)) / 2;
		}
	}
	cout << "Numarul de perechi cu aceeasi suma a cifrelor este: " << perechi << endl;
}

void numarPerechiCuAcelasiNumarDeCifre(int f[]) {
	int perechi = 0;
	for (int i = 0; i <= 100; i++) {
		if (f[i] > 1) {
			perechi += (f[i] * (f[i] - 1));
		}
	}
	cout << "Numarul de perechi cu acellasi numar de cifre: " << perechi << endl;
}

void numarProduseMaiMiciDecatP(int A[], int dim1, int B[], int dim2, int p) {
	int count = 0;

	for (int i = 0; i < dim1; i++) {
		for (int j = 0; j < dim2; j++) {
			if (A[i] * B[j] < p) {
				count++;
			}
		}
	}

	cout << "Numarul de produse mai mici decat " << p << " este: " << count << endl;
}

void numarPerechiDivizibile(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			if (i != j && v[j] % v[i] == 0);
			ct++;
		}
	}
	cout << "Numarul de perechi (i, j) cu i diferit de  j pentru care v[i] divide pe v[j] este: " << ct << endl;

}

void numarPerechiDivizbilSumaDif(int A[], int dim) {
	int count = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if ((A[i] + A[j]) % (A[i] - A[j]) == 0) {
				count++;
			}
		}
	}

	cout << "Numarul de perechi (i, j) cu i < j pentru care A[i] + A[j] este divizibil cu A[i] - A[j] este: " << count << endl;
}

bool nrPrim(int numar) {

	if (numar <= 1) {
		return false;
	}

	for (int i = 2; i * i <= numar; i++) {
		if (numar % i == 0) {
			return false;
		}
	}
	return true;
}

void sumaPrime(int A[], int dim) {
	int count = 0;
	int suma = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if ((A[i] + A[j])==suma && nrPrim(suma)) {
				count++;
			}
		}
	}

	cout << "Numarul de perechi de elemente din sir (ai,aj) cu i<j care au suma numar prime este: " << count << endl;
}