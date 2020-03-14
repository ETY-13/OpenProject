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
using std::to_string;

TEST_CASE("Return a vector") {
	INFO("Function must return a empty vector");
	REQUIRE(fizzBuzz(0) == vector<string>{});

	INFO("Function must return a vector with the string '1'");
	REQUIRE(fizzBuzz(1) == vector<string>{"1"});

	INFO("Function must return a vector with string '1,''2,''3,''4,'5' ");
	REQUIRE(fizzBuzz(5) == vector<string>{"1,", "2,", "3,", "4,", "5"});

	INFO("Function must return a vector of 50 string number: '1,',...'50' ");
	REQUIRE(fizzBuzz(50) == vector<string>{ "1,", "2,", "3,", "4,", "5,", "6,",
											"7,", "8,", "9,", "10,", "11,", "12,",
											"13,", "14,", "15,", "16,", "17,", "18,",
											"19,", "20,", "21,", "22,", "23,","24,",
											"25,", "26,", "27,", "28,", "29,", "30,", 
											"31,", "32,", "33,", "34,","35,", "36,", 
											"37,", "38,", "39,", "40,", "41,", "42,", 
											"43,", "44,", "45,","46,", "47,", "48,", 
											"49,", "50" });
}
