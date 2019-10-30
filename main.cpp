#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "findSSN.h"

int main(int argc, char const *argv[]) {
  if(argc != 2){
    std::cout << "Filename required.";
    return 0;
  }

  std::string inFileName = argv[1];
  std::string outFileName = "redacted_" + inFileName;

  //open files for reading and writing
  std::ifstream infile;
  infile.open(inFileName);
  std::ofstream outfile;
  outfile.open(outFileName);

  std::string text;
  std::string ending;

  if( infile.is_open() ){

    //extracts space seperated words
    while( infile >> text ){

      text = redactSSN(text);
      outfile << text << ' ';
    }
    infile.close();
    outfile.close();
  }

  return 0;
}
