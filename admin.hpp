#pragma once

#include <iostream>
#include <string>

#include "macros.hpp"


class admin{

    public:

        bool check_User(std::string user){
            return user == username;
        }
        bool check_Pass(std::string pass){
            return pass == password;
        }

        void asking_info(){
            std::string fullName, address, status, iD;
            char choice;
            LOG("|----------------------|")
            LOG("Fullname (first and last)")
            std::getline(std::cin >> std::ws, fullName);            //std::ws is used to to ignore all whitespaces in the string sequence

            LOG("Address")
            std::getline(std::cin >> std::ws, address);

            LOG("ID")
            std::getline(std::cin >> std::ws, iD);

            LOG("Status")
            std::getline(std::cin >> std::ws, status);

            LOG("ADD ANOTHER TELLER? (y/n)")
            std::cin >> choice;
        }

        void adminInfo();
        void menu();


    private:
        std::string username = "admin";
        std::string password = "admin";
        int moneyAmount;

};