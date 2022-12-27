#include <iostream>
#include <bits/stdc++.h>  
#include <fstream>
#include<sstream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;
//
// created some string functions for own use
//
// Read file to string method
// #include <bits/stdc++.h>  and 
//#include <fstream>
//#include<sstream>
//
// read file to string function (adapted)
// filepath - place file in same directory as main.cpp
// eg. filepath passed from "test_input3.txt"
string readMyfile(string filepath){
   ifstream f(filepath);
   string strp;
   if(f) {
      ostringstream ss;
      ss << f.rdbuf();
      strp = ss.str();
   }
   strp.pop_back(); 
   f.close();
  return strp;
}
//
//
string swapc(string s, int p, int q) {
//p is first position index, q is second position index
       char b;
       b = s[q]; 
       s[q]=s[p];
       s[p] = b;
       return s;
}
//
string insertc(string s, char c, int p){
//c is the character to insert, p is the position index to insert. 
//the string will become larger by one character.
  string c1;
  c1= c;
  s.insert(p,c1);
  //cout<<c1<<"  "<<s<<endl;
  return s;
}
//
string movec(string s,int p, int q){
/* p is position index of the character to be moved, q is the position index to be moved to in final string
This means if the position p is before q, then the insertion point is after the character in position q before the character at p is extracted out.
If position p is after q, then the insertion point is before the character in position q, before the character at p is extracted out.
*/
   int i;
   char c;
   c = s[p];
   cout <<"c ="<<s[p]<<endl;
   if(p<q){
      i = q - p;
      while(i--){
         s[p]=s[p+1];
         p++;
      }
   } else {
     i = p - q;
     while(i--) {
          s[p]=s[p-1];
          p--;
     }
   }
   s[q]=c;
   cout<<" q="<<q<<"s[q] ="<<s[q]<<endl;
   return s;
}


int main() {
  // read from file
  string prepal = readMyfile("test_input3.txt");
  cout<<prepal<<endl;
  cout<<prepal.length()<<endl;
  // move last element to front
  string prepal1 = movec(prepal,9,0);
  cout<<prepal1 <<endl;
  prepal1 = movec(prepal1,7,8);
  cout<<prepal1 <<endl;
  prepal1 = swapc(prepal1,6,2);
  cout<<prepal1 <<endl;
  prepal1 = movec(prepal1,3,6);
  cout<<prepal1 <<endl;
  string prepalf = insertc(prepal1,'X',5);
  cout<<prepalf <<endl;
  return 0;
}