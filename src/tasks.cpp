// Copyright 2022 UNN-CS
#include <tasks.h>
#include <circle.h>
#include <cstdint>

double Pool() {
    Circle pool_circle(3);
    int price_org = 2000, price_road = 1000;
    double price = pool_circle.getArea();
    pool_circle.setRadius(4);
    price = (pool_circle.getArea() - price) * price_road;
    price += pool_circle.getFerence() * price_org;
    return price;
}

double Rope() {
    Circle Earch(637810);
    double area_was = Earch.getArea();
    Earch.setFerence(Earch.getFerence() + 1);
    return Earch.getArea() - area_was;
}
