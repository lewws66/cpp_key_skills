#include <iostream>
#include <fstream>
#include<sstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;
// Successful attempt to read files into string
//
int main () {
  /*
//first method from w3schools
  // Create a text file
  ofstream MyWriteFile("filename.txt");

  // Write to the file
  MyWriteFile << "Files can be tricky, but it is fun enough!";
 
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }
  MyReadFile.close();
*/
// end of method from w3schools
//
// Alternate read file to string method
  
   ifstream f("test_input3.txt");
   string strp;
   if(f) {
      ostringstream ss;
      ss << f.rdbuf();
      strp = ss.str();
   }
   strp.pop_back(); 
   f.close();
// end of alternate read file to string method
//
// Best 3rd method of reading from file into string
/*
  ifstream file("test_input6.txt");
  if (!file.is_open()) {
    cerr << "Error: Could not open file " << "test_input3.txt" << endl;
    return 1;
  }
  // Read the file into a string
  string strp((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

strp.pop_back();

//This will remove all newline characters (or eof marker)from the strp string, resulting in a string with the same length as the one produced by directly inputting the text via the console.
  // Close the file
  file.close();
  //
  // Print the contents of the file to the console
  //cout << strp << endl;  
*/
  // end of 3rd method

  // Print out contents of string read
  long long int l1 = strp.length();
  cout<<" length ="<<l1<<endl;
  cout<<strp<<endl;
  
  return 0;
  }
