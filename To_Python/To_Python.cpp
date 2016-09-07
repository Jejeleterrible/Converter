#include "To_Python.hpp"


using namespace std;

int main(int argc, char **argv) {

#pragma region FILE_LOAD

	if (argc < 2) {
		cout << "bad number args" << endl;
		getchar();
		return 1;
	}

	ifstream file(argv[1]);

	if (!file) {
		cout << "error load" << endl;
		getchar();
		return 1;
	}

#pragma endregion

	std::string line;
	std::string new_line;

#pragma region READ_LOOP

	ofstream new_file("test.py");

	while (getline(file, line)) {

		new_line = interpret(line);
		new_file << new_line << endl;

	}

#pragma endregion


	getchar();

	return 0;
}


std::string interpret(const std::string &line) {

	std::string py_line;

	return py_line;

}