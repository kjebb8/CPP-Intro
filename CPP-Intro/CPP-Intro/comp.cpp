//Class body file

#include "comp.h"

Computer::Computer()
{
  //Constructors can accept arguments, but this one does not
  processorspeed = 0;
}

Computer::~Computer()
{
  //Destructors do not accept arguments
}

void Computer::setspeed ( int p )
{
  // To define a function outside put the name of the class
  //  after the return type and then two colons, and then the name
  //  of the function.
  processorspeed = p;
}
int Computer::readspeed()
{
  // The two colons simply tell the compiler that the function is part
  //  of the class
  return processorspeed;
}
