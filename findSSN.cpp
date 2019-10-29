#include "findSSN.h"


bool isNum(char inputChar){

  bool retVal = 0;

  // vector of digits to compare to string
  std::vector<char> digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  // check if input is not empty and in the vector
  if(std::count(digits.begin(), digits.end(), inputChar)){
    retVal = 1;
  }

  return retVal;
}

bool isSSN(std::string inputString){
  bool ans = 0;

  //convert string to char array
  char *charArray = new char[inputString.size() + 1];
  inputString.copy(charArray, inputString.size() + 1);

  // long if statement for ###-##-#### format
  // check length first to avoid errors
  if(inputString.length() == 11 && isNum(charArray[0]) && isNum(charArray[1])
&& isNum(charArray[2]) && charArray[3] == '-' && isNum(charArray[4])
&& isNum(charArray[5]) && charArray[6] == '-' && isNum(charArray[7])
&& isNum(charArray[8]) &&  isNum(charArray[9]) && isNum(charArray[10])){
  ans = 1;
}
  return ans;
}
