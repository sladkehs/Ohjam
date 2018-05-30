#pragma once
#include <iostream>
#include <string>


class GeometricObject {

public:
	//virtual void draw() = 0; // pure virtual function body(x)-> 바디를 child class 에서 반드시 만들어라

	virtual void draw() {
		std::cout << "GeometricObject" << std::endl;
	}// 공통적으로 하는거

	static GeometricObject* getGeometricObject(const std::string& name);

};