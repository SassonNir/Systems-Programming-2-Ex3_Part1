#include "Matrix.hpp"


namespace zich {
    Matrix::Matrix(std::vector<double> values, int rows, int columns) {
        this->rows = rows;
        this->cols = columns;
        this->size = rows * columns;
        this->data = new double[(size_t)this->size];
        for (size_t i = 0; i < (size_t)this->size; i++) {
            this->data[i] = values[i];
        }
    }
    Matrix::~Matrix() {
    }

    // Addition
    Matrix Matrix::operator+(const Matrix& other) const {
        return other;
    }
    Matrix& Matrix::operator+=(const Matrix& other) {
        return *this;
    }
    Matrix Matrix::operator+() const {
        return *this;
    }

    // Subtraction
    Matrix Matrix::operator-(const Matrix& other) const {
        return other;
    }
    Matrix& Matrix::operator-=(const Matrix& other) {
        return *this;
    }
    Matrix Matrix::operator-() const {
        return *this;
    }

    // Comparison operators
    bool Matrix::operator>(const Matrix& other) const {
        return false;
    }
    bool Matrix::operator>=(const Matrix& other) const {
        return false;
    }
    bool Matrix::operator<(const Matrix& other) const {
        return false;
    }
    bool Matrix::operator<=(const Matrix& other) const {
        return false;
    }
    bool Matrix::operator==(const Matrix& other) const {
        return false;
    }
    bool Matrix::operator!=(const Matrix& other) const {
        return false;
    }

    // Increment and decrement operators (prefix and postfix)
    Matrix& Matrix::operator++() {
        return *this;
    }
    Matrix Matrix::operator++(int) {
        return *this;
    }
    Matrix& Matrix::operator--() {
        return *this;
    }
    Matrix Matrix::operator--(int) {
        return *this;
    }
    
    // Multiplication
    Matrix Matrix::operator*(const Matrix& other) const {
        return other;
    }
    Matrix& Matrix::operator*=(const Matrix& other) {
        return *this;
    }
    Matrix Matrix::operator*(double scalar) const {
        return *this;
    }
    Matrix& Matrix::operator*=(double scalar) {
        return *this;
    }
    Matrix operator*(double scalar, const Matrix& other) {
        return other;
    }

    // Division
    Matrix Matrix::operator/(double scalar) const {
        return *this;
    }
    Matrix& Matrix::operator/=(double scalar) {
        return *this;
    }
    Matrix operator/(double scalar, const Matrix& other) {
        return other;
    }

    // Accessing elements
    double& Matrix::operator()(int row, int column) {
        return this->data[row * this->cols + column];
    }

    double Matrix::operator()(int row, int column) const {
        return 0;
    }

    // Input and output
    std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
        return os;
    }
    std::istream& operator>>(std::istream& is, Matrix& matrix) {
        return is;
    }
    
}
