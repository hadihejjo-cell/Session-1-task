#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	bool capitalizeNext = true; 
	for (int i = 0; i < str.length(); i++) {
		if (isspace(str[i])) {
			capitalizeNext = true; 
		}
		else if (capitalizeNext) {
			str[i] = toupper(str[i]);
			capitalizeNext = false; 
		}
		else {
			str[i] = tolower(str[i]); 
		}
	}
	cout << "Capitalized string: " << str << endl;
	return 0;
}
	