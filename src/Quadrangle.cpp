#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

void Quadrangle::print_info() const {
    std::cout << "��������������:\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d
        << "\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
}
