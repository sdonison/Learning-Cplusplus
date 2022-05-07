//my first program in C++
#include <iostream>  //This is a directive that is interpreted by the preprocessor. It instructs the preprocessor
					 //to include the header iostream, which allows the program to perform input and output operations.

using namespace std; //Similar to Python, this imports the standard library to the program. It allows me to
					 //use the objects in the standard library without having to call the library each time I
					 //use an object.

int main()			 //This begins the main function. Unlike Python, the main function runs without it needing to
					 //be called.
{
	cout << "Hello World " << endl; //cout = character output; << = directs the string to the output; endl = ends the line
	cout << "What is your name?: \n"; //\n works just like Python and also ends the line
	string user_input; //This defines the variable "user_input" as a string.
	cin >> user_input; //This asks for input from the user and stores the input in the "user_input" variable.
	cout << "Hello " << user_input << "! Welcome to C++!"; //This inserts the input into the string and prints it out.
}					//This declares the end of a function or section. Unlike Python which uses indents to indicate such
					//C++ doesn't care about indents, only ";" and brackets.