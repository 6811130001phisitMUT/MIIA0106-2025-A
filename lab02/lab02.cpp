#include <iostream>
#include <string>
using namespace std;
int main() {
	int age = 18;
	float height = 170;
	string name = "phisit lophiriyakun";
	int studentid1 = 68111;
	int studentid2 = 30001;
	float gpa = 3.99;

	cout << "Student Profile" << endl;
	cout << "------------------" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << " cm" << endl;
	cout << "Student ID: " << studentid1 << studentid2 << endl;
	cout << "GPA: " << gpa << endl;
	return 0;
}