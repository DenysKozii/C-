#ifndef _VECTOR_
#define _VECTOR_

#include<iostream>
#include<exception>

using namespace std;

class ZeroDimension: public exception{
public:
    const char* what(){
        return "Dimension is 0";
    }
};

class IndexOutOfRangeException: public exception{
public:
    const char* what(){
        return "index is out of range ";
    }
};

class NotEqualDimensions: public exception{
public:
    const char* what(){
        return "Not equal dimensions in vectors ";
    }
};

class Vector {
private:
    int dim{3};
    double *coordinates;
public:
    Vector(int dim, int initialize) {
        if (dim == 0)
            throw ZeroDimension();
        this->dim = dim;
        this->coordinates = new double[dim];
        if (initialize) {
            this->writeCoordinates();
        }
    }

    Vector(int dim, double *coordinates) {
        if (dim == 0)
            throw ZeroDimension();
        this->dim = dim;
        this->coordinates = coordinates;
    }

    Vector() {
        if (dim == 0)
            throw ZeroDimension();
        this->coordinates = new double[dim];
    }

    void print();

    void fillCoordinates(int dim, double *coordinates);

    double scalarProduct(Vector other);

    Vector vectorProductIn3D(Vector other);

    void writeCoordinates();

    double *getCoordinates() const;

    void setCoordinates(double *coordinates);

    double getCoordinate(int index);

    void setCoordinate(int index, double el);

    int getDim() const;

    void setDim(int dim_);
};

#endif