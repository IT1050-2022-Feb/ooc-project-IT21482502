
class Visitor
{
private:
    int userID;
    char userName [30];
    char userAddress [100];
    char userEmail [40];
    char gender[];
    int Phone [10];

public:
    Visitor();
    Visitor(int uID, char uName[], char uAdress[], char uEmail[], char Gender[], int uPhone[]);
    void Register ();
    void verifyRegister();
    
    ~Visitor();

}

