#include<iostream>
#include<cstring>
using namespace std;

class Digital_Marketer
{
private:
    int dmID;
    string dmNAME;
    char dmuserName[20];
    char dmPassword[50];
    string dmContactNumber;

public:
    Digital_Marketer();
    Digital_Marketer(int pID, string pNAME, const char puserName[], const char pPassword[], string pCntNumber);
    void DisplaydmDetails();
    void login();
    void updateAdvertisements();
    ~Digital_Marketer();

};