#include <exception>
using namespace std;

class noneGetException: public exception
{
  virtual const char* what() const throw()
  {
    return "Called get on None.";
  }
} noneGetEx;

