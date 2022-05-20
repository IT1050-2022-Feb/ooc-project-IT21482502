#include<iostream>
#include<cstring>
#include<string>

#include"RegisteredUser.h"

using namespace std;

RegisteredUser :: RegisteredUser()
{
  strcpy(Username, "");
  strcpy(UserPassword, "");
}

RegisteredUser::RegisteredUser (char uUsername[], char uPW[], int uID, char uName[], char uAddress[], char uEmail[], char uGender[], int uPhone[]) : Visitor (uID, uName, uAddress, uEmail, uGender, uPhone)
{
  strycpy(Username, uUsername);
  strycpy(UserPassword, UPW);
}

void RegisteredUser :: login ()
{
  
}

void RegisteredUser :: voteContestant()
{
  
}

void RegisteredUser :: displayUserDetils()
{
  
}

void RegisteredUser :: updateDeatils()
{
  
}

void RegisteredUser :: deleteAccount()
{
  
}

void RegisteredUser :: addFeedback()
{
  
}

RegisteredUser :: ~RegisteredUser()
{
  }


