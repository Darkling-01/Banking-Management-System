#include <fstream>

#include "admin.hpp"

#define LOG(x) std::cout << x << std::endl;

void add_Admin();
void add_Bank_Teller();
void create_User_Account();
void delete_User_Account();
void check_List_Of_User();
void menu();


// double colon is used to define a function outside a class... admin.hpp

void admin::adminInfo(){
    admin adm;

    std::string user;
    std::string pass;
    
    std::cout << "Admin: ";
    std::cin >> user;

    std::cout << "Password: ";
    std::cin >> pass;
    
    if(adm.check_Pass(pass) == true && adm.check_User(user) == true){
        int num;

        LOG("Access Granted...\n\n")

        LOG("CHOOSE ONE OF THE FOLLOWING")
        LOG("---------------------------")
        LOG("1 - Add New Admin")
        LOG("2 - Add Bank Teller")
        LOG("3 - Create a new User account")
        LOG("4 - Delete User Account")
        LOG("5 - Check List of Users")
        LOG("6 - Return To Menu")                   //doesn't work
        LOG("7 - Exit")
        LOG("---------------------------")

        std::cin >> num;


        switch(num){
            case 1:
                add_Admin();
                break;
            case 2:
                add_Bank_Teller();
                break;
            case 3:
                create_User_Account();
                break;
            case 4:
                delete_User_Account();
                break;
            case 5:
                check_List_Of_User();
                break;
            case 6:
                menu();
                break;
            case 7:
                EXIT_SUCCESS;
                break;

        }
    }
    else{
        LOG("Denied...")
    }
}

void add_Admin(){

}

void add_Bank_Teller(){

}

void create_User_Account(){

}

void delete_User_Account(){

}

void check_List_Of_User(){

}
void admin::menu(){
    //need help to return to main.cpp
}