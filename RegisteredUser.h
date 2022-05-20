#include "Visitor.h"

class RegisteredUser : public Visitor
{
private:
    char Username [30];
    char PW [15];

public:
    RegisteredUser();
    RegisteredUser(int uID, char uName[], char uAdress[], char uEmail[], char uPW[], char Gender, int uPhone[]);
    void login ();
    void voteContestant();
    void displayUserDetils();
    void updateDeatils();
    void deleteAccount();
    void addFeedback();
    ~RegisteredUser();

}