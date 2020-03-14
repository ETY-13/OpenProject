// exercise.hpp
// Theng Yang
// contain the FizzBuzzWhiz TDD exercise

#include<vector>
#include<string>

std::vector<std::string> fizzBuzz(int size, bool fizz, bool buzz) {
	std::vector<std::string>generator(size);
	if (size > 0) {
		generator[0] = "1";
	}
	if (size > 0) {
		for (auto ii = 0; ii < size; ii++) {
			if ( ii == size - 1 ) {
				generator[ii] = std::to_string(ii + 1);
			}
			else {
				generator[ii] = std::to_string(ii + 1) + ",";
			}
		}
	}
	

	return generator;
}