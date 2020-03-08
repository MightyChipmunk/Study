#include <iostream>

void printsize(int *arr) {
	std::cout << "�迭 �������� ũ�� " << sizeof(arr) << std::endl;
} //�迭�� �μ��� �ް� ũ�� ���

struct Person { 
	int age; 
	double weight;
}; 

int main(void) {
	int arr1[] = { 1, 2, 3, 4, 5 };
	std::cout << "�迭�� ũ�� " << sizeof(arr1) << std::endl; //�迭�� ũ�� 5*4 ���
	printsize(arr1); //�迭�� �ּҸ� ���ڷ� �Ѱ� �������� ũ�� 4 ���
	std::cout << &arr1[0] << ' ' << &arr1[1] << ' ' << arr1 + 1 << std::endl;
	/*�������� ����� ��ü�� ũ�⸦ ���Ѵ�.
	  arr1+1�� arr1�� �޸𸮰� +4(int�� ũ��)�� ��ȯ�ȴ�.
	  ��, �迭�� 1�� �߰��ϸ� �迭�� ������Ҹ� ����Ų��.*/

	int *ptr = new int;
	*ptr = 7; //�޸𸮿� ���� ���� �Ҵ� �� 7�̶� ���� �ִ´�. new int 7;�� ����
	delete ptr; //���� �Ҵ��� ���� ����
	ptr = nullptr; //ptr�� ���� null�� ����

	int length;
	std::cout << "���� �迭�� ũ�� �Ҵ� ";
	std::cin >> length;
	int *arr2 = new int[length]; //�迭���� �����Ҵ�
	/*���� �迭�� ��Ÿ�� ���ȿ� �迭 ���̸� ���� �� �� �ִ�.
	  ���� ���� �迭�� ���̸� ��������� ǥ���ؾ� �Ѵ�.
	int *arr2 = new int[length](); ���� �Ҵ� �� 0���� �ʱ�ȭ*/
	std::cout << "���� �迭�� ũ�� " << sizeof(arr2) << std::endl;
	printsize(arr2); //���� �Ҵ��� �迭�� ũ��� �������� ũ��
	delete[] arr2; //���� �Ҵ��� �޸� ������ �� delete[]

	const int val1 = 1;
	int val2 = 2;
	const int *cptr = &val1; //����� ����Ű�� ������, �������� ���� ���� ����
	int *const cptr2 = &val2; //��� ������, �����Ͱ� ����Ű�� ������ ���� ���� ����
	const int const *cptr3 = &val1; //����� ����Ű�� ��� ������

	Person person;
	Person *sptr = &person; 
	(*sptr).age = 5;
	sptr->age = 5; //�����ͷ� ����� �����ϴµ� ->���

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; 
	for (int number : fibonacci) //���� ��� for��, 
		std::cout << number << ' ';
	//���� �迭�̳� �����ͷ� ��ȯ�� �迭�� ���� ��� for�� ��� �Ұ�

	int **array = new int*[10];
	for (int count = 0; count < 10; ++count)
		array[count] = new int[5]; //=int[10][5]
	for (int count = 0; count < 10; ++count) 
		delete[] array[count]; 
	delete[] array; // 2���� ���� �迭 �Ҵ� ������ ������ �ʿ��ϴ�.
	
	return 0; 
}

