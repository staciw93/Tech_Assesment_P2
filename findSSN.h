#ifndef FINDSSN_HPP
#define FINDSSN_HPP

// Header file for helper functions used to determine if a
// string is a social security number in the format
// ###-##-####
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

// determine if a single character of a string is a number
bool isNum(char inputChar);

// if beginig of string is SSN replace with redacted SSN
std::string redactSSN(std::string inputString);

// replace beginging of string with redacted SSN


#endif
