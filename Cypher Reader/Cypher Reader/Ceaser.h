#pragma once
#include <iostream>
using namespace std;
class Ceaser
{
private:

	public:
		
		Ceaser() {
		
			char str[100];
			int choice = 0;
			do {
				system("CLS");
			cout << "\nPlease enter if you would like to encode or decode a cypher:\n 1.encode\n 2.decode \n 3.quit\n";
				cin >> choice;
				

				switch (choice) {
				case 1:
					cout << "Please enter a phrase\n";
					cin >> str;
					encoding(str);
					break;
				case 2:
					cout << "Please enter a phrase\n";
					cin >> str;
					solving(str);
					break;
				case 3:
					break;
				 default:
					 cout << "\nWrong input\n";
					
					 break;
				}
			} while (choice != 3);
		}
	void solving(char str[100]) {
		char temp;
		int key;
		cout << "Please enter the key: ";
		cin >> key;
		for (int i = 0; str[i] != '\0';i++) {
			temp = str[i];
			if (temp >= 'a' && temp <= 'z') {
				temp = temp - key;
			
				if (temp < 'a') {
					temp = temp + 'z' - 'a' + 1;
				}
				str[i] = temp;
			}
			else if (temp >= 'A' && temp <= 'Z') {
				temp = temp - key;
				if (temp < 'A') {
					temp = temp + 'Z' - 'A' + 1;
				}
				str[i] = temp;
			}
		}
		cout << "Decrypted message: " << str<<endl;
		system("pause");
	}

	void encoding(char str[100]) {
		char temp;
		int key;
		cout << "Please enter the key: ";
		cin >> key;
		for (int i = 0; str[i] != '\0'; i++) {
			temp = str[i];
			if (temp >= 'a' && temp <= 'z') {
				temp = temp + key;

				if (temp > 'z') {
					temp = temp - 'z' + 'a' - 1;
				}
				str[i] = temp;
			}
			else if (temp >= 'A' && temp <= 'Z') {
				temp = temp + key;
				if (temp > 'Z') {
					temp = temp - 'Z' + 'A' - 1;
				}
				str[i] = temp;
			}
		}
		cout << "Encrypted message: " << str << endl;
		system("pause");
	}
	
};

