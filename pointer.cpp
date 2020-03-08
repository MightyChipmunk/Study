#include <iostream>

void printsize(int *arr) {
	std::cout << "배열 포인터의 크기 " << sizeof(arr) << std::endl;
} //배열을 인수로 받고 크기 출력

struct Person { 
	int age; 
	double weight;
}; 

int main(void) {
	int arr1[] = { 1, 2, 3, 4, 5 };
	std::cout << "배열의 크기 " << sizeof(arr1) << std::endl; //배열의 크기 5*4 출력
	printsize(arr1); //배열의 주소를 인자로 넘겨 포인터의 크기 4 출력
	std::cout << &arr1[0] << ' ' << &arr1[1] << ' ' << arr1 + 1 << std::endl;
	/*포인터의 산술은 객체의 크기를 곱한다.
	  arr1+1은 arr1의 메모리값 +4(int의 크기)가 반환된다.
	  즉, 배열에 1을 추가하면 배열의 다음요소를 가리킨다.*/

	int *ptr = new int;
	*ptr = 7; //메모리에 공간 동적 할당 후 7이란 값을 넣는다. new int 7;도 가능
	delete ptr; //동적 할당한 공간 삭제
	ptr = nullptr; //ptr의 값을 null로 변경

	int length;
	std::cout << "동적 배열의 크기 할당 ";
	std::cin >> length;
	int *arr2 = new int[length]; //배열길이 동적할당
	/*동적 배열은 런타임 동안에 배열 길이를 선택 할 수 있다.
	  또한 동적 배열은 길이를 명시적으로 표현해야 한다.
	int *arr2 = new int[length](); 동적 할당 후 0으로 초기화*/
	std::cout << "동적 배열의 크기 " << sizeof(arr2) << std::endl;
	printsize(arr2); //동적 할당한 배열의 크기는 포인터의 크기
	delete[] arr2; //동적 할당한 메모리 삭제는 꼭 delete[]

	const int val1 = 1;
	int val2 = 2;
	const int *cptr = &val1; //상수를 가리키는 포인터, 포인터의 값은 변경 가능
	int *const cptr2 = &val2; //상수 포인터, 포인터가 가리키는 변수의 값은 변경 가능
	const int const *cptr3 = &val1; //상수를 가리키는 상수 포인터

	Person person;
	Person *sptr = &person; 
	(*sptr).age = 5;
	sptr->age = 5; //포인터로 멤버를 선택하는데 ->사용

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; 
	for (int number : fibonacci) //범위 기반 for문, 
		std::cout << number << ' ';
	//동적 배열이나 포인터로 변환된 배열은 범위 기반 for문 사용 불가

	int **array = new int*[10];
	for (int count = 0; count < 10; ++count)
		array[count] = new int[5]; //=int[10][5]
	for (int count = 0; count < 10; ++count) 
		delete[] array[count]; 
	delete[] array; // 2차원 동적 배열 할당 해제는 루프가 필요하다.
	
	return 0; 
}

