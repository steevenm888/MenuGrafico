//Universidad de las Fuerzas Armadas 
//Creadores:Shakira Cofre, Esteban Molina, Guillermo Casanova
//Fecha de Creacion:25/10/2018			Fecha de Modificacion:26/10/2018
//Problema: Realizar un menu grafico en C++ con cinco funciones recursivas, de vectores y Matrices 
#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include <locale.h>
#include "Minout.h"

using namespace std;

//Funciones que van en el menu
//Funciones Vectores
//Funciones de Vectores con memoria dinámica
void initVectors();
double* getVectorAns();
double* getVectorA();
double* getVectorB();
void setVectorA();
void setVectorB();
void addVectors();
void substractVectors();
double scalarProduct();
void scaleVector(bool, double);
double* unitVector(bool);
double vectorModule(bool);
void exchangeVectors();
void invertVector(bool);
double* getRandomVector();
bool areParallel();
bool arePerpendicular();
void showVector(double*);
double* vectorA;
double* vectorB;
double* vectorAns;
//Funciones de recursividad
void primesNumbers(int, int);
void arithmetiProgression(int, int, int);
void geometricProgression(int, int, int);
void fibonacci(int, int, int);
bool isPrime(int, int);
int origin = 0, limit = 0;
//Funciones Matrices
void matriz1() {
	cout << "Suma Matrices 4*4" << endl;
	int  A[4][4], B[4][4], C[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "A[" << i << "][" << j << "]:";
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "B[" << i << "][" << j << "]:";
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			cout << C[i][j] << endl;
		}
	}
	_getch();
	_getch();
}
void matriz2() {
	int fila, columna, i, j;
	int arr[20][20];
	cout << "ingrese el numero de filas" << endl;
	cin >> fila;
	cout << "ingrese el numero de columnas" << endl;
	cin >> columna;
	for (i = 0; i < fila; i++) {
		for (j = 0; j < columna; j++) {
			cout << "ingrese el numero de la fila" << fila - 3 << " columna" << columna - 3 << ": ";
			cin >> arr[i][j];
		}
	}
	cout << endl;
	cout << "matriz original" << endl;
	for (i = 0; i < fila; i++) {
		cout << "| ";
		for (j = 0; j < columna; j++) {
			cout << arr[i][j] << " ";
		}
		cout << " |" << endl;
	}
	cout << endl;
	cout << "matriz invertido" << endl;
	for (i = 0; i < fila; i++) {
		cout << "| ";
		for (j = 0; j < columna; j++) {
			cout << arr[j][i] << " ";
		}
		cout << " |" << endl;
	}
	_getch();
	_getch();
}
void matriz3() {
	int m = 20, n = 20, cons;
	cout << "Ingrese el numero de filas y columnas" << endl;
	cin >> m >> n;
	int  A[20][20], C[20][20];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "]:";
			cin >> A[i][j];
		}
	}
	cout << "Ingrese la constante a multiplicar" << endl;
	cin >> cons;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] * cons;
		}
	}
	for (int i = 0; i < m; i++) {
		cout << "| ";
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << " ";
		}
		cout << " |" << endl;
	}
	_getch();
	_getch();
}
void matriz4() {
	int m, n, f, c, i, j, k;
	float A[100][100], B[100][100], C[100][100];
	printf("\n---------------------------------------------------\n");
	printf("\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n");
	cin >> m;
	cin >> n;
	printf("\n---------------------------------------------------\n");
	printf("\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n");
	cin >> f;
	cin >> c;
	cout << endl;
	if (n == f)
	{
		printf("\n---------------------------------------------------\n");
		printf("INGRESE EL VALOR DE LA PRIMERA MATRIZ\n\n");
		//INGRESE LAS MATRICES
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
			{
				cout << "A(" << i << "," << j << ")" << endl;
				cin >> A[i][j];
			}

		printf("\n");
		printf("\n---------------------------------------------------\n");
		printf("\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ\n\n");
		for (i = 1; i <= f; i++)
			for (j = 1; j <= c; j++)
			{
				cout << "B(" << i << "," << j << ")" << endl;
				cin >> B[i][j];
			}
		//OPERACION DE MULTIPLICACION
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= c; j++)
			{
				C[i][j] = 0;
				for (k = 1; k <= n; k++)
				{
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		printf("\n---------------------------------------------------\n");
		printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
		//IMPRESION
		for (i = 1; i <= m; i++)
			for (j = 1; j <= c; j++)
			{
				printf("C(%d,%d)=\t%4.2f\n", i, j, C[i][j]);
			}
	}
	else
	{
		printf("\n_________________________________________\n");
		printf("Estas matrices no se pueden multiplicar \n");
		printf("debido a que el numero de columnas de la\n");
		printf("matriz A es diferente al numero de filas\n");
		printf("de la matriz B, !Vuelva a intentarlo!   \n");
	}
	getchar(); getchar();
}
void matriz5() {
	int m, n;
	cout << "Ingrese la dimension de las matrices a sumar: ";
	cin >> m >> n;
	int  A[20][20], B[20][20], C[20][20];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "]:";
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "B[" << i << "][" << j << "]:";
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		cout << "| ";
		for (int j = 0; j < n; j++) {

			cout << C[i][j] << " ";
		}
		cout << " |" << endl;

	}
	_getch();
	_getch();
}

//Funciones Vectores


void initVectors()
{
	vectorA = new double[3];
	vectorB = new double[3];
	vectorAns = new double[3];
	for (int i = 0; i < 3; i++) {
		*(vectorA + i) = 1;
		*(vectorB + i) = 2;
		*(vectorAns + i) = 0;
	}
}

double* getVectorA() {
	return vectorA;
}

double* getVectorB() {
	return vectorB;
}
double* getVectorAns() {
	return vectorAns;
}
void setVectorA() { //Función lista
	*(vectorA) = Minout::getData<double>((char*)"Ingrese la componente i");
	*(vectorA + 1) = Minout::getData<double>((char*)"Ingrese la componente j");
	*(vectorA + 2) = Minout::getData<double>((char*)"Ingrese la componente k");
	showVector(getVectorA());
	system("pause");
}
void setVectorB() { //Función lista
	*(vectorB) = Minout::getData<double>((char*)"Ingrese la componente i");
	*(vectorB + 1) = Minout::getData<double>((char*)"Ingrese la componente j");
	*(vectorB + 2) = Minout::getData<double>((char*)"Ingrese la componente k");
	showVector(getVectorB());
	system("pause");
}
void addVectors() {
	for (int i = 0; i < 3; i++) {
		*(vectorAns + i) = *(vectorA + i) + *(vectorB + i);
	}
	showVector(getVectorAns());
}
void substractVectors() {
	for (int i = 0; i < 3; i++) {
		*(vectorAns + i) = *(vectorA + i) - *(vectorB + i);
	}
	showVector(getVectorAns());
}
double scalarProduct() {
	double scalarProduct = 0;
	for (int i = 0; i < 3; i++) {
		scalarProduct += *(vectorA + i) * *(vectorB + i);
	}
	return scalarProduct;
}
void scaleVector(bool selector, double scale) {
	if (selector) {
		for (int i = 0; i < 3; i++) {
			*(vectorA + i) *= scale;
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			*(vectorB + i) *= scale;
		}
	}
}
double* unitVector(bool selector) {
	if (selector && vectorModule(true) != 0) {
		for (int i = 0; i < 3; i++) {
			*(vectorAns + i) = *(vectorA + i) / vectorModule(selector);
		}
		return vectorAns;
	}
	else if (!selector && vectorModule(false) != 0) {
		for (int i = 0; i < 3; i++) {
			*(vectorAns + i) = *(vectorB + i) / vectorModule(selector);
		}
		return vectorAns;
	}
	else return NULL;
}
double vectorModule(bool selector) {
	double vectorModule = 0;
	if (selector) {
		for (int i = 0; i < 3; i++) {
			vectorModule += pow(*(vectorA + i), 2);
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			vectorModule += pow(*(vectorB + i), 2);
		}
	}
	return sqrt(vectorModule);
}
void exchangeVectors() {
	double* aux = vectorA;
	vectorA = vectorB;
	vectorB = aux;
}
void invertVector(bool selector) {
	if (selector) {
		for (int i = 0; i < 3; i++) {
			*(vectorA + i) *= (-1);
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			*(vectorB + i) *= (-1);
		}
	}
}
double* getRandomVector() {
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		*(vectorAns + i) = rand() % 101 - 50;
	}
	return vectorAns;
}
bool areParallel() {
	return *vectorA / *vectorB == *(vectorA + 1) / *(vectorB + 1) && *(vectorA + 1) / *(vectorB + 1) == *(vectorA + 2) / *(vectorB + 2) && vectorModule(true) != 0 && vectorModule(false) != 0;
}
bool arePerpendicular() {
	return scalarProduct() == 0 && vectorModule(true) != 0 && vectorModule(false) != 0;
}
void showVector(double* vector) {
	cout << "v = { " << *vector << "i, " << *(vector + 1) << "j, " << *(vector + 2) << "k }" << endl;
}

//Funciones recursivas

void primesNumbers(int origin, int limit) {
	if (limit > 0)
	{
		if (isPrime(origin, 2)) {
			cout << origin << "  ";
			primesNumbers(origin + 1, limit - 1);
		}
		else {
			primesNumbers(origin + 1, limit);
		}
	}
	else {
		cout << endl;
		return;
	}
}
void arithmetiProgression(int origin, int difference, int limit) {
	if (limit > 0) {
		cout << origin << "  ";
		arithmetiProgression(origin + difference, difference, limit - 1);
	}
	else {
		cout << endl;
		return;
	}
}
void geometricProgression(int origin, int reason, int limit) {
	if (limit > 0) {
		cout << origin << "  ";
		geometricProgression(origin*reason, reason, limit - 1);
	}
	else {
		cout << endl;
		return;
	}
}
void fibonacci(int limit, int i, int j) {
	if (limit > 0) {
		cout << j << "  ";
		fibonacci(limit - 1, j, i + j);
	}
	else {
		cout << endl;
		return;
	}
}
bool isPrime(int number, int counter) { //Counter siempre se inicializa en 2
	if (counter <= number / 2) {
		if (number%counter == 0) return false;
		else return isPrime(number, counter + 1);
	}
	else return true;
}


// Menu
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = 0;
	lpCursor.dwSize = 1;
	SetConsoleCursorInfo(hcon, &lpCursor);
	SetConsoleCursorPosition(hcon, dwPos);
}
void menuBase() {

	gotoxy(57, 1);
	cout << "MENU";
	gotoxy(15, 4);
	cout << "RECURSIVIDAD";
	gotoxy(55, 4);
	cout << "VECTORES";
	gotoxy(93, 4);
	cout << "MATRICES";
	gotoxy(10, 5);
	for (int i = 0; i < 95; i++) {
		cout << "-";
	}
	gotoxy(100, 21);
	cout << "Exit";
	cout << endl << endl << endl;
}
void subMenuRecursividad() {
	gotoxy(57, 1);
	cout << "MENU";
	gotoxy(15, 4);
	cout << "RECURSIVIDAD";
	gotoxy(55, 4);
	cout << "VECTORES";
	gotoxy(93, 4);
	cout << "MATRICES";
	gotoxy(10, 5);
	for (int i = 0; i < 95; i++) {
		cout << "-";
	}
	gotoxy(15, 6);
	cout << "Ejercicio 1";
	gotoxy(15, 8);
	cout << "Ejercicio 2";
	gotoxy(15, 10);
	cout << "Ejercicio 3";
	gotoxy(15, 12);
	cout << "Ejercicio 4";
	gotoxy(15, 14);
	cout << "Ejercicio 5";
	gotoxy(100, 21);
	cout << "Exit";
	cout << endl << endl << endl;

}
void subMenuVectores() {
	gotoxy(57, 1);
	cout << "MENU";
	gotoxy(15, 4);
	cout << "RECURSIVIDAD";
	gotoxy(55, 4);
	cout << "VECTORES";
	gotoxy(93, 4);
	cout << "MATRICES";
	gotoxy(10, 5);
	for (int i = 0; i < 95; i++) {
		cout << "-";
	}
	gotoxy(55, 6);
	cout << "Ejercicio 1";
	gotoxy(55, 8);
	cout << "Ejercicio 2";
	gotoxy(55, 10);
	cout << "Ejercicio 3";
	gotoxy(55, 12);
	cout << "Ejercicio 4";
	gotoxy(55, 14);
	cout << "Ejercicio 5";
	gotoxy(100, 21);
	cout << "Exit";
	cout << endl << endl << endl;

}
void subMenuMatrices() {
	gotoxy(57, 1);
	cout << "MENU";
	gotoxy(15, 4);
	cout << "RECURSIVIDAD";
	gotoxy(55, 4);
	cout << "VECTORES";
	gotoxy(93, 4);
	cout << "MATRICES";
	gotoxy(10, 5);
	for (int i = 0; i < 95; i++) {
		cout << "-";
	}
	gotoxy(93, 6);
	cout << "Ejercicio 1";
	gotoxy(93, 8);
	cout << "Ejercicio 2";
	gotoxy(93, 10);
	cout << "Ejercicio 3";
	gotoxy(93, 12);
	cout << "Ejercicio 4";
	gotoxy(93, 14);
	cout << "Ejercicio 5";
	gotoxy(100, 21);
	cout << "Exit";
	cout << endl << endl << endl;

}
void highlightHorizontal(int x, int y) {
	switch (y)
	{
	case 6:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Ejercicio 1";
		break;
	case 8:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Ejercicio 2";
		break;
	case 10:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Ejercicio 3";
		break;
	case 12:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Ejercicio 4";
		break;
	case 0:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Ejercicio 5";
		break;


	default:
		break;
	}

}
void highlightVertical(int x, int y) {
	switch (x)
	{
	case 15:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Recursividad";
		break;
	case 55:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Vectores";
		break;
	case 93:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | BACKGROUND_INTENSITY);
		cout << "Matrices";
		break;
	default:
		break;
	}
}
//Mover arriba y abajo en cada una de las posiciones dependiendo de x
void upDown(int posCursor, int *x, int *y) {
	switch (*x)
	{
	case 15:
		if (posCursor == 80 && *y <= 14) {
			subMenuRecursividad();
			gotoxy(*x, *y + 2);
			*y = (*y + 2) % 14;
			highlightHorizontal(*x, *y);

		}
		break;
	case 55:
		if (posCursor == 80 && *y < 14) {
			subMenuVectores();
			gotoxy(*x, *y + 2);
			*y = (*y + 2) % 14;
			highlightHorizontal(*x, *y);

		}
		break;
	case 93:
		if (posCursor == 80 && *y < 14) {
			subMenuMatrices();
			gotoxy(*x, *y + 2);
			*y = (*y + 2) % 14;
			highlightHorizontal(*x, *y);

		}
		break;
	default:
		break;
	}

}
void downUp(int posCursor, int *x, int *y) {
	switch (*x)
	{
	case 15:
		if (posCursor == 72 && *y > 4) {
			subMenuRecursividad();
			gotoxy(*x, *y - 2);
			*y = (*y % 14) - 2;
			*x = 15;
			//gotoxy(*x, *y);
			highlightHorizontal(*x, *y);

		}
		break;
	case 55:
		if (posCursor == 72 && *y > 4) {
			subMenuVectores();
			*y -= 2;
			*x = 55;
			gotoxy(*x, *y);
			highlightHorizontal(*x, *y);

		}
		break;
	case 93:
		if (posCursor == 72 && *y > 4) {
			subMenuMatrices();
			*y -= 2;
			*x = 93;
			gotoxy(*x, *y);
			highlightHorizontal(*x, *y);

		}
		break;
	default:
		break;
	}

}
void leftRight(int posCursor, int *x, int *y) {

	switch (*x) {
	case 15:
		if (posCursor == 77 && *y == 4) {
			system("cls");
			subMenuVectores();
			*x = 55;
			gotoxy(*x, *y);
			highlightVertical(*x, *y);

		}
		break;
	case 55:
		if (posCursor == 77 && *y == 4) {
			system("cls");
			subMenuMatrices();
			*x = 93;
			gotoxy(*x, *y);
			highlightVertical(*x, *y);

		}

	}
}
void rightLeft(int posCursor, int *x, int *y) {

	switch (*x) {
	case 93:
		if (posCursor == 75 && *y == 4) {
			system("cls");
			subMenuVectores();
			*x = 55;
			gotoxy(*x, *y);
			highlightVertical(*x, *y);
		}
		break;
	case 55:
		if (posCursor == 75 && *y == 4) {
			system("cls");
			subMenuRecursividad();
			*x = 15;
			gotoxy(*x, *y);
			highlightVertical(*x, *y);

		}
		break;
	}
}

void asigneFunctionY(int cursor, int *x, int *y) {
	switch (*y)
	{
	case 6:
		if (*x == 15) {
			system("cls");
			do {
				origin = Minout::getData<int>((char*)"Ingrese el elemento inicial de la sucesión");
				limit = Minout::getData<int>((char*)"Ingrese un número de elementos que desea obtener");
			} while (limit < 0 || origin < 0);
			primesNumbers(origin, limit);
			system("pause");
			system("cls");
			subMenuRecursividad();
		}
		else {
			if (*x == 55) {
				system("cls");
				addVectors();
				system("pause");
				system("cls");
				subMenuVectores();
			}
			else if (*x == 93) {
				system("cls");
				matriz1();
				system("cls");
				subMenuMatrices();
			}

		}

		break;
	case 8:
		if (*x == 15) {
			system("cls");
			int reason;
			origin = Minout::getData<int>((char*)"Ingrese el primer número de la sucesión");
			reason = Minout::getData<int>((char*)"Ingrese la razón entre elementos");
			limit = Minout::getData<int>((char*)"Ingrese el número de elementos que desea obtener");
			geometricProgression(origin, reason, limit);
			system("pause");
			system("cls");
			subMenuRecursividad();
			break;
		}
		else {
			if (*x == 55) {
				system("cls");
				substractVectors();
				system("pause");
				system("cls");
				subMenuVectores();
			}
			else if (*x == 93) {
				system("cls");
				matriz2();
				system("cls");
				subMenuMatrices();
			}

		}
		break;
	case 10:
		if (*x == 15) {
			system("cls");
			int difference;
			origin = Minout::getData<int>((char*)"Ingrese el primer número de la sucesión");
			difference = Minout::getData<int>((char*)"Ingrese la diferencia entre elementos");
			limit = Minout::getData<int>((char*)"Ingrese el número de elementos que desea obtener");
			arithmetiProgression(origin, difference, limit);
			system("pause");
			system("cls");
			subMenuRecursividad();

		}
		else {
			if (*x == 55) {
				system("cls");
				showVector(getRandomVector());
				system("pause");
				system("cls");
				subMenuVectores();
			}
			else if (*x == 93) {
				system("cls");
				matriz3();
				system("cls");
				subMenuMatrices();
			}

		}
		break;
	case 12:
		if (*x == 15) {
			system("cls");
			cout << "Números primos" << endl;
			int number;
			do {
				number = Minout::getData<int>((char*)"Ingrese un número para determinar su primidad");
			} while (number < 1);
			isPrime(number, 2) ? cout << "Verdadero" << endl : cout << "Falso" << endl;
			system("pause");
			system("cls");
			subMenuRecursividad();
		}
		else {
			if (*x == 55) {
				system("cls");
				cout << "A.B = " << scalarProduct() << endl;
				system("pause");
				system("cls");
				subMenuVectores();
			}
			else if (*x == 93) {
				system("cls");
				matriz4();
				system("cls");
				subMenuMatrices();
			}

		}
		break;
	case 14:
		if (*x == 15) {
			system("cls");
			cout << "Fibonacci" << endl;
			do {
				limit = Minout::getData<int>((char*)"Ingrese un número de elementos que desea obtener");
			} while (limit < 0);
			fibonacci(limit, 0, 1);
			system("pause");
			system("cls");
			subMenuRecursividad();
			break;
		}
		else {
			if (*x == 55) {
				system("cls");
				cout << "|A| = " << vectorModule(true) << endl;
				cout << "|B| = " << vectorModule(false) << endl;
				system("pause");
				system("cls");
				subMenuVectores();
			}
			else if (*x == 93) {
				system("cls");
				matriz5();
				system("cls");
				subMenuMatrices();
			}

		}
		break;
	default:
		break;
	}
}


//Main 
int main()
{
	initVectors();
	system("cls");
	bool exit = true;
	int auxX = 15, auxY = 4, getc = 0;
	subMenuRecursividad();

	do {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		switch (getc)
		{
		case 80:
			upDown(80, &auxX, &auxY);
			break;
		case 72:
			downUp(72, &auxX, &auxY);
			break;
		case 75:
			rightLeft(75, &auxX, &auxY);
			break;
		case 77:
			leftRight(77, &auxX, &auxY);
			break;
		case 13:
			asigneFunctionY(getc, &auxX, &auxY);
			break;
		case 27:
			gotoxy(100, 21);
			exit = false;
		default:
			break;
		}

		getc = _getch();
	} while (exit);
}
