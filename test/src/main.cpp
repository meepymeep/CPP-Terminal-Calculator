// src/main.cpp

#include <iostream>

#include <unistd.h>

#include "../include/window.hpp"
#include "../include/calculator.hpp"

int main(int argc, char* argv[]) {
	Window_Class win(35, 5, 30, 20);

	// booleans
	bool running = true;

	// integers
	int num1 = 0;
	int num2 = 0;
	int ans;

	// characters
	char operator_thing = ' ';

	system("clear");

	goToY(30);
	goToX(15);

	std::cout << "welcome to meep calculator\n";

	sleep(3);

	for (;;) {
		if (!running)
			break;

		l:
		system("clear");

		win.render_window(num1, num2, ans, operator_thing);

		std::cout << "\n\tEnter in first number: ";
		std::cin >> num1;

		std::cout << "\n\tThe operator?: ";
		std::cin >> operator_thing;

		std::cout << "\n\tNow the second one: ";
		std::cin >> num2;

		switch (operator_thing) {
		case '+':
			ans = Calculator::addNums(num1, num2);
			break;

		case '-':
			ans = Calculator::subNums(num1, num2);
			break;

		case '*':
		case 'x':
		case 'X':
			ans = Calculator::multNums(num1, num2);
			break;

		case '/':
			ans = Calculator::divNums(num1, num2);
			break;

		case ']':
			running = false;
			break;
		default:
			goto l;
		}
	}

	return 0;
}
