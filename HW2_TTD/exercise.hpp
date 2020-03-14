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
	return generator;
}