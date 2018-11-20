#include "Matrix.h"
#include "AffineTransform.h"
#include "Model2D.h"

using namespace std;

void main()
{

	/*Matrix<int> M(2, 2);
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
		<< endl << "M =" << endl << M;*/

	double v[15] = {
		1, 1, 5, 5, 6,
		4, 1, 1, 4, 11,
		1, 1, 1, 1, 2
	};
	Matrix<> V(3, 5, v);

	int e[25] = {
		0, 1, 0, 1, 1,
		1, 0, 1, 0, 0,
		0, 1, 0, 1, 0,
		1, 0, 1, 0, 1,
		1, 0, 0, 1, 0
	};
	Matrix<int> E(5, 5, e);

	Model2D m(V, E);
	

	cout << m;

	double v[6] = {
		2, 1,
		3, 0, 
		1, 1 };
	Matrix<> V(3, 2, v);
	int e[2] = { 1, 2 };

	Matrix<int> E(1, 2, e);
	Model2D model(V, E);
	cout
		<< endl << "Edges:" << endl << model.getEdges()
		<< endl << "Vertices before AT:" << endl << model.getVertices();
	model.apply(Rotation(90));
	cout
		<< endl << "Vertices after AT:" << endl << model.getVertices();
	system("pause");
}
