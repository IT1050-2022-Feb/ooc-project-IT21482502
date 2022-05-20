#include<iostream>
#include<cstring>
#include "RegisteredUser.h"
using namesspace std;

class Contestant : public User
{
private:
  int ID;
  string name;
public:
  Contestant();
  void setUserDetails(int VID, string Vname, string userName, char pw[10], char contactNo[10]);
  void displayDetails();
  ~Contestant();
};