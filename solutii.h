#include "algoritmi.h"

// Se dau n numere naturale . Determinati cele mai mari douan umere cu 3 cifre care nu apar printre numerele date''
void sol1() {

	int date[2000] = { 10 ,994 ,1010,999,1010,998,1005,994,996,995 };

	int dim = 10;

	int f[1000] = {};

	vectorFrecventaNumere(date, dim, f);


	int i = 999;
	for (i = 999; i >= 100 && f[i] != 0; i--);
	cout << i << " ";

	int j = 999;
	for (int j = 999; j >= 100 && f[j] != 0; i--);
	cout << j << " ";
}

//Se dau două șiruri A și B, fiecare format din câte N numere naturale, și un număr natural R. Aflați numărul perechilor (i,j) pentru care restul împărțirii numărului Ai la Bj este R.
void sol2() {

	int N;
	cout << "Introduceti numarul de elemente N: ";
	cin >> N;

	int A[200];
	int B[200];
	int R;


	cout << "Introduceti elementele vectorului A: ";
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cout << "Introduceti elementele vectorului B: ";
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	cout << "Introduceti numarul R: ";
	cin >> R;

	int numarPerechi = nrPerechi(A, B, N, R);
	cout << "Numarul de perechi (i,j) pentru care A[i]%B[j]= " << R << " este " << numarPerechi << endl;

}

//Andrei lucrează într-un magazin de șosete, iar fiecare șosetă are asociat un numar întreg pentru a o identifica mai ușor din ce model face parte. 
// Dându-se un vector neordonat de astfel de coduri, aflați câte perechi de șosete se pot forma.Andrei lucrează într-un magazin de șosete, iar fiecare șosetă are asociat un numar întreg pentru a o identifica mai ușor din ce model face parte. Dându-se un vector neordonat de astfel de coduri, aflați câte perechi de șosete se pot forma.
void sol3() {

	int sosete[200] = { 1,3,2,1,2,2,1,2,1,2 };

	int dim = 10;

	perechiSosete(sosete, dim);

	
}

//Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector sunt formate din valori cu aceeași sumă a cifrelor.
void sol4() {

	int date[200] = {51,842,15,28,77,132};

	int dim = 6;

	int f[1000] = {};

	vectorFrecventaSumeCifre(date,dim, f);

	numarPerechiCuAceeasiSumaCifre(f);
}


//Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente din vector au același număr de cifre.
void sol5() {

	int date[200] = { 13,3,8,700,9,25 };

	int dim = 6;

	int f[1000] = {};

	vectorFrecventaCifreVector(date, dim, f);

	numarPerechiCuAcelasiNumarDeCifre(f);

}

//Se dau două șiruri cu câte n, respectiv m elemente. Dacă înmulțim fiecare element din primul șir cu fiecare element din al doilea șir, să se afle câte produse sunt mai mici decât p.
void sol6() {

	int A[100] = { 1,2,3,4,5 };

	int dim1 = 5;

	int B[100] = { 25,34 };

	int dim2 = 2;

	int p = 99;

	numarProduseMaiMiciDecatP(A, dim1, B, dim2, p);
}

//Se dă un șir A format din N numere naturale nenule. Aflați numărul perechilor de indici, (i,j), cu i≠j, pentru care A[i] divide pe A[j].
void sol7() {

	int date[200] = { 1,4,3,2,5 };

	int dim = 5;

	numarPerechiDivizibile(date, dim);
}

//Se dă un șir A format din N elemente, numere naturale nenule distincte. Să se determine numărul perechilor (i,j), cu i<j, pentru care numărul Ai+Aj este divizibil cu Ai−Aj
void sol8() {

	int A[100] = { 1,2,3,4,5 };

	int dim = 5;

	numarPerechiDivizbilSumaDif(A, dim);
}

//Să se afișeze numerele prime de la 1 la n.
void sol9() {

	int n;
	cout << "Introduceti un numar natural: ";
	cin >> n;

	int f[100] = {};

	for (int i = 0; i < 100; i++) {
		if (i <= n && f[i] == 0 && nrPrim(i)) {
			cout << i << endl;
		}
	}

}


//Se citesc numere naturale cuprinse între 1 și 30.000.000 până la întâlnirea numărului 0. Să se afișeze valoarea duplicat.

void sol10() {

	int date[200] = { 12,3,8,10,5,8,2,0 };

	int dim = 8;

	int f[10] = {};

	vectorFrecventaCifreVector(date, dim, f);

	for (int i = 0; i < 10; i++) {
		if (f[i] == 2) {
			cout << i << " ";
		}
	}

}

//Se dă un șir a1, a2, …, an format din n numere naturale. Determinați numărul de perechi de elemente din șir (ai,aj) cu i < j, care au suma număr prim.

void sol11() {

	int date[200] = { 2,5,9 };
	
	int dim = 3;

	sumaPrime(date, dim);

}