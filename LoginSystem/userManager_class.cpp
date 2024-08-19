#include "userManager_class.hpp"

UserManager* UserManager::Instance = nullptr;

UserManager* UserManager::getInstance(){
    if(Instance == nullptr){
        Instance = new UserManager();
            return Instance;
    }
    return Instance;
}

bool UserManager::registerUser(string uname, string pwd){
    if(userdata.find(uname) != userdata.end()){
        cout<<"Already registered!\n";
        return false;
    }
    userdata[uname] = new User(uname, pwd);
    return true;
}

bool UserManager::validateUser(string uname, string pwd){
            if(userdata.find(uname) != userdata.end()){
                User* user = userdata[uname];
                return user->validatePassword(pwd);
            }
            else{
                cout<<" not registered!\n";
                return false;
            }
        }