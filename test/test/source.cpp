#include <iostream>

template<class T_CLASS>
void print(const T_CLASS& i) {
	std::cout << i << std::endl;
}

int main() {
	
	print(1);
	print(1.1f);
	print(3.4);
	print("hello world");

	return 0;
}