#include "pch.h"
#include <Triangle.h>
TEST(TriangleTest, BaseConstructor) {
    EXPECT_NO_THROW(Triangle t(10.0, 5.0));
}

TEST(TriangleTest, ConstructorWithValidValues) {
    EXPECT_NO_THROW(Triangle t(10.0, 5.0), std::logic_error);
    Triangle t(10.0, 5.0);
    EXPECT_EQ(t.getSide(), 10.0);
    EXPECT_EQ(t.getHeight(), 5.0);
}

TEST(TriangleTest, ConstructorWithZeroSide) {
    EXPECT_THROW(Triangle t(0.0, 5.0), std::logic_error);
}

TEST(TriangleTest, CalculateArea) {
    Triangle t(10.5, 4.2);
    EXPECT_DOUBLE_EQ(t.calculateArea(), 22.05);
}

TEST(TriangleTest, CalculateAreaWithLargeNumbers) {
    Triangle t(1000.0, 500.0);
    EXPECT_DOUBLE_EQ(t.calculateArea(), 250000.0);
}


TEST(TriangleTest, GetSide) {
    Triangle t(10.0, 5.0);
    EXPECT_DOUBLE_EQ(t.getSide(), 10.0);
}

TEST(TriangleTest, GetHeight) {
    Triangle t(10.0, 5.0);
    EXPECT_DOUBLE_EQ(t.getHeight(), 5.0);
}

TEST(TriangleTest, SetSidePossible) {
    Triangle t(10.0, 5.0);
    EXPECT_NO_THROW(t.setSide(15.0));
    EXPECT_DOUBLE_EQ(t.getSide(), 15.0);
}

TEST(TriangleTest, SetSideImpossible) {
    Triangle t(10.0, 5.0);
    EXPECT_THROW(t.setSide(-5.0), std::logic_error);
    EXPECT_THROW(t.setSide(0.0), std::logic_error);
    EXPECT_DOUBLE_EQ(t.getSide(), 10.0);
}