#include "admin.hpp"


void admin1(){
    admin adm;

    std::string user;
    std::string pass;
    
    std::cout << "Admin: ";
    std::cin >> user;

    std::cout << "Password: ";
    std::cin >> pass;
    
    if(adm.check_Pass(pass) == true && adm.check_User(user) == true){
        LOG("Access Granted...")
    }

}