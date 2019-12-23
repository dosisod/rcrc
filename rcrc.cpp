#include <iostream>

#include "fileIO.cpp"
#include "algs.cpp"

void print(std::string);

int main() {
	File f("testing.txt");

	f.for_each([](std::string str) {
		print(str);
	});

	return 0;
}

void print(std::string str) {
	static int linenumber=2;
	static std::string last;

	if (last.length()>0) {
		int repeated=first_non_match(str, last);
		std::cout << repeated << "\t";
		std::cout << std::string(repeated, 'x');
		std::cout << "\t\t" << str << "\n";
		linenumber++;
	}
	else {
		std::cout << "\t\t\t" << str << "\n";
	}
	last=str;
}