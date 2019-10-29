#include <iostream>
#include <fstream>
#include <string>
#include "findSSN.h"

int main(int argc, char const *argv[]) {
  //todo: replace with command line args
  std::string inFileName = "test1.txt";
  std::string outFileName = "test1_redacted.txt";

  //open files for reading and writing
  std::ifstream infile;
  infile.open(inFileName);
  std::ofstream outfile;
  outfile.open(outFileName);

  std::string text;

  if( infile.is_open() ){
    while( getline(infile, text) ){
      std::cout << text << '\n';
      outfile << text << std::endl;
    }
    infile.close();
    outfile.close();
  }

  std::cout << "main fin\n";
  return 0;
}
