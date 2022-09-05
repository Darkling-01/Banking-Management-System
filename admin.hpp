#pragma once

#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl;

class admin{

    public:
        std::string username;
        std::string password;
        
        bool check_User(std::string user){
            return user == username;
        }

        bool check_Pass(std::string pass){
            return pass == password;
        }

    private:
        void adminInfo() const{
            std::string username = "admin";
            std::string password = "admin";
        }

};