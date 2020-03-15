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

	{
		INFO("Function must return a empty vector");
		REQUIRE(fizzBuzz(0, false, false) == vector<string>{});
	}

	{
		INFO("Function must return a vector with the string '1'");
		REQUIRE(fizzBuzz(1, false, false) == vector<string>{"1"});
	}

	{
		INFO("Function must return a vector with string '1,''2,''3,''4,'5' ");
		REQUIRE(fizzBuzz(5, false, false) == vector<string>{"1,", "2,", "3,", "4,", "5"});
	}

	{
		INFO("Function must return a vector of 50 string number: '1,',...'50' ");
		REQUIRE(fizzBuzz(50, false, false) == vector<string>{ "1,", "2,", "3,", "4,", "5,", "6,",
															  "7,", "8,", "9,", "10,", "11,", "12,",
															  "13,", "14,", "15,", "16,", "17,", "18,",
															  "19,", "20,", "21,", "22,", "23,", "24,",
														   	  "25,", "26,", "27,", "28,", "29,", "30,",
															  "31,", "32,", "33,", "34,", "35,", "36,",
															  "37,", "38,", "39,", "40,", "41,", "42,",
															  "43,", "44,", "45,", "46,", "47,", "48,",
															  "49,", "50"                               });
	}

	{
		INFO("Function must return a generated vector of 100 string number");
		REQUIRE(fizzBuzz(100, false, false) == vector<string> { "1,", "2,", "3,", "4,", "5,", "6,",
																"7,", "8,", "9,", "10,", "11,", "12,",
																"13,", "14,", "15,", "16,", "17,", "18,",
																"19,", "20,", "21,", "22,", "23,", "24,",
																"25,", "26,", "27,", "28,", "29,", "30,",
																"31,", "32,", "33,", "34,", "35,", "36,",
																"37,", "38,", "39,", "40,", "41,", "42,",
																"43,", "44,", "45,", "46,", "47,", "48,",
																"49,", "50,", "51,", "52,", "53,", "54,",
																"55,", "56,", "57,", "58,", "59,", "60,",
																"61,", "62,", "63,", "64,", "65,", "66,",
																"67,", "68,", "69,", "70,", "71,", "72,",
																"73,", "74,", "75,", "76,", "77,", "78,",
																"79,", "80,", "81,", "82,", "83,", "84,",
																"85,", "86,", "87,", "88,", "89,", "90,",
																"91,", "92,", "93,", "94,", "95,", "96,",
																"97,", "98,", "99,", "100"               });
	}
}

TEST_CASE("Change every integer divisible by 3 to Fizz") {

	{
		INFO("'3' should be changed to fizz");
		REQUIRE(fizzBuzz(3, true, false) == vector<string>{"1,", "2,", "fizz"});
	}

	{
		INFO("'3', '6', '9', and '12' should be 'fizz'");
		REQUIRE(fizzBuzz(12, true, false) == vector<string>{"1,", "2,", "fizz,", "4,", "5,", "fizz,",
			"7,", "8,", "fizz,", "10,", "11,", "fizz"});
	}

	{
		INFO("All number divisible by 3 is 'fizz'");
		REQUIRE(fizzBuzz(100, true, false) == vector<string>{ "1,", "2,", "fizz,", "4,", "5,", 
															  "fizz,", "7,", "8,", "fizz,", "10,", 
															  "11,", "fizz,", "13,", "14,", "fizz,", 
															  "16,", "17,", "fizz,", "19,", "20,",
															  "fizz,", "22,", "23,", "fizz,", "25,", 
															  "26,", "fizz,", "28,", "29,", "fizz,",
															  "31,", "32,", "fizz,", "34,", "35,", "fizz,",
															  "37,", "38,", "fizz,", "40,","41,", "fizz,", 
															  "43,", "44,", "fizz,", "46,", "47,", "fizz,", 
															  "49,", "50,","fizz,", "52,", "53,", "fizz,", 
															  "55,", "56,", "fizz,", "58,", "59,", "fizz,",
															  "61,", "62,", "fizz,", "64,", "65,", "fizz,", 
															  "67,", "68,", "fizz,", "70,","71,", "fizz,", 
															  "73,", "74,", "fizz,", "76,", "77,", "fizz,", 
															  "79,", "80,","fizz,", "82,", "83,", "fizz,", 
															  "85,", "86,", "fizz,", "88,", "89,", "fizz,",
															  "91,", "92,", "fizz,", "94,", "95,", "fizz,", 
															  "97,", "98,", "fizz,", "100"                 });
	}
}

