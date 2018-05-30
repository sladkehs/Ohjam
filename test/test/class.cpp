#include <iostream>
//#include "Box.h"
//#include "Circle.h"
#include "GeometricObject.h"

#include <string>
#include <vector>

using namespace std;

class Test {
public:
	int a_;

	Test(const int& _a) : a_(_a) {
		std::cout << "int Constructor" << std::endl;
	}

	Test(const Test& _test) : a_(_test.a_) {
		std::cout << "Copy Constructor" << std::endl;
	}

	void print() {
		std::cout << a_ << std::endl;
	}
};

void printTest(Test test) {

	std::cout << &test << std::endl;

	test.print();
}

void printTestRef(Test& test) {

	std::cout << &test << std::endl;

	test.print();
}


void printTestPtr(Test* test) {

	std::cout << test << std::endl;
	
	test->print();
}

//int main() {
//
//	Test my_test(123);
//	std::cout << &my_test << std::endl;
//
//	std::cout << std::endl;
//	printTest(my_test);
//	std::cout << std::endl;
//	printTestRef(my_test);
//	std::cout << std::endl;
//	printTestPtr(&my_test);
//
//	//GeometricObject **ob_list = new GeometricObject *[10];
//	/*vector<GeometricObject *> ob_list;
//
//	ob_list.push_back(GeometricObject::getGeometricObject("Box"));
//	ob_list.push_back(GeometricObject::getGeometricObject("Circle"));*/
//
//	/*for(auto itr : ob_list)
//	{
//		itr->draw();
//	}
//
//	for (auto itr : ob_list)
//	{
//		delete itr;
//	}*/
//
//	return 0;
//}