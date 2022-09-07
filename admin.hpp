#pragma once

#include <iostream>
#include <string>

class admin{

    public:

        bool check_User(std::string user){
            return user == username;
        }
        bool check_Pass(std::string pass){
            return pass == password;
        }

        void adminInfo();
        void menu();

    private:
        std::string username = "admin";
        std::string password = "admin";

};