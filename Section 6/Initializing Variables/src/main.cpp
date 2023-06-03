#include <iostream>


// This program will calculate the square footage of a room
int main(){
	float room_length {0};
	std::cout << "What is the length of the room in square feet?" << std::endl;
	std::cin >> room_length;

	float room_width {0};
	std::cout << "What is the width of the room in square feet?" << std::endl;
	std::cin >> room_width;

	float room_area {room_length * room_width};
	std::cout << "The area of the room is " <<  room_area << " square feet"  << std::endl;

	return 0;
}
