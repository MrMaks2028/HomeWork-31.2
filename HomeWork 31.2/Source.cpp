#include <iostream>
#include "Task2.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "������ 2.\n";

	try {
		cout << task2();
	}
	catch (exception &b) {
		cout << "������: " << b.what() << endl;
	}

	return 0;
}