#include <iostream>
#include <functional>

void foo(int (*func)(int), int x) { 
	std::cout << func(x);
} //함수를 매개변수로 받는 함수 

void goo(std::function<int(int)>func, int x) {
	std::cout << func(x);
} //함수를 매개변수로 받는 함수, functional을 include하면 이런식으로 사용가능

int function(int x) {
	return x;
}

int main() { 
	int a;
	std::cin >> a;
	
	int (*fptr)(int) = NULL; //포인터 함수 선언
	fptr = function; /*포인터 함수 fptr은 function 함수를 가리킨다.
                     (*fptr) = function이 맞지만 암시적 역참조를 사용해서 생략가능*/
	
	std::function<int(int)>fptr2; //포인터 함수 선언, functional을 include하면 이런식으로 사용가능
	fptr2 = function; //포인터 함수 fptr2는 function 함수를 가리킨다.
	
	foo(fptr, a); //foo함수에 fptr포인터와 입력받은 정수 a를 인자로 넘김, 출력결과는 function(a)
	goo(fptr2, a); //goo함수에 fptr2포인터와 입력받은 정수 a를 인자로 넘김, 출력결과는 function(a)
	
	return 0;
}
