/* IT21245824 - D.A.H.Madusanka
Group 3.2 G2
Malabe*/
#include "Digital_Marketer.h"
#include <iostream>
#include <cstring>
using namespace std;

Digital_Marketer::Digital_Marketer()
{

};

Digital_Marketer::Digital_Marketer(int pID, string pNAME, const char puserName[], const char pPassword[], string pCntNumber)
{
    dmID = pID;
    dmNAME = pNAME;
    strcpy(dmuserName, puserName);
    strcpy(dmPassword, pPassword);
    dmContactNumber = pCntNumber;
};
void Digital_Marketer::DisplaydmDetails()
{
    cout << "Digital Marketer ID : " << dmID << endl
        << "Digital Marketer Name : " << dmNAME << endl
        << "Username : " << dmuserName << endl
        << "Password : " << dmPassword << endl
        << "Contact No : " << dmContactNumber << endl;
};

void Digital_Marketer::login() {

};

void Digital_Marketer::updateAdvertisements() {

};

Digital_Marketer::~Digital_Marketer() {

};
