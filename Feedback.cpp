#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "RegisteredUser.h"

using namespace std;

Feedback:: Feedback()
{
  feedbackID = 0;
  strcpy(description,"");
}

Feedback:: Feedback(int fbid, char des[], Registereduser* registereduser)
{
  feedbackID = fbid;
  strcpy(description,des);  
}

void Feedback :: displayFeedback()
{
  cout <<"Feedback ID"<< feedbackID << endl;
	cout <<"Description"<< description << endl;
}

void Feedback :: addFeedback()
{
  
}

Feedback:: ~Feedback()
{
  cout<< "Feedback desctuctor is called"<< endl;
}
