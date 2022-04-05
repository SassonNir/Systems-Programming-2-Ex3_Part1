#include "Matrix.hpp"
#include "doctest.h"

using namespace zich;
using namespace std;

TEST_CASE("Invalid Cases") {
    vector<double> vals1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    Matrix m1(vals1, 3, 4);
    CHECK_THROWS(Matrix(vals1, 3, 3));
    CHECK_THROWS(Matrix(vals1, 2, 4));
    CHECK_THROWS(Matrix(vals1, 4, 2));
    Matrix m2(vals1, 2, 6);
    CHECK_THROWS(m1 + m2);
    CHECK_THROWS(m1 += m2);
    CHECK_THROWS(m1 - m2);
    CHECK_THROWS(m1 -= m2);
    CHECK_THROWS(m1 * m2);
    CHECK_THROWS(m1 *= m2);
    bool b;
    CHECK_THROWS(b = m1 == m2);
    CHECK_THROWS(b = m1 != m2);
    CHECK_THROWS(b = m1 > m2);
    CHECK_THROWS(b = m1 >= m2);
    CHECK_THROWS(b = m1 < m2);
    CHECK_THROWS(b = m1 <= m2);
}


TEST_CASE("Addition") {
    vector<double> vals1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<double> vals2 = {24, 13, -23, -12, 22, 11, -21, -10, 20, 9, -19, -8};
    Matrix m1(vals1, 3, 4);
    Matrix m2(vals2, 3, 4);
    Matrix m3 = m1 + m2;
    CHECK(m3(0, 0) == 25);
    CHECK(m3(0, 1) == 15);
    CHECK(m3(0, 2) == -20);
    CHECK(m3(0, 3) == -8);
    CHECK(m3(1, 0) == 27);
    CHECK(m3(1, 1) == 17);
    CHECK(m3(1, 2) == -18);
    CHECK(m3(1, 3) == -6);
    CHECK(m3(2, 0) == 29);
    CHECK(m3(2, 1) == 19);
    CHECK(m3(2, 2) == -16);
    CHECK(m3(2, 3) == -4);
    m1 += m2;
    CHECK(m1(0, 0) == 25);
    CHECK(m1(0, 1) == 15);
    CHECK(m1(0, 2) == -20);
    CHECK(m1(0, 3) == -8);
    CHECK(m1(1, 0) == 27);
    CHECK(m1(1, 1) == 17);
    CHECK(m1(1, 2) == -18);
    CHECK(m1(1, 3) == -6);
    CHECK(m1(2, 0) == 29);
    CHECK(m1(2, 1) == 19);
    CHECK(m1(2, 2) == -16);
    CHECK(m1(2, 3) == -4);
}

TEST_CASE("Subtraction") {
    vector<double> vals1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<double> vals2 = {24, 13, -23, -12, 22, 11, -21, -10, 20, 9, -19, -8};
    Matrix m1(vals1, 3, 4);
    Matrix m2(vals2, 3, 4);
    Matrix m3 = m1 - m2;
    CHECK(m3(0, 0) == -23);
    CHECK(m3(0, 1) == -11);
    CHECK(m3(0, 2) == 26);
    CHECK(m3(0, 3) == 16);
    CHECK(m3(1, 0) == -17);
    CHECK(m3(1, 1) == -5);
    CHECK(m3(1, 2) == 28);
    CHECK(m3(1, 3) == 18);
    CHECK(m3(2, 0) == -11);
    CHECK(m3(2, 1) == 1);
    CHECK(m3(2, 2) == 30);
    CHECK(m3(2, 3) == 20);
    m1 -= m2;
    CHECK(m1(0, 0) == -23);
    CHECK(m1(0, 1) == -11);
    CHECK(m1(0, 2) == 26);
    CHECK(m1(0, 3) == 16);
    CHECK(m1(1, 0) == -17);
    CHECK(m1(1, 1) == -5);
    CHECK(m1(1, 2) == 28);
    CHECK(m1(1, 3) == 18);
    CHECK(m1(2, 0) == -11);
    CHECK(m1(2, 1) == 1);
    CHECK(m1(2, 2) == 30);
    CHECK(m1(2, 3) == 20);
}
    
   