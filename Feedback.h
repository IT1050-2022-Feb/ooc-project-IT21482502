#include <iostream>
#include <cstring>
#include"RegisteredUser.h"

using namespace std;

class Feedback
{
private :
  int feedbackID;
  char description[50];
  RegisteredUser* registeredUser;

public :
  Feedback();
  Feedback(int fid, char des[]);
  void displayFeedback();
  void addFeedback();
  ~Feedback();
};

