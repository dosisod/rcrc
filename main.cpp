#include <iostream>

#include "fileIO.cpp"
#include "algs.cpp"

int main() {
	File f("english.txt");

	f.for_each([](std::string str) {
		std::cout << str << "\n";
	});

	return 0;
}