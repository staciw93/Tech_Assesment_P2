#include "findSSN.h"

bool isNum(std::string inputString){

  bool retVal = 0;

  // vector of digits to compare to string
  std::vector<std::string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

  // check if input is not empty and in the vector
  if(!inputString.empty() && std::count(digits.begin(), digits.end(), inputString)){
    retVal = 1;
  }

  return retVal;
}

bool isSSN(std::string inputString){
  return 0;
}
