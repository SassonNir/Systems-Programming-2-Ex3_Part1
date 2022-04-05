#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

namespace zich {
class Matrix {
   private:
    int rows, cols;
    int size;
    double* data;

   public:
    Matrix(std::vector<double> values, int rows, int columns);
    ~Matrix();

    // Addition
    Matrix operator+(const Matrix& other) const;  // c = this + other
    Matrix& operator+=(const Matrix& other);      // this = this + other
    Matrix operator+() const;                     // c = +this

    // Subtraction
    Matrix operator-(const Matrix& other) const;  // c = this - other
    Matrix& operator-=(const Matrix& other);      // this = this - other
    Matrix operator-() const;                     // c = -this

    // Comparison operators
    bool operator>(const Matrix& other) const;   // this > other
    bool operator>=(const Matrix& other) const;  // this >= other
    bool operator<(const Matrix& other) const;   // this < other
    bool operator<=(const Matrix& other) const;  // this <= other
    bool operator==(const Matrix& other) const;  // this == other
    bool operator!=(const Matrix& other) const;  // this != other

    // Increment and decrement operators (prefix and postfix)
    Matrix& operator++();    // this++
    Matrix operator++(int);  // c = this++;
    Matrix& operator--();    // this--
    Matrix operator--(int);  // c = this--

    // Multiplication
    Matrix operator*(const Matrix& other) const;                  // c = this * other
    Matrix& operator*=(const Matrix& other);                      // this = this * other
    Matrix operator*(double scalar) const;                        // c = this * scalar
    Matrix& operator*=(double scalar);                            // this = this * scalar
    friend Matrix operator*(double scalar, const Matrix& other);  // c = scalar * other

    // Division
    Matrix operator/(double scalar) const;                        // c = this / scalar
    Matrix& operator/=(double scalar);                            // this = this / scalar
    friend Matrix operator/(double scalar, const Matrix& other);  // c = scalar / other

    // Accessing elements
    double& operator()(int row, int column);
    double operator()(int row, int column) const;

    // Input and output
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    friend std::istream& operator>>(std::istream& is, Matrix& matrix);
};

}  // namespace zich