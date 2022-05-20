#include <iostream>
#include <cstring>
#include "Registereduser.h"
#include "Contestant.h"
#include "Vote.h"
using namespace std;

class Administrator : public User
{
private :
  int AID;
  string Aname;

public:
  Administrator();
  void setUserDetails(int ID, string Aname, string userName , char password[10] , string Contctumber);
  void displayDetails();
  void checkUser();
  
  ~Administrator();
};