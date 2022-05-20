#include<iostream>
#include<string>

#include"Vote.h"
#include"Feedback.h"
#include"DigitalMarketer.h"

using namespace std;

class Report{
	private:
	    int ReportID;
	    char ReportName[20];
		char ReportType[20];
		
	public:
	    Report();
		Report(int repID, char repName[20], char repType[20]);
		void generateVoteRepo(Vote*v);
		void generateFeedbackRepo(Feedback*f)
		void generateDigMarketerRepo(DigitalMarketer*d)
		void displayReport();
		~Report();
};

