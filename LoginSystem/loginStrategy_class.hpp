#include "userManager_class.hpp"

class LoginStrategy{
    public:
        virtual bool login() = 0;
};

class UsernamepwdStrategy: public LoginStrategy{
    private:
        UserManager* um;
    public:
        UsernamepwdStrategy(UserManager* db): um(db){}
        bool login(){
            string uname, pwd;
            cout<<" Enter Username : ";
            cin>>uname;
            cout<<" Enter password : ";
            cin>>pwd;

            if(um->validateUser(uname, pwd)) return true;
            return false;
        }
};

class OTPstrategy: public LoginStrategy{
    public:
        bool login(){
            string otp;
            cout<<" Enter OTP : ";
            cin>>otp;
            if(otp == "1726") return true;
            return false;
        }
};

class EmailVerificationstrategy: public LoginStrategy{
    public:
        bool login(){
            // logic here
            return true;
        }
};

class GenerateScannerstrategy: public LoginStrategy{
    public:
        bool login(){
            // logic here
            return true;
        }
};