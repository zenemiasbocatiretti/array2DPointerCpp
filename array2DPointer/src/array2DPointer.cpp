#include <iostream>
using namespace std;

bool updateValue(int rowNumber, int colNumber, int newValue, int** a) {
	cout << "Trying to update value of the array using a function..." << endl;
	a[rowNumber][colNumber] = newValue;
	return true;
}

void showArrayValues(int numberOfRowsCols, int** a) {
	cout << "Showing values from the array using a function..." << endl;
	for(int i = 0; i<numberOfRowsCols; ++i) {
		for(int j = 0; j<numberOfRowsCols; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

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

	showArrayValues(rowColCount, array2D);

	bool result;
	result = updateValue(0, 1, 25, array2D);
	if ( result ) cout << "Value successfully updated!" << endl;

	showArrayValues(rowColCount, array2D);

	cout << "Cleaning up the array from memory..." << endl;
	for(int i = 0; i < rowColCount; ++i) {
	    delete [] array2D[i];
	}
	delete [] array2D;

	return 0;
}
