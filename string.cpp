#include <iostream>
#include <string>

int main(void) {
	int integer;
	std::string string;

	std::cin >> integer;
	std::cin.ignore(32767, '\n'); //���������� ���� ���� ����
	
	std::getline(std::cin, string); //���ڿ� �޴� �Լ�, ù��° ���� ������ std::cin
	
	std::cout << integer << std::endl << string << std::endl;
	std::cout << string.length(); //���ڿ��� ���̸� ��ȯ�ϴ� �Լ�

	return 0; 
}

