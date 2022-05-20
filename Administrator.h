#include <iostream>
#include <cstring>
#include "Registereduser.h"
#include "Contestant.h"
#include "Vote.h"
using namespace std;

class Administrator : public User
{
private :
  Vote* votet[10];
  int AID ;
  string Aname;

public:
  Administrator();
  void setUserDetails(int ID , string name , string userName , char pword[10] , string contctNo);
  void displayDetails();
  
  ~Administrator();
};