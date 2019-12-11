#include <functional>
#include <fstream>
#include <string>

class File {
public:
	File(std::string fname) :
		filename(fname),
		filestream(std::ifstream(filename)) {}

	~File();

	void for_each(std::function<void(std::string)> func);

private:
	std::string filename;
	std::ifstream filestream;
};
