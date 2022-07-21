#include <iostream>
#include "Task2.h"
#include <string>

int task2() {
	std::string str;
	std::cout << "������� ����� � ��������� ���� \"����� ����� �����\"\n(������: HI 2) -> ";
	getline(std::cin, str);
	int spaces = 0;
	int digitsCount = str.find_first_of("1234567890");
	for (int i = 0; i < str.size(); i++)
		if (str[i] == ' ')
			spaces++;
	if (str.size() == 0)
		throw std::runtime_error("������ �� ������ ���� ������.");
	if (str[0] == ' ')
		throw std::runtime_error("������ �� ������ ���������� � �������.");
	if (digitsCount + 1 == 0)
		throw std::runtime_error("�� ������� ���-�� ��������. ����� �� ������ ����� ������ ������ ���� ������� �����,\n ������������ ���-�� �������� � �����");
	if (spaces > 1)
		throw std::runtime_error("�� ������ ���� ������ ������ ������� ����� ������ � ������.");
	if (spaces < 1)
		throw std::runtime_error("��� ������� ����� ������ � ������. ������ ���� ���� ������.");
	int begin = str.find_first_of("1234567890");
	int end = str.find_last_of("1234567890");
	std::string num = str.substr(begin, end - begin + 1);
	int strSize = str.find(" ");
	int num2 = stoi(num);
	if (num2 == strSize)
		return true;
	return false;
}