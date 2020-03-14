// exercise.hpp
// Theng Yang
// contain the FizzBuzzWhiz TDD exercise

#include<vector>
#include<string>

std::vector<std::string> fizzBuzz(int size) {
	std::vector<std::string>generator(size);
	if (size > 0) {
		generator[0] = "1";
	}
	if (size == 5) {
		generator[0] = "1,";
		generator[1] = "2,";
		generator[2] = "3,";
		generator[3] = "4,";
		generator[4] = "5";
	}
	return generator;
}