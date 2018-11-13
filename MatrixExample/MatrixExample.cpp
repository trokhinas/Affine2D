#include "Matrix.h"
#include "AffineTransform.h"

using namespace std;

void main()
{

	Matrix<int> M(2, 2);
	cout << "Input M ->\n ";
	cin >> M;

	double a[4] = {1, 1, 4, -2};
	Matrix<> A(2, 2, a);

	double b[4] = {1, 0, 4, 2};
	Matrix<> B(2, 2, b);

	Matrix<> C = A*B;
	cout
		<< endl << "A =" << endl << A
		<< endl << "B =" << endl << B
		<< endl << "C =" << endl << C
		<< endl << "A+B =" << endl << (A + B)
		<< endl << "A-B =" << endl << (A - B)
		<< endl << "T(1,2) =" << endl << Translation(1, 2)
		<< endl << "R(0) =" << endl << Rotation(0)
		<< endl << "R(90) =" << endl << Rotation(90)
		<< endl << "R(180) =" << endl << Rotation(180)
		<< endl << "R(270) =" << endl << Rotation(270)
		<< endl << "R(360) =" << endl << Rotation(360)
		<< endl << "M =" << endl << M;

	system("pause");
}
