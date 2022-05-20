#include <iostream>
#include "Administrator.h"
#include <cstring>
using namespace std;
	
Administrator::Administrator()
{
  
};

void Administrator::setUserDetails(int ID , string name , string userName , char pword[10] , string contctNo)
{
  AID =ID;
  Aname =name;
  username = userName;
  strcpy(password, pword);
  contact = contctNo;
};

void Administrator::setcontestantDetails(int VoteNo , string contestantName , char pword[10] , string contctNo)
{
  VNO =VoteNo;
  consname = contestantName;
  strcpy(password, pword);
  contact = contctNo;
};

// Display Administrator details
 void Administrator::displayDetails()
{
  cout<<"Username :"<<username<<constestantName<<endl;
  cout<<"AdminID :"<<AID<< endl;
  cout<<"Adminname :"<<Aname<< endl;
  cout<<"ContactNo:" <<contact<< endl;
};

void Administrator::updateDetails()
{
  
};

void Administrator::checkUser()
{
  
};

Administrator::~Administrator()
{
  cout << "" << endl << endl;
};