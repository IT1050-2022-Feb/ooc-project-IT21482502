#include<iostream>
#include<cstring>

#include"Vote.h"
#include"Feedback.h"
#include"DigitalMarketer.h"

using namespace std;

Report :: Report()
{
	ReportID = 0;
	strcpy(ReportName,"");
	strycpy(ReportType,"");
}

Report::Report(int repID, char repName[], char repType[])
{
	ReportID = repID;
	strcpy(ReportName, repName);
	strcpy(ReportType, repType);
}

void displayReport()
{
	cout << "Report ID :"<<ReportID<<endl;
	cout << "Report Name :"<<ReportName<<endl;
	cout << "Report Type :"<<ReportType<<endl;
	
}
void generateVoteRepo(Vote*v)
{
	
}
void generateFeedbackRepo(Feedback*f)
{
	
}
void generateDigMarketerRepo(DigitalMarketer*d)
{
	
}
