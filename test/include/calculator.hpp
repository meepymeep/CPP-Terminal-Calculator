// include/calculator.hpp

#pragma once
#include <iostream>

#include "../util.h"

namespace Calculator {
	int addNums(int x, int y) {
		return x+y;
	}

	int subNums(int x, int y) {
		return x-y;
	}

	int multNums(int x, int y) {
		return x*y;
	}

	int divNums(int x, int y) {
		return x/y;
	}
}
