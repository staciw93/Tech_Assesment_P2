This program redacts social security numbers from a file which is given as a
command line argument. It was originally meant to solve problem 2 of the
technical assessment for the Software Engineer position at NWPCA, however it
does not fully meet the requirements.

I did not understand how to open multiple files in C++ so I decided to redo the
project in python. This was a good decision and much easier to complete. I
decided to keep this project because I think that it shows more ability than the
other C++ project and I still enjoyed making it.

To compile and run the program I use the following commands in the Visual
Studio Developer Command Prompt:
  cl main.cpp findSSN.cpp
  main.exe test1.txt

I also used Catch to create unit tests for the findSSN.cpp file which can be
ran using the following command:
  cl unittest.cpp findSSN.cpp
  unittest.exe
Catch does not require any installation for use which is why I chose this for
my testing. It is just a header file which is included in this folder.
