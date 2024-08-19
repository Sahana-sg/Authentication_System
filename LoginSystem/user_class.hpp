#include<string>
using namespace std;

class User{
    private:
        string name;
        string password;
    public:
        User(string name, string pwd) : name(name), password(pwd) {}
        
        bool validatePassword(string pwd){
            return password == pwd;
        }
        string getName(){
            return name;
        }
        
};