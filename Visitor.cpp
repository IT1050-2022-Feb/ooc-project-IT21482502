#include<iostream>

#include "Visitor.h"
#include<cstring>

using namespace std;

Visitor::Visitor()
{
  UserID = 0;
  strcpy(userName,"");
  strcpy(userAddress,"");
  strcpy(userEmail,"");
  strcpy(gender,"");
  strcpy(phone,"");
  
}

Visitor::Visitor(int uID, char uName[], char uAddress[], char uEmail[], char uGender[], int uPhone[] )
{
  UserID = uID;
  strycpy (UserName, uName);
  strycpy(userAddress, uAddress);
  strycpy(userEmail, uEmail);
  strycpy(gender, uGender);
  strycpy(phone,uPhone);
  
}

void Visitor::Register ()
{
  
}
void Visitor::verifyRegister()
{
  
}

Visitor::~Visitor()
{
  
}