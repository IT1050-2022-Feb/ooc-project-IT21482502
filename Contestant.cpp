#include <iostream>
#include "Contestant.h"
#include "RegisteredUser.h"
using namespace std;
 
Contestant::Contestant()
{
  void Contestant::setUserDetails(int VID, string Rname,string userName, char pw[10], char contactNo[10])
}

{
  ID = VID;
  name = Vname;
  username = userName;
  strcpy(password, pw);
  strcpy(contact, contactNo);
};
 
void Contestantt::displayDetails() {
  cout << "Voting Number is: " << ID << endl;
  cout << "Contestant Name is: " << name << endl;
  cout << "Username is: " << username << endl;
  cout << "Contact number is: " << contact[10] << endl;
};
void Contestantt::checkVotes()
{
  
};
 
Contestant::~Contestant()
{
  cout << " " << endl << endl;
}