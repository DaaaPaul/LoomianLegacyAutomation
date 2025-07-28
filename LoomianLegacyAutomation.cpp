#include <iostream>
#include "externals/robot-cpp/src/Mouse.h"

using namespace std;

int main() {
	cout << "Hello CMake." << endl;

	Robot::Mouse::MoveSmooth({ 100, 200 });
}
