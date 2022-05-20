#include <iostream>
#include <cstring>
#include "Administrator.h"

using namespace std;

class Feed
{
private :
  int feedID;
  char feedname[30];
  Administrator* administrator;

public :
  Feed();
  Feed(int fid, char fname[], Administrator* administrator);
  void displayFeed();
  void addFeed();
  ~Feed();
};