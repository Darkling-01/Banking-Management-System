#include <fstream>
#include <istream>
#include "admin.hpp"

#define LOG(x) std::cout << x << std::endl;

void add_Admin();
void add_Bank_Teller();
void create_User_Account();
void delete_User_Account();
void check_List_Of_User();
void check_List_of_Tellers();
void update_Teller_List();
void update_User_List();
void menu();
void textFile();

//global variables
std::string fullName, address, status, response, currentEmployee, iD;

admin adm;

// double colon is used to define a function outside a class... admin.hpp

void admin::adminInfo(){
    int num;

    std::string user, pass;
    
    std::cout << "Admin: ";
    std::cin >> user;

    std::cout << "Password: ";
    std::cin >> pass;
    
    if(adm.check_Pass(pass) == true && adm.check_User(user) == true){

        LOG("Access Granted...\n\n")

        LOG(" CHOOSE ONE OF THE FOLLOWING")
        LOG("|---------------------------|")
        LOG("| 1 - Add New Admin         |")
        LOG("| 2 - Add Bank Teller       |")
        LOG("| 3 - Create User account   |")
        LOG("| 4 - Delete User Account   |")
        LOG("| 5 - Check List of Users   |")
        LOG("| 6 - Check List of Tellers |")
        LOG("| 7 - Update Teller List    |")
        LOG("| 8 - Update User List      |")
        LOG("| 9 - Return To Menu        |")                   //doesn't work
        LOG("|10 - Exit                  |")
        LOG("|---------------------------|\n")

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
                check_List_of_Tellers();
                break;
            case 7:
                update_Teller_List();
                break;
            case 8:
                update_User_List();
                break;
            case 9:
                menu();
                break;
            case 10:
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
    char choice;
    do{
        LOG(" NEW TELLER INFORMATION")
        LOG("|----------------------|")
        LOG("Fullname (first and last)")
        std::getline(std::cin >> std::ws, fullName);            //std::ws is used to to ignore all whitespaces in the string sequence

        LOG("Address")
        std::getline(std::cin >> std::ws, address);

        LOG("ID")
        std::getline(std::cin >> std::ws, iD);

        LOG("Teller Status")
        std::getline(std::cin >> std::ws, status);

        std::cout << "Fullname: " << fullName << std::endl;

        LOG("ADD ANOTHER TELLER? (y/n)")
        std::cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    
    adm.adminInfo();
}

void create_User_Account(){
char choice;
    do{
        LOG(" Create USER INFORMATION")
        LOG("|----------------------|")
        LOG("Fullname (first and last)")
        std::getline(std::cin >> std::ws, fullName);            //std::ws is used to to ignore all whitespaces in the string sequence

        LOG("Address")
        std::getline(std::cin >> std::ws, address);

        LOG("ID")
        std::getline(std::cin >> std::ws, iD);

        LOG("Client Status")
        std::getline(std::cin >> std::ws, status);

        std::cout << "Fullname: " << fullName << std::endl;

        LOG("CREATE ANOTHER USER ACCOUNT? (y/n)")
        std::cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    
    adm.adminInfo();
}

void delete_User_Account(){

}

void check_List_Of_User(){

    LOG("  LIST OF GROUPS:  ")
    LOG("|------------------|")
    LOG("| 1 - Bank Tellers |")
    LOG("| 2 - Users        |")
    LOG("| 3 - Back         |")
    LOG("|------------------|")
    int num;

    std::cin >> num;

    switch(num){
        case 1:
            //open text file showing bank teller info
            break;
        case 2:
            //open text file showing users info
            break;
        case 3:
            adm.adminInfo();
            break;
        default:
            break;
    };
}

void check_List_of_Tellers(){

}

void update_Teller_List(){

    LOG("ENTER EMPLOYEES ID: ")
    std::cin >> iD;
    
    if(currentEmployee == iD){
        LOG("WHAT DO YOU WANT TO CHANGE:\tFullname, ID, Address, Status")
        std::cin >> response;

        if(response == "Fullname"){
             /* code */
        }
        else if (response == "ID")
        {
            /* code */
        }
        else if (response == "Address")
        {
            /* code */
        }
        else if (response == "Status")
        {
            /* code */
        }
        else{
         LOG("Incorrect Input")
        }

    }
    else{
        LOG("EMPLOYEE NOT FOUND.")
    }


}

void update_User_List(){

}


void admin::menu(){
    //need help to return to main menu in main.cpp
}

void textFile(){
    //Create an instance of ofstream and create and opens a new text file called Bank Tellers.
    std::ofstream teller_file("Bank Tellers.txt", std::ios::in | std::ios::out);


    //NOTE: check if the file is already created, if doesn't exist then create one...
    //NOTE: must to able to modify the file without deleteing the information it already has...
    
}