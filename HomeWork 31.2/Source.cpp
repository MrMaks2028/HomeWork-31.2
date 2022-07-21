#include <iostream>
#include "Task2.h"
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "Çàäà÷à 2.\n";

	try {
		cout << task2();
	}
	catch (exception &b) {
		cout << "ÎØÈÁÊÀ: " << b.what() << endl;
	}

	return 0;
}