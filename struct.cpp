#include <iostream>

struct student {
	int age;
	double height;
	int weight;
}; //����ü ����

struct employee {
	student emp;
	int money;
}; //��ø ����ü

student func(int a, int b, int c) {
	student tmp = { a, b, c };
	return tmp;
} //����ü�� ��ȯ�ϴ� �Լ�

int main(void) { 
	int test;

	student st1 = { 20, 185.4, 80 };
	std::cout << st1.height << std::endl;

	student st2 = func(21, 191.1, 98);
	std::cout << st2.age << ' ' << st2.height << ' ' << st2.weight << ' ' << std::endl;

	employee em1 = { st2, 100 };
	std::cout << em1.emp.age << ' ' << em1.money << std::endl;

	std::cin >> test;
	return 0; 
}

