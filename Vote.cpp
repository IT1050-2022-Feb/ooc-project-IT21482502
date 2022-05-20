#include<iostram>
#include"Vote.h"
#include"contestant.h"
#include<cstring>

using namespace std;

Vote::Vote()
{
	votecount = 0;
	totalVote= 0;
	ID = 0;
	strcpy(name,"");
}

Vote::Vote(int Votecount, int totVote,int VID , string Vname[])
{
	votecount= Votecount;
	totalvote= totVote;
	ID=VID;
	name=Vname;
	
}

int calcVote()
{
	
}

void displayVote()
{
	
}
