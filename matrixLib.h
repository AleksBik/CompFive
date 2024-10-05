#ifndef MATRIXLIB_H
#define MATRIXLIB_H

extern "C" {
	__declspec(dllexport) void fillMatrix(int matrix[7][6]);
	__declspec(dllexport) void replaceMatrix(int matrix[7][6]);
	__declspec(dllexport) void printMatrix(const int matrix[7][6]);
}

#endif