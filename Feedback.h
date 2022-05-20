#include <iostream>
#include <cstring>
#include "RegisteredUser.h"

using namespace std;

class Feedback
{
private :
  int feedbackID;
  char description[50];
  RegisteredUser* registereduser;

public :
  Feedback();
  Feedback(int fbid, char des[], Registereduser* registereduser);
  void displayFeedback();
  void addFeedback();
  ~Feedback();
};

