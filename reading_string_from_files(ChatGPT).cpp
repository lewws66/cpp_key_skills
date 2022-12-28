#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
//#include <cmath>
//#include <bits/stdc++.h> 
using namespace std;
// Successful attempt to read files into string
//
int main () {
  string strp;  // string to form from file
  string filepath; // for file name and location
  filepath = "test_input10.txt";
// Latest adapted from ChatGPT   
    string line;
    ifstream in(filepath);
    while (getline(in, line)) {
     if (in.eof()) {
       break;
    }
    strp += line + '\n';
    in.ignore();
    strp.pop_back();//using this for this routine works!
    //cout<<"loop"<<endl;
    in.close();
  }
// Print out contents of string read
  long long int l1 = strp.length();
  if(l1<255) {
    cout<<"strp is : "<<strp<<endl;
  } else {
    cout<<"string strp, more than 255 characters"<<endl;
    cout<<"Not going to print"<<endl;
  }

  cout<<"length = "<<l1<<endl;
  cout<<"Last character is : "<<strp[l1-1]<<endl;
  
  return 0;
  }   // end main

//
//
//first method from w3schools
  /*
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
  MyWriteFile.close();
*/
// end of method from w3schools
//