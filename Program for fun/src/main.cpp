#include <iostream>

//This program will create a resume based on user input

int main(){
	std::string username {"empty"};
	std::cout << "Hello! Welcome to resume creator. What is your name?" << std::endl;
	std::cin >> username;
	std::cout << "Hello " << username << ". Welcome!";
	std::cout << "First lets gather some more information on you." << std::endl;
	std::cout << "What is your last name?" << std::endl;
	std::string lastname {"empty"};
	std::cin >> lastname;
	std::string fullname {username + " " + lastname};
	std::cout << "Ok " << fullname << "." << std::endl;
	
//Up until now I have just been playing around with strings. Next I want to add a portion where I demonstrate the use of char and ints. 
//I also want to demonstrate my understanding (or lack thereof) of memory management.

	
	return 0;
}
