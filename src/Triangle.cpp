#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {}

void Triangle::print_info() const {
    std::cout << "�����������:\n�������: a=" << a << " b=" << b << " c=" << c
        << "\n����: A=" << A << " B=" << B << " C=" << C << "\n";
}
