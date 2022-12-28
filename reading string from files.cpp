#include <iostream>
#include <fstream>
#include<sstream>
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
  filepath = "test_input8.txt";
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
  // Do something with the file content
  

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
// Alternate read file to string method
// #include <bits/stdc++.h>  and 
//#include <fstream>
//#include<sstream>
  /*
   ifstream f(filepath);
   string strp;
   if(f) {
      ostringstream ss;
      ss << f.rdbuf();
      strp = ss.str();
   }
   strp.pop_back();  // realised this may not be the best
   f.close();
*/
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

strp.pop_back();  // this may not be the best


This will remove all newline characters (or eof marker)from the strp string, resulting in a string with the same length as the one produced by directly inputting the text via the console.
  // Close the file
  file.close();
  //
  // Print the contents of the file to the console
  //cout << strp << endl;  
*/
  // end of 3rd method
  //strp ="ABBC";
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
  }
