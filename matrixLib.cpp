#include "matrixLib.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

extern "C" {
    __declspec(dllexport) void fillMatrix(int matrix[7][6]) {
		srand(time(0));
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 6; ++j) {
				matrix[i][j] = rand() % 101 - 50;
			}
		}
	}
	__declspec(dllexport) void replaceMatrix(int matrix[7][6]) {
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 6; ++j) {
				if (matrix[i][j] < 0) {
					matrix[i][j] = matrix[i][j] * matrix[i][j];
				}
			}
		}
	}
	__declspec(dllexport) void printMatrix(const int matrix[7][6]) {
		std::cout << "Matrix:\n";
		for (int i = 0; i < 7; ++i) {
			for (int j = 0; j < 6; ++j) {
				std::cout << matrix[i][j] << "\t";
			}
			std::cout << std::endl;
		}
	}
}
