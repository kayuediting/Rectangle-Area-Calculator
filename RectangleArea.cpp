#include <iostream>

int main() {
	double length, width;
	char q;

	std::cout << "Hello, welcome to my first project: The rectangle area calculator. Press q and then enter to continue." << '\n';

	q = std::cin.get();

	if (q == 'q') {
		std::cout << "Please enter the length of your rectangle." << '\n';
	}

	std::cin >> length;

	std::cout << "Now, enter the width of the rectangle: " << '\n';

	std::cin >> width;

	std::cout << "The area of your rectangle is " << length * width << ". If you would like to calculate the area of another rectangle, please reopen the .exe file.";

}