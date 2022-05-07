#include <iostream>
#include <corecrt_math_defines.h>
using namespace std;

class ShapeArea {
public:
	ShapeArea()
	{

	}
	float area_of_rectangle(float width, float length) {
		float area = width * length;
		return area;
	}

	float area_of_triangle(float base, float height) {
		float area = .5 * base * height;
		return area;
	}

	void area_of_circle(float radius) {
		float area = M_PI * radius * radius;
		cout << "The area of your circle is " << area << endl;
	}
};
int main() {
	//Goal: get user input to calculate area of a rectangle.
	int count = 0;
	while (count != 1) {
		int user_input;
		cout << "Type the number for the shape you would like to calculate or type 4 to quit:\n";
		cout << "1. Rectangle\n";
		cout << "2. Triangle\n";
		cout << "3. Circle\n";
		cout << "4. Quit\n";
		cout << "> ";
		cin >> user_input;

		if (user_input == 1) {
			cout << "What is the length of the rectangle? \n";
			cout << "> ";
			float length;
			cin >> length;

			cout << "What is the width of the rectangle? \n";
			cout << "> ";
			float width;
			cin >> width;
			ShapeArea s;
			float area = s.area_of_rectangle(width, length);

			cout << "The area of your rectangle is " << area << endl;
		}
		else if (user_input == 2) {
			//Goal: get user input to calculate area of a triangle.
			cout << "What is the base of the triangle? \n";
			cout << "> ";
			float base;
			cin >> base;

			cout << "What is the height of the triangle? \n";
			cout << "> ";
			float height;
			cin >> height;

			float tri_area = ShapeArea().area_of_triangle(base, height);

			cout << "The area of your triangle is " << tri_area << endl;
		}
		else if (user_input == 3) {
			//Goal: get user input to calculate area of a circle.
			cout << "What is the radius of the circle? \n";
			cout << "> ";
			float radius;
			cin >> radius;

			ShapeArea().area_of_circle(radius);
		}
		else if (user_input == 4) {
			//This ends the loop so the program can safely end.
			cout << "Thank you for using the Area of Shapes calculator.";
			count = 1;
		}
		else if (cin.fail()) {  //"cin.fail" will check to see if the input is the correct data type. If it's not
			//the correct data type, it will return True and this code will run.
			cin.clear();  //This clears the input of the incorrect data type.
			cin.ignore(); //This tells the system to ignore the error that was raised.
			cout << "Please enter a valid number.\n";
		}
		else {
			cout << "That is not a valid input. Please try again.\n";
		}
	}



	
}