#include<iostream>
#include<unordered_map>

#include "user_class.hpp"

class UserManager{
    private:
        unordered_map<string, User*> userdata;
        UserManager(){};
        static UserManager* Instance;
    public:
        static UserManager* getInstance();

        bool registerUser(string uname, string pwd);

        bool validateUser(string uname, string pwd);
};

