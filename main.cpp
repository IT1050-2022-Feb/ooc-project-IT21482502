#include<iostream>

#include"RegisteredUser.h"
#include"Visitor.h"
#include"Administrator.h"
#include"Feedback.h"
#include"Feed.h"



using namespace std;

int main()
{

  //Object creation//
  
  Visitor* v = new RegisteredUser();
  RegisteredUser* user = new RegisteredUser ();




  Report*repo = new Report();
  Vote * vote = new Vote();






// method calling //

  v -> Register ();
  v ->verifyRegister() ;

  user -> login ();
  user -> voteContestant();
  user -> displayUserDetils();
  user -> updateDeatils();
  user -> deleteAccount();
  user -> addFeedback();

  repo -> generateVoteRepo();
	repo ->generateFeedbackRepo();
	repo -> generateDigMarketerRepo();
	repo -> displayReport();

  vote -> displayVote();
  
  





  // Delete dynamic objects // 

  delete v;
  delete user;
  delete vote;

  
}