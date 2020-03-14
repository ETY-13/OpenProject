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


TEST_CASE("Return a vector generator") {

	INFO("Function must return a empty vector");
	REQUIRE(fizzBuzz(0,false,false) == vector<string>{});

	INFO("Function must return a vector with the string '1'");
	REQUIRE(fizzBuzz(1,false, false) == vector<string>{"1"});

	INFO("Function must return a vector with string '1,''2,''3,''4,'5' ");
	REQUIRE(fizzBuzz(5,false,false) == vector<string>{"1,", "2,", "3,", "4,", "5"});

	INFO("Function must return a vector of 50 string number: '1,',...'50' ");
	REQUIRE(fizzBuzz(50,false,false) == vector<string>{ "1,", "2,", "3,", "4,", "5,", "6,",
											"7,", "8,", "9,", "10,", "11,", "12,",
											"13,", "14,", "15,", "16,", "17,", "18,",
											"19,", "20,", "21,", "22,", "23,","24,",
											"25,", "26,", "27,", "28,", "29,", "30,", 
											"31,", "32,", "33,", "34,","35,", "36,", 
											"37,", "38,", "39,", "40,", "41,", "42,", 
											"43,", "44,", "45,","46,", "47,", "48,", 
											"49,", "50"                               });

	INFO("Function must return a generated vector of 100 string number");
	REQUIRE(fizzBuzz(100,false,false) == vector<string> { "1,", "2,", "3,", "4,", "5,", "6,", 
											  "7,", "8,", "9,", "10,", "11,", "12,",
											  "13,", "14,", "15,", "16,", "17,", "18,", 
											  "19,", "20,", "21,", "22,", "23,","24,", 
											  "25,", "26,", "27,", "28,", "29,", "30,", 
											  "31,", "32,", "33,", "34,","35,", "36,", 
											  "37,", "38,", "39,", "40,", "41,", "42,", 
											  "43,", "44,", "45,","46,", "47,", "48,",
											  "49,", "50,", "51,", "52,", "53,", "54,", 
											  "55,", "56,","57,", "58,", "59,", "60,", 
											  "61,", "62,", "63,", "64,", "65,", "66,", 
											  "67,","68,", "69,", "70,", "71,", "72,", 
											  "73,", "74,", "75,", "76,", "77,", "78,",
											  "79,", "80,", "81,", "82,", "83,", "84,", 
											  "85,", "86,", "87,", "88,", "89,","90,", 
											  "91,", "92,", "93,", "94,", "95,", "96,", 
											  "97,", "98,", "99,", "100"               });
}

TEST_CASE("Change every integer divisible by 3 to Fizz") {

	INFO("'3' should be changed to fizz");
	REQUIRE(fizzBuzz(3,true,false) == vector<string>{"1,", "2,", "fizz"});

	INFO("'3', '6', '9', and '12' should be 'fizz'");
	REQUIRE(fizzBuzz(15, true, false) == vector<string>{"1,", "2,", "fizz,", "4,", "5,", "fizz,",
														"7,", "8,", "fizz,", "10", "11", "fizz"});
}