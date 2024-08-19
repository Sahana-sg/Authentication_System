#include "loginManager_class.cpp"

int main(){

    UserManager* userMgr = UserManager::getInstance();
    string username, password;
    cout<<" Please register by entering name and password!\n";
    cin>>username>>password;
    userMgr->registerUser(username, password);

    LoginStrategy* preference;
    cout<<" Please enter your Login prefernce \n";
    cout<<" 1 : Username and Password verification\n";
    cout<<" 2 : Email verification\n";
    cout<<" 3 : OTP verification\n";
    cout<<" 4 : Scanner verification\n";
    int option;
    cin >> option;
    switch (option)
    {
        case 1:
            preference = new UsernamepwdStrategy(userMgr);
            break;

        case 2:
            preference = new EmailVerificationstrategy();
            break;

        case 3:
            preference = new OTPstrategy();
            break;
        
        case 4:
            preference = new GenerateScannerstrategy();
            break;
        
        default:
            cout<<" Enter valid Preference \n";
            return 1;
    }

    LoginMgr* loginMgr = new LoginMgr(preference);

    if(loginMgr->login()){
        cout<<" Login Successful 🎉!\n";
    }
    else {
        cout<<"Sorry Could not Login 😔";
    }
    return 0;
}