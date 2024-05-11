// Chrethan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//when writing story text use phe for he, phis for his, phim for him forms. eat some beef 

#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <stdio.h>
#include <stdlib.h>
#include "bostream.h"



using namespace std;

int i = 0;
int health0 = 0;
int characterLoadPart = 0;
std::string txtPtr = "";
std::string name = "";
std::string gender = "";
std::string playerclass = "";
std::string location = "";
string origin;
int latch1 = 0;
string newLoad = "";
string saveFile = "savedata.txt";
string phe;
string phim;
string phis;


int main()
{
	/*
    player Ricochet_Candy_Pillows;
	
	
	*/
	fstream saveFile("savedata.txt");

	cout << "Welcome to the Tapestry Unwound. Are you creating a new journey, or do you want to load a past one?" << endl << endl;
	cin >> newLoad;

	if (newLoad == "new") {

		cout << "We will now enter character creation." << endl << endl;
		cout << "Enter their name: ";
		cin >> name;
		saveFile << name;

		while (latch1 == 0) {
			cout << endl << "Enter their class, warrior or wizard: ";
			cin >> playerclass;

			if ((playerclass == "warrior") or (playerclass == "wizard")) {

				saveFile << endl << playerclass;
				latch1 = 1;
				break;
			}
			if ((playerclass != "warrior") or (playerclass != "wizard")) {
				std::cout << "say again, i cant hear you, perhapse speak more clearly?";
				latch1 = 0;
			}

		}
		cout << endl << "Enter their gender, male, female, or other: ";
		cin >> gender;
		saveFile << endl << gender;

		player john_pork(name, playerclass, gender);
		

		//-------------------------------------------------|testing section|---------------------------------------------------------------
		john_pork.damage(50);
		john_pork.analytics();
		john_pork.heal(50);
		john_pork.analytics();
		phe = john_pork.hep();
		phim = john_pork.himp();
		phis = john_pork.hisp();

		

		//---------------------------------------------------------------------------------------------------------------------------------
	}
	//load sequence
	else if (newLoad == "load") {
		saveFile.seekg(0);
		//gets name class and gender to create player
		saveFile >> name >> playerclass >> gender;
		player john_pork(name, playerclass, gender);
		//grabs location to set ##NOTE: EACH LOCATION'S CODE MUST END WITH A SAVE UPDATE OF LOCATION##

	}
	origin = getStringFromLine(saveFile, 5);

	cout << "You are " << name << ", a " << playerclass << " from the town of "<< origin <<".You identify as a(n) " << gender << "."<<endl;
	cout << "People always said, 'That " << name << ", " << phe << " was always such a trouble maker!'";

	return 0;
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: DONT, lol
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//   7. see pee pee
//   8. conk
