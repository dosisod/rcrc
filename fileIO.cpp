#include "fileIO.hpp"

File::~File() {
	filestream.close();
}

void File::for_each(std::function<void(std::string)> func) {
	if (filestream.is_open()) {	
		std::string str;
		while (std::getline(filestream, str)) {
			func(str);
		}
	}
}
