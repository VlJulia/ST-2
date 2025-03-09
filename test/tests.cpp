// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

const double PI = std::acos(-1);

TEST(TestTask, TaskPool) {
    EXPECT_FLOAT_EQ(Pool(), 72256.633);
}

TEST(TestTask, TaskRope) {
    EXPECT_FLOAT_EQ(Rope(), 637810.06);
}

TEST(TestClass, zeroRadiusTest) {
    Circle c(100);
    c.setRadius(0);
    EXPECT_EQ(0, c.getFerence());
    EXPECT_EQ(0, c.getArea());
}

TEST(TestClass, zeroAreaTest) {
    Circle c(100);
    c.setArea(0);
    EXPECT_EQ(0, c.getFerence());
    EXPECT_EQ(0, c.getRadius());
}

TEST(TestClass, zeroFerenceTest) {
    Circle c(100);
    c.setFerence(0);
    EXPECT_EQ(0, c.getArea());
    EXPECT_EQ(0, c.getRadius());
}

TEST(TestClass, negativeRadiusTest) {
    Circle c(100);
    ASSERT_ANY_THROW(c.setRadius(-1));
}

TEST(TestClass, negativeAreaTest) {
    Circle c(100);
    ASSERT_ANY_THROW(c.setArea(-1));
}

TEST(TestClass, negativeFerenceTest) {
    Circle c(100);
    ASSERT_ANY_THROW(c.setFerence(-1));
}

TEST(TestClass, setRadiusTest) {
    Circle c(100);
    double ans = 1.25;
    c.setRadius(ans);
    EXPECT_EQ(ans, c.getRadius());
}

TEST(TestClass, setAreaTest) {
    Circle c(100);
    double ans = 1.25;
    c.setArea(ans);
    EXPECT_EQ(ans, c.getArea());
}

TEST(TestClass, setFerenceTest) {
    Circle c(100);
    double ans = 1.25;
    c.setFerence(ans);
    EXPECT_EQ(ans, c.getFerence());
}

TEST(TestClass, areaFromRadiusTest) {
    Circle c(100), c2(1);
    c2.setRadius(c.getRadius());
    EXPECT_FLOAT_EQ(c.getArea(), c2.getArea());
}

TEST(TestClass, radiusFromAreaTest) {
    Circle c(100), c2(1);
    c2.setArea(c.getArea());
    EXPECT_FLOAT_EQ(c.getRadius(), c2.getRadius());
}

TEST(TestClass, radiusFromFerenceTest) {
    Circle c(100), c2(1);
    c2.setFerence(c.getFerence());
    EXPECT_FLOAT_EQ(c.getRadius(), c2.getRadius());
}

TEST(TestClass, ferenceFromRadiusTest) {
    Circle c(100), c2(1);
    c2.setRadius(c.getRadius());
    EXPECT_FLOAT_EQ(c.getFerence(), c2.getFerence());
}

TEST(TestClass, ferenceFromAreaTest) {
    Circle c(100), c2(1);
    c2.setArea(c.getArea());
    EXPECT_FLOAT_EQ(c.getFerence(), c2.getFerence());
}

TEST(TestClass, areaFromFerenceTest) {
    Circle c(100), c2(1);
    c2.setFerence(c.getFerence());
    EXPECT_FLOAT_EQ(c.getArea(), c2.getArea());
}

TEST(TestClass, piTestFerence) {
    Circle c(1);
    EXPECT_FLOAT_EQ(2 * PI, c.getFerence());
}

TEST(TestClass, piTestArea) {
    Circle c(1);
    EXPECT_FLOAT_EQ(PI, c.getArea());
}

TEST(TestClass, piTestRadius) {
    Circle c(100), c2(1);
    c.setArea(c2.getArea());
    EXPECT_FLOAT_EQ(1, c.getRadius());
}

TEST(TestClass, someRadiusTest1) {
    Circle c(40);
    EXPECT_FLOAT_EQ(2 * PI * 40, c.getFerence());
    EXPECT_FLOAT_EQ(40 * 40 * PI, c.getArea());
}

TEST(TestClass, someRadiusTest2) {
    Circle c(17);
    EXPECT_FLOAT_EQ(2 * PI * 17, c.getFerence());
    EXPECT_FLOAT_EQ(17 * 17 * PI, c.getArea());
}

TEST(TestClass, someRadiusTest3) {
    Circle c(77);
    EXPECT_FLOAT_EQ(2 * PI * 77, c.getFerence());
    EXPECT_FLOAT_EQ(77 * 77 * PI, c.getArea());
}

TEST(TestClass, someFerenceTest1) {
    Circle c(77);
    c.setFerence(77);
    EXPECT_FLOAT_EQ(77 / (2 * PI), c.getRadius());
}

TEST(TestClass, someFerenceTest2) {
    Circle c(5);
    c.setFerence(5);
    EXPECT_FLOAT_EQ(5 / (2 * PI), c.getRadius());
}

TEST(TestClass, someAreaTest1) {
    Circle c(99);
    c.setArea(99);
    EXPECT_FLOAT_EQ(std::sqrt(99 / PI), c.getRadius());
}

TEST(TestClass, someAreaTest2) {
    Circle c(32);
    c.setArea(32);
    EXPECT_FLOAT_EQ(std::sqrt(32 / PI), c.getRadius());
}
