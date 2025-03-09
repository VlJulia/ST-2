// Copyright 2022 UNN-CS
#include <cstdint>
#include "circle.h"
#include <cmath>

const double PI = std::acos(-1);

bool Circle::setRadius(double radius_) {
	if (radius_ < 0) throw "radius<0";
	this->radius = radius_;
	this->ference = 2 * PI * radius_;
	this->area = PI * radius_ * radius_;
	return true;
};
bool Circle::setFerence(double ference_) {
	if (ference_ < 0) throw "ference<0";
	this->ference = ference_;
	this->radius = ference_ / (2 * PI);
	this->area = PI * radius * radius;
	return true;
};
bool Circle::setArea(double area_) {
	if (area_ < 0) throw "area<0";
	this->area = area_;
	this->radius = std::sqrt(area / (PI));
	this->ference = 2 * PI * radius;
	return true;
};
double Circle::getRadius() {
	return this->radius;
};
double Circle::getFerence() { return this->ference; };
double Circle::getArea() { return this->area; };
