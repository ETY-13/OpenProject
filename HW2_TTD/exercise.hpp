// exercise.hpp
// Theng Yang
// contain the FizzBuzz() function for TDD exercise

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

	if (fizz) {
		for (auto step = 0; step < size; ++step) {
			if ((step+1)% 3 == 0) {
				if (step+1 == size ) {
					generator[step] = "fizz";
				}
				else {
					generator[step] = "fizz,";
				}
			}
		}
		
	}

	if (buzz) {
		for (auto step = 0; step < size; ++step) {
			if ((step + 1) % 5 == 0) {
				if (step + 1 == size) {
					generator[step] = "buzz";
				}
				else {
					generator[step] = "buzz,";
				}
			}
		}
	}

	if (fizz and buzz) {
		for (auto step = 0; step < size; ++step) {
			if ((step + 1) % 15 == 0) {
				if (step + 1 == size) {
					generator[step] = "fizzBuzz";
				}
				else {
					generator[step] = "fizzBuzz,";
				}
			}
		}
	}

	return generator;
}
