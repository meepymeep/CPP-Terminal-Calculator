#pragma once
#include <iostream>

void goToY(int y) {
	for (size_t i = 1; i < y; i++) {
		std::cout << "\n";
	}
}

void goToX(int x) {
	for (size_t i = 1; i < x; i++) {
		std::cout << " ";
	}
}
