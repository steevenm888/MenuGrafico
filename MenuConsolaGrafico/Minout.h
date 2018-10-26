#pragma once
#include <iostream>
using namespace std;

class Minout
{
public:
	Minout() {

	}
	~Minout() {}
	template<class T> static T getData(char* message) {
		T data;
		cout << message << ": ";
		cin >> data;
		return data;
	}

	static void getString(char* message, char* posting) {
		cout << message << ": ";
		cin.getline(posting,30);
	}

	static void showData(char* option, char* value) {
		cout << option << ": " << value;
	}
private:
	char data[30];
};

