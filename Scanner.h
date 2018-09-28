//scanner
#ifdef SCANNER_
#define SCANNER_
#include <iostream>
#include <fstream>
using namespace std;

class scanner { // AKA the inputStream
  //constructor
  /*
  int lineNumber, index;
  string fileContents;
  scanner (string fileName){
    int lineNumber = 1;
    int index = 0;

    ifstream is (fileName);
    char c;
    while (is.get(c)){
      fileContents =fileContents + c;
      if (c = '\n'){
        lineNumber++;
      }
    }
    is.close;
  }
  //pass in file name
  //open
  //read 1 char by 1 char
  //make it into a STRING
  */
  char currentChar(){
    //if index>= string.length --> return -1
    //else return index
  }
  void advance (){
    //if past end of line --> do nothing
    //if index = \n (newline) --> line_number++ index++
  }


};
#endif scanner
