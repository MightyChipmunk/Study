#include <iostream>

struct student {
	int age;
	double height;
	int weight;
}; //구조체 선언

struct employee {
	student emp;
	int money;
}; //중첩 구조체

student func(int a, int b, int c) {
	student tmp = { a, b, c };
	return tmp;
} //구조체를 반환하는 함수

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

