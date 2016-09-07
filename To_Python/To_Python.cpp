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

	string line;

#pragma region READ_LOOP

	while (getline(file, line)) {

		cout << line << endl;

	}

#pragma endregion

	getchar();

	return 0;
}


string &interpret(const string &line) {



}