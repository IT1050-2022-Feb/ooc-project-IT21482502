#include<iostream>
#include<cstring>
#incldue"Contestant.h"

using namespace std;

class Vote {
	private:
		int votecount;
		int totalVote;
		Contestant*c;
		
	public:
	    Vote();
		Vote(int Votecount, int totVote,int VID , string Vname[] );
		
		int calcVote();
		void displayVote();
		~Vote();
			
};
