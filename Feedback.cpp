#include<iostream>
#include<cstring>
#include"Feedback.h"
#include"RegisteredUser.h"

using namespace std;

Feedback:: Feedback()
{
  feedbackID = 0;
  strcpy(description,"");
}

Feedback:: Feedback(int fid, char des[])
{
  feedbackID = fid;
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
  
}
