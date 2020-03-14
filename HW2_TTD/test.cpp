// main.cpp
// Theng Yang

// Contains TTD exercise for CS372

#define CATCH_CONFIG_MAIN
#include"catch.hpp"
#include"exercise.hpp"

#include<vector>
using std::vector;
#include<string>
using std::string;

TEST_CASE("Return a vector") {
	INFO("Function must return a empty vector");
	REQUIRE(fizzBuzz() == vector<string>{});
}
