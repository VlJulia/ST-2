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
    EXPECT_FLOAT_EQ(Rope(), 6378100.06);
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

TEST(TestClass, piTest) {
    Circle c(1);
    EXPECT_FLOAT_EQ(2 * PI, c.getFerence());
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
