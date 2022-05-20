#include<iostream>
#include<cstring>

#include"RegisteredUser.h"
#include"Visitor.h"
#include"Administrator.h"
#include"Feedback.h"
#include"Feed.h"
#include"Contestant.h"



using namespace std;

int main()
{

  //Object creation//
  
  Visitor* v = new RegisteredUser();
  RegisteredUser* user = new RegisteredUser ();

  Contestant* CID = newContestant();
  Administrator*AID = newAdministrator();


  Report*repo = new Report();
  Vote * vote = new Vote();

  Feedback* fback1 = newfeedback();
  Feed* feed1 = newfeed();





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
  
  AID -> displayDetails();
  AID -> setDetails();
  AID -> updateDetails();
  AID -> checkUser();

  CID -> displayDetails();
  CID -> checkVotes();

  fback1 -> displayFeedback();
  fback1 -> addFeedback();

  feed1 -> displayFeedback();
  feed1 -> addFeedback();

  



  // Delete dynamic objects // 

  delete v;
  delete user;
  delete vote;
  delete fback1;
  delete feed1;

  
}