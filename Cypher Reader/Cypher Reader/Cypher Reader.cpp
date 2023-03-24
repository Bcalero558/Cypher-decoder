// Cypher Reader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ceaser.h"
#include "monoalphabetic.h"
#include "Homophonic.h"

using namespace std;
int main()
{
    int x;
    
    do {

        system("CLS");
            cout << "                             Main Menu\n";
            cout << "                           Pick a Cipher";
            cout << "\n----------------------------------------------------------------\n";
            cout << "1. Caeser             2. Monoalphabetic    3. Homophonic \n";
            cout << "\n4.Polygram Substitution    5.Playfair           6.Hill\n";
            cout << "\n                             7.quit";
            cout<<"\n----------------------------------------------------------------\n";

        cin >> x; 
        switch (x) {
        case 1:
            Ceaser();

            break;
        case 2:
            monoalphabetic();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            cout << "Please try again\n";
            
        }
        
    } while (x != 7);

        }

