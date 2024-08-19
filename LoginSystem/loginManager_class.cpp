#include "loginStrategy_class.hpp"

class LoginMgr{
    private:
        LoginStrategy* strategy;
    public:
        LoginMgr(LoginStrategy* str) : strategy(str) {}
        bool login(){
            return strategy->login();
        }
};