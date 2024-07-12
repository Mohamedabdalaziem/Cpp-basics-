// dependancies
#include <iostream>
#include <array>
#include <string>

// class usr 
class User {
    public :
    std::string User_Name;
    int User_Age ;
    int User_ID ;
    void Get_Name(){
        std::cin >> User_Name;
    }
    void Get_Age(){
        std::cin >> User_Age;
    }
    void Get_ID(int ID){
         User_ID = ID ;
    }
};

int main() {
    std::array< User , 100 > Users;
    bool isRunning = true ;
    int option = 0 ;
    int Num_of_users = 0 ;
    int Fetch_ID = 0 ;
   
    std::cout << "Program log users \n";
    while (isRunning){
        std::cout << "1.Add user \n";
        std::cout << "2.Fetch user \n";
        std::cout << "3.Quit \n\n";
        std::cout << "Enter option :";
        std::cin >> option ;
        switch (option)
        {
        case 1:
            std::cout << "Enter User Name :";
            Users[Num_of_users].Get_Name();
            std::cout << "Enter User Age :";
            Users[Num_of_users].Get_Age();
            Users[Num_of_users].Get_ID(Num_of_users);
            std::cout << "User record added successfuly\nYour ID is :" << Num_of_users << "\n";
            break;
        case 2:
            std::cout << "Enter user ID \n";
            std::cin >> Fetch_ID ;
            if (Fetch_ID > --Num_of_users) {
                std::cout << "Not found \n";  
            } else {
            std::cout << "User Name :"<< Users[Fetch_ID].User_Name << "\n";
            std::cout << "User Age :" << Users[Fetch_ID].User_Age << "\n" ;
            }
            break;    
        case 3:
            std::cout << "Program closed :) \n thank you \n";
            isRunning = false ;
            break; 
        default:
            break;
        }
        Num_of_users++ ;
    }
    return 0 ;
}
