#pragma once
#include <iostream>
#include <string>


class GeometricObject {

public:
	//virtual void draw() = 0; // pure virtual function body(x)-> �ٵ� child class ���� �ݵ�� ������

	virtual void draw() {
		std::cout << "GeometricObject" << std::endl;
	}// ���������� �ϴ°�

	static GeometricObject* getGeometricObject(const std::string& name);

};