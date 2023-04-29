// include/window.hpp

#include <iostream>
#include "../util.h"

class Window_Class {
private:
	int win_x;
	int win_y;

	int WIN_X_SIZE;
	int WIN_Y_SIZE;
public:
	Window_Class(int x, int y, int x_size, int y_size) {
		this->win_x = x;
		this->win_y = y;

		this->WIN_X_SIZE = x_size;
		this->WIN_Y_SIZE = y_size;
	}

	void render_window(int num1, int num2, int ans, char operator_thing) {
		goToY(this->win_y - 1);
		goToX(this->win_x);

		std::cout << "     *********************\n";
		goToX(this->win_x);

		std::cout << "     *  Meep Calculator  *\n";
		goToX(this->win_x);

		std::cout << "     *********************\n";

		goToX(this->win_x);

		for (size_t y = 1; y <= this->WIN_Y_SIZE; y++) {
			for (size_t x = 1; x <= this->WIN_X_SIZE; x++) {
				if (x == 1 || x == this->WIN_X_SIZE || y == WIN_Y_SIZE || y == 1) {
					std::cout << "*";
				}

				else if (x == 11 && y == 10) {
					if (!num1 == 0 && !num2 == 0 && !ans == 0 && operator_thing != ' ') {
						std::cout << num1 << " " << operator_thing << " " << num2 << " = " << ans;
					}
				}
				
				else {
					std::cout << " ";
				}
			}

			std::cout << "\n";
			goToX(this->win_x);
		}
	}
};
