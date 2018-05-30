#include "GeometricObject.h"
#include <string>
#include "Circle.h"
#include "Box.h"


//factory pattern
GeometricObject* GeometricObject::getGeometricObject(const std::string& name) {

	if (name == "Box")
		return new Box;
	else if (name == "Circle")
		return new Circle;

	//assert(false);
	return nullptr;

}