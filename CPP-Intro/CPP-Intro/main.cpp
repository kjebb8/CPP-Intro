//
//  main.cpp
//  CPP-Intro
//
//  Created by Keegan Jebb on 2017-06-08.
//  Copyright © 2017 Keegan Jebb. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

  //File IO
/*
int main()
{
  cout<<"HEY, you, I'm alive! Oh, and Hello World!\n";

  char str[10], str2[10];
  //Creates an instance of ofstream, and opens example.txt
  ofstream a_file ( "example.txt");

//File opening arguments
  //ios::app   -- Append to the file
  //ios::ate   -- Set the current position to the end
  //ios::trunc -- Delete everything in the file

  // Outputs to example.txt through a_file
  a_file<<"This text will now be inside of example.txt";
  // Close the file stream explicitly
  a_file.close();
  //Opens for reading the file
  ifstream b_file ( "example.txt" );

  //Checks if file is open
  if ( !b_file.is_open() ) {
    // The file could not be opened
  }
  else {
    // Safely use the file stream
    //Reads one string from the file
    b_file>> str>>str2;
    //Should output 'this'
    cout<< str <<"\n" << str2 << "\n";
    cin.get();    // wait for a keypress
    // b_file is closed implicitly here
  }
}
*/

// Intro to Classes
//Terminal run with g++ -o main main.cpp comp.cpp
//Apparently good practice to organize classes and functions with header and cpp files

/*
#include "comp.h"

int main()
{
  Computer compute;
  // To create an 'instance' of the class, simply treat it like you would
  //  a structure.  (An instance is simply when you create an actual object
  //  from the class, as opposed to having the definition of the class)
  compute.setspeed ( 100 );
  // To call functions in the class, you put the name of the instance,
  //  a period, and then the function name.
  cout<< compute.readspeed() << "\n";
}
*/

//Inline funcitons
//Inline functions are best for small functions that are called often
//When you call it the compiler will replace the function call with the actual code from the function
//Function calls on the stack can slow down the program

inline void hello()
{
  cout<<"hello";
}
int main()
{
  hello(); //Call it like a normal function...
  cin.get();
}
