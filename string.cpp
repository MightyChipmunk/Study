#include <iostream>
#include <string>

int main(void) {
	int integer;
	std::string string;

	std::cin >> integer;
	std::cin.ignore(32767, '\n'); //스트림에서 개행 문자 삭제
	
	std::getline(std::cin, string); //문자열 받는 함수, 첫번째 항은 무조건 std::cin
	
	std::cout << integer << std::endl << string << std::endl;
	std::cout << string.length(); //문자열의 길이를 반환하는 함수

	return 0; 
}

