#include "10.cpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <exception>

using namespace std;

void Vector::writeCoordinates() {
    double element;
    for (int i = 0; i < this->dim; ++i) {
        cout << "cord[" << i << "] = ";
        cin >> element;
        this->setCoordinate(i, element);
    }
}

void Vector::setCoordinate(int index, double element) {
    this->coordinates[index] = element;
}

int Vector::getDim() const {
    return dim;
}

void Vector::setDim(int dim_) {
    Vector::dim = dim_;
}

double *Vector::getCoordinates() const {
    return coordinates;
}

void Vector::setCoordinates(double *coordinates) {
    Vector::coordinates = coordinates;
}

void Vector::fillCoordinates(int dim, double *coordinates) {
    this->dim = dim;
    this->coordinates = coordinates;
}

double Vector::getCoordinate(int index) {
    if (index >= this->getDim()) {
        throw IndexOutOfRangeException();
    }
    return this->coordinates[index];
}

double Vector::scalarProduct(Vector other) {
    try{
        if (this->getDim() != other.getDim()) {
            throw NotEqualDimensions();
        }
    } catch(NotEqualDimensions e){
        cout << e.what();
        _exit(0);
    }
    double res = 0;
    for (int i = 0; i < this->getDim(); ++i) {
        res += this->getCoordinate(i) * other.getCoordinate(i);
    }
    return res;
}

Vector Vector::vectorProductIn3D(Vector other) {
    try{
        if (this->getDim() != other.getDim())
            throw NotEqualDimensions();
        if (other.getDim() != 3)
            throw IndexOutOfRangeException();
    } catch(exception e){
        cout << e.what();
    }
    Vector res = {3, false};
    res.setCoordinate(0, this->getCoordinate(1) * other.getCoordinate(2) - this->getCoordinate(2) * other.getCoordinate(1));
    res.setCoordinate(1, this->getCoordinate(2) * other.getCoordinate(0) - this->getCoordinate(0) * other.getCoordinate(2));
    res.setCoordinate(2, this->getCoordinate(0) * other.getCoordinate(1) - this->getCoordinate(1) * other.getCoordinate(0));
    return res;
}

void Vector::print() {
    cout << "vector = ";
    for (int i = 0; i < this->getDim(); ++i) {
        cout << this->getCoordinate(i) << " ";
    }
}


Vector getVector(const string &filename) {
    vector<double> numbers;
    try{
        ifstream inputFile(filename);
        int current_number = 0;
        while (inputFile >> current_number)
            numbers.push_back(current_number);
        inputFile.close();
    }catch(exception e){
        cout << e.what();
        _exit(0);
    }
    int dim = numbers.size();
    auto *coords = new double[dim];
    for (int i = 0; i < dim; ++i) {
        coords[i] = numbers.at(i);
    }
    return {dim, coords};
}

int main() {
    Vector first, second;
    first = getVector("first.txt");
    second = getVector("second.txt");
    double res = first.scalarProduct(second);
    cout << "product = " << res;

    Vector product;
    product = first.vectorProductIn3D(second);
    cout << "Vector product = ";
    product.print();
}