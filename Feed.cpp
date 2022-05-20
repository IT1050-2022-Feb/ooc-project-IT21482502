#include <iostream>
#include <cstring>
#include "Feed.h"
#include "Administrator.h"

using namespace std;

Feed:: Feed()
{
  feedID = 0;
  strcpy(feedname,"");
}

Feed:: Feed(int fid, char fname[], Administrator* administrator)
{
  feedID = fid;
  strcpy(feedname,fname);  
}

void Feed :: displayFeed()
{
  cout <<"Feed ID"<< feedID << endl;
	cout <<"Feed name"<< feedname << endl; 
}

void Feed :: addFeed()
{
  
}

Feed:: ~Feed()
{
  cout<< "Feed desctuctor is called"<< endl;
}