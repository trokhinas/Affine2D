#ifndef MODEL2D_H
#define MODEL2D_H

#include <iostream>
#include "Matrix.h"
#include "AffineTransform.h"

using namespace std;

class Model2D
{
private:
	Matrix<> Vertices;
public:
	Matrix<> Affine;
};
#endif MODEL2D_H
