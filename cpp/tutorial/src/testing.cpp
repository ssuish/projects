#include <iostream>

int cout(int x){
	return x;
}

#define WORD

int main(){

	#ifdef WORD
	std::cout << "Hello World" << '\n';
	#endif

	#if 0 // dont compile from here
	std::cout << cout(NUM);
	#endif // until here

	#ifdef WORD
	std::cout << "NUM is undefined";
	#endif 

	// std::count << cout() initially
	// std::cout << cout(10) 

	return 0;
}