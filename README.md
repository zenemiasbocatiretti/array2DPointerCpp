# array2DPointerCpp
Example of declaration of two dimensional array using pointers

This program declares a two dimensional array using pointers, then using dynamic memory.
The array is 2 x 2 (2 rows by 2 columns). It can be called a matrix 2 x 2.
Using dynamic memory (heap) you save the use of stack.
Given that the number of space available for stack is very limited compared to heap, when we declare an array of 2D we are very restricted in number of rows and columns.
Allocating dynamically we have more freedom to create 2D arrays because we have more available memory.

List of task implemented in this example:
* Declare a bi-dimensional array using pointers
* Insert values in all positions of the array
* Show inserted values
* Update a value of the array passing the array as a function parameter
* Show the array values
* Clean up the array from memory (very important to avoid memory leak)
