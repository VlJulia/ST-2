// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

class Circle {
    double radius;
    double ference;
    double area;

 public:
    explicit Circle(double radius_ = 0) {
        setRadius(radius_);
    }
    bool setRadius(double radius_);
    bool setFerence(double ference_);
    bool setArea(double area_);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif  // INCLUDE_CIRCLE_H_
