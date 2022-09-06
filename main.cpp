#include <iostream>

#include "admin.hpp"


//Bank Management System
#define LOG(x) std::cout << x << std::endl;

void login(){
    
    LOG("Username")

}

void signUp(){

}


int main(void){
    int input{0};
    admin adm;

    LOG("Welcome to the Bank Management System")
    LOG("Choose one the following to began")
    LOG("1 - Login")
    LOG("2 - Admin")
    LOG("3 - Signup")

    std::cin >> input;
    
    switch(input){
        case 1:
            login();
            break;
        case 2:
            adm.adminInfo();
            break;
        case 3:
            signUp();
            break;
        default:
            break;
    }
    

}