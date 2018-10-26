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

using namespace std;

//Funciones que van en el menu
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


//Aqui agregar las funciones de vectores


//Funciones Recursividad

//Aqui agregar las funciones recursivas

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
void upDown(int posCursor ,int *x, int *y) {
	switch (*x)
	{
	case 15:
		if (posCursor == 80 && *y <= 14) {
			subMenuRecursividad();
			gotoxy(*x, *y + 2);
			*y = (*y+2)%14;			
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
			if (posCursor == 72  && *y > 4) {
				subMenuRecursividad();
				gotoxy(*x, *y -2);
				*y = (*y %14)-2;
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
			*x =55;
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
			///Llamar a la funcion recursiva1
			system("cls");
			subMenuRecursividad();
		}
		else {
			if(*x==55){
				system("cls");
				///Llamar a la funcion vector1
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
			///Llamar a la funcion recursiva2
			system("cls");
			subMenuRecursividad();
		}
		else {
			if (*x == 55) {
				system("cls");
				//Llamar funcion vector2 
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
			///Llamar a la funcion recursiva3
			system("cls");
			subMenuRecursividad();
			
		}
		else {
			if (*x == 55) {
				system("cls");
				//Llamar funcion vector3 
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
			///Llamar a la funcion recursiva4
			system("cls");
			subMenuRecursividad();
		}
		else {
			if (*x == 55) {
				system("cls");
				//Llamar funcion vector4 
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
			///Llamar a la funcion recursiva5
			system("cls");
			subMenuRecursividad();
		}
		else {
			if (*x == 55) {
				system("cls");
				//Llamar funcion vector5
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