TEST_CASE("Change every integer divisible by 5 to buzz") {

	{
		INFO("'5' should be buzz");
		REQUIRE(fizzBuzz(5, false, true) == vector<string>{ "1,", "2,", "3,", "4,", "buzz" });
	}

	{
		INFO("'5','10,'15','20'should be buzz");
		REQUIRE(fizzBuzz(20, false, true) == vector<string>{"1,", "2,", "3,", "4,", "buzz,","6,",
															"7,","8,","9,","buzz,","11,","12,","13,",
											         		"14,","buzz,","16,","17,","18,","19,","buzz"});
	}

	{
		INFO("All number divisible to 5 should be buzz");
		REQUIRE(fizzBuzz(100, false, true) == vector<string>{"1,", "2,", "3,", "4,", "buzz,", "6,",
															 "7,", "8,", "9,", "buzz,", "11,", "12,",
															 "13,", "14,", "buzz,", "16,", "17,", "18,",
				                                             "19,", "buzz,", "21,", "22,", "23,", "24,",
															 "buzz,", "26,", "27,", "28,", "29,", "buzz,",
															 "31,", "32,", "33,", "34,", "buzz,", "36,",
														   	 "37,", "38,", "39,", "buzz,", "41,", "42,",
															 "43,", "44,", "buzz,", "46,", "47,", "48,",
														     "49,", "buzz,", "51,", "52,", "53,", "54,",
															 "buzz,", "56,", "57,", "58,", "59,", "buzz,",
														     "61,", "62,", "63,", "64,", "buzz,", "66,",
														     "67,", "68,", "69,", "buzz,", "71,", "72,",
															 "73,", "74,", "buzz,", "76,", "77,", "78,",
															 "79,", "buzz,", "81,", "82,", "83,", "84,",
															 "buzz,", "86,", "87,", "88,", "89,", "buzz,",
															 "91,", "92,", "93,", "94,", "buzz,", "96,",
															 "97,", "98,", "99,", "buzz"               });
	}

}

TEST_CASE("Test for fizzBuzz: divisible by 3 is fizz, divisible by 5 is buzz, and divisible by both is fizzBuzz") {

	{
		INFO("3 is fizz, 5 is buzz, 15 is fizzBuzz");
		REQUIRE(fizzBuzz(15,true,true) == vector<string>{ "1,", "2,", "fizz,", "4,", "buzz,", "fizz,", "7,", "8,", 
														  "fizz,","buzz,", "11,", "fizz,", "13,", "14,", "fizzBuzz"});
	}

	{
		INFO("All divisible by 3 is fizz, all divisible by 5 is buzz, all divisible by both is fizzBuzz");
		REQUIRE(fizzBuzz(100, true, true) == vector<string> { "1,", "2,", "fizz,", "4,", "buzz,", "fizz,", "7,", 
															  "8,", "fizz,", "buzz,","11,", "fizz,", "13,","14,", 
															  "fizzBuzz,", "16,", "17,", "fizz,", "19,","buzz,", 
															  "fizz,", "22,", "23,", "fizz,", "buzz,","26,", 
															  "fizz,","28,","29,","fizzBuzz,","31,","32,", 
															  "fizz,","34,","buzz,","fizz,", "37,","38,",
															  "fizz,","buzz,", "41,","fizz,", "43,", "44,", 
															  "fizzBuzz,","46,", "47,","fizz,", "49,", "buzz,", 
															  "fizz,", "52,", "53,", "fizz,", "buzz,", "56,","fizz,", 
															  "58,", "59,", "fizzBuzz,", "61,", "62,", "fizz,", "64,", 
															  "buzz,","fizz,", "67,", "68,", "fizz,", "buzz,", "71,", 
															  "fizz,", "73,","74,","fizzBuzz,", "76,", "77,", "fizz,", 
															  "79,", "buzz,", "fizz,","82,", "83,","fizz,", "buzz,", 
															  "86,", "fizz,", "88,", "89,","fizzBuzz,", "91,", "92,",
															  "fizz,", "94,", "buzz,", "fizz,","97,", "98,", "fizz,", "buzz"});
	}

	
}
