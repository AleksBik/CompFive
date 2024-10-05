#include "arrayLib.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

extern "C" {
    __declspec(dllexport) void fillArray(int arr[], int size) {
		srand(time(0));
		for (int i = 0; i < size; ++i) {
			arr[i] = rand() % 101 - 50;
		}
	}
	__declspec(dllexport) void replaceArray(int arr[], int size) {
		for (int i = 0; i < size; i++) {
			if (arr[i] < 0) {
				arr[i] = arr[i] * arr[i];
			}
		}
	}
	__declspec(dllexport) void printArray(const int arr[], int size) {
		std::cout << "Array: ";
		for (int i = 0; i < size; ++i) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
}

