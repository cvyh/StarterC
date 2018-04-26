#pragma once
/**
* A: An integer array
* index1: the first index
* index2: the second index
*/
void swap(int A[], int index1, int index2) {
	
	int temp;
	temp = A[index1];
	A[index1] = A[index2];
	A[index2] = temp;
}

