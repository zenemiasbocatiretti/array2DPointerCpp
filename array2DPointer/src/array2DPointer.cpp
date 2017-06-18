#include <iostream>
using namespace std;

int main () {


	//set row and colCount (2 x 2 - two rows and two columns)
	int rowColCount = 2;

	cout << "Declaring a bi-dimensional array using pointers..." << endl;

	int** array2D;
	array2D = new int*[rowColCount];
	for(int i = 0; i < rowColCount; ++i)
	    array2D[i] = new int[rowColCount];

	cout << "Inserting values in all positions of the array..." << endl;
	array2D[0][0] = 10;
	array2D[0][1] = 20;
	array2D[1][0] = 30;
	array2D[1][1] = 40;

	cout << "Showing values in the array..." << endl;
	for(int i = 0; i<rowColCount; ++i) {
		for(int j = 0; j<rowColCount; ++j) {
			cout << array2D[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Cleaning up the array from memory..." << endl;

	for(int i = 0; i < rowColCount; ++i) {
	    delete [] array2D[i];
	}
	delete [] array2D;

	return 0;
}
