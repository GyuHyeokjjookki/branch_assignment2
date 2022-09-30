#include<iostream>

using namespace std;

int main() {
	string str;
	cout << "Enter a string : ";
	cin >> str;
	if (str == "exit") {
		return 0;
	}
	else {
		cout << "Your result : " << str << endl;
	}
	
	return 0;
}