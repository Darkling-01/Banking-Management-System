#include <fstream>

#include "admin.hpp"
#include "macros.hpp"


void add_Admin();
void add_Bank_Teller();
void create_User_Account();
void delete_User_Account();
void check_List_Of_Groups();
void update_Teller_List();
void update_User_List();
void menu();
void add_Money();
//global variables
std::string response, currentEmployee, membership, iD;

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
        LOG("| 5 - Check List of Groups  |")
        LOG("| 6 - Update Teller List    |")
        LOG("  7 - Add Money             |")
        LOG("| 8 - Update User List      |")
        LOG("| 9 - Return To Menu        |")                   //doesn't work
        LOG("| 10 - Exit                  |")
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
                check_List_Of_Groups();
                break;
            case 6:
                update_Teller_List();
                break;
            case 7:
                add_Money();
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
       
        adm.asking_info();

    }while(choice == 'y' || choice == 'Y');
    
    adm.adminInfo();
}

void create_User_Account(){
char choice;
    do{
        LOG(" Create USER INFORMATION")
        
        adm.asking_info();

        LOG("Membership")
        std::getline(std::cin >> std::ws, membership);

    }while(choice == 'y' || choice == 'Y');
    
    adm.adminInfo();
}

void delete_User_Account(){

}

void check_List_Of_Groups(){

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

void add_Money(){
    int moneyAmount;
    char choice;

    do{
        LOG("Enter an amoune you would like to deposit?")
        std::cin >> moneyAmount;
        if(moneyAmount < 0){
            LOG("You didn't add sufficient funds.")
        }

        LOG("Would you like to deposit again? (y/n)")
        std::cin >> choice;

    }while(choice == 'y' || choice == 'Y');
    
    std::cout << "You entered: " << moneyAmount << std::endl;

    //after entering the money, it should recorded in the user text file.
    
}


void update_User_List(){
    std::ofstream UserFile;
    UserFile.open("UserFile.txt", std::ios::out);

    if(UserFile.fail()){
        LOG("Error: Can't open file")
    }

    UserFile.close();

}


void admin::menu(){
    //need help to return to main menu in main.cpp
}