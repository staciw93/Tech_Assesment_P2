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

// determine if a string is a SSN
bool isSSN(std::string inputString);


#endif
