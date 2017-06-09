//Header file with prototype body and function declaration

class Computer // Standard way of defining the class
{
public:
  // This means that all of the functions below this(and any variables)
  //  are accessible to the rest of the program.
  //NOTE: That is a colon, NOT a semicolon...
  Computer();
  // Constructor
  ~Computer();
  // Destructor
  void setspeed ( int p );
  int readspeed();
protected:
  // This means that all the variables under this, until a new type of
  //  restriction is placed, will only be accessible to other functions in the
  //  class.  NOTE: That is a colon, NOT a semicolon...
  int processorspeed;
};
// Do Not forget the trailing semi-colon
