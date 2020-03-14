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
	REQUIRE(fizzBuzz(0) == vector<string>{});

	INFO("Function must return a vector with the string '1'");
	REQUIRE(fizzBuzz(1) == vector<string>{"1"});

	INFO("Function must return a vector with string '1,''2,''3,''4,'5' ");
	REQUIRE(fizzBuzz(5) == vector<string>{"1,", "2,", "3,", "4,", "5,"});


}
