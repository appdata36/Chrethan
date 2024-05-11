#pragma once
#include <string>
#include <array>
#include <fstream>
#include <iostream>

using namespace std;
//so no head??
//*throws phone*



class player {
	public:

	std::string he;
	std::string him;
	std::string his;
	//nut.
	//string name;
	
	
	
	player(std::string name, std::string clas, std::string pro){
		
		if (clas == "wizard"){
			health = 100;
			strength = 50;
			charisma = 60;
			melee = 20;
			defenke = 30;
			intel = 90;
			sclass = "wizard";
		}

		if (clas == "warrior"){
			health = 100;
			strength = 50;
			charisma = 60;
			melee = 20;
			defenke = 30;
			intel = 90;
			sclass = "warrior";
		}
		else {
			health = 100;
			strength = 50;
			charisma = 60;
			melee = 20;
			defenke = 30;
			intel = 90;
		}

		//masculine pronouns
		if (pro == "he" or pro == "him" or pro == "male"){	
			he = "he"; //-micheal jackson
			him = "him";
			his = "his";
		}

		//feminine pronouns
		else if (pro == "she" or pro == "her" or pro == "female"){
			he = "she"; //-bicheal backson
			him = "her";
			his = "hers";
		}

		//custom pronouns
		else if ((pro != "she") and (pro != "her") and (pro != "he") and (pro != "him") and (pro != "male") and (pro != "female")){
			he = pro; //-kricheal krackson
			his = pro += "s";
			him = pro += "elf";

			
			
		}

	}





	//setters
	void damage(int beempus) {
		health = health - (beempus * ( (100-defenke)/100 ));
		//beempus is damage taken, and defenke is defense;
	//
	//100-defense
	//----------- == percent taken by character
	//    100
	
	}


	void heal(int footback){

	if( (health + footback) < 100){ health = 100;}
	else {
		
	if((health + footback)<100)
	{
	health = health + footback;}
	}
	}

	void analytics(){
	//thing that tells me if the vars work tehe
	std::cout << he << endl;
	std::cout << him << endl;
	std::cout << his << endl;
	std::cout << cls << endl;
	std::cout << health << endl;
	std::cout << sclass << endl;
	}







	//getters

	string hep(){
		return he;
	}

	string himp(){
		return him;
	}

	string hisp(){
		return his;
	}




	private:

		std::string prnn;
		
		std::string cls;
		int melee;
		int charisma;
		int defenke;
		int health;
		int strength;
		int intel;
		std::string sclass;














};

////string return function
//std::string locGet(std::string theFile, int lineNum) {
//
//	//outputs: string tehe
//	//inputs: file name, line num
//
//	std::ifstream file("savedata.txt");
//	std::string txtPtr;
//	
//	theFile.seekg(lineNum);
//	theFile >> txtPtr;
//	// Now the file pointer is at the beginning of the fifth line
//	std::cout << "Found: " << txtPtr << std::endl;
//
//
//	return txtPtr;
//
//}

std::string getStringFromLine(std::fstream& file, int lineNumber) {
	if (lineNumber <= 0) {
		std::cerr << "Line number should be greater than zero." << std::endl;
		return "";
	}

	file.clear(); // Clear any error flags
	file.seekg(0); // Move to the beginning of the file

	std::string line;
	for (int i = 0; i < lineNumber - 1; ++i) {
		if (!std::getline(file, line)) {
			std::cerr << "File has fewer than " << lineNumber << " lines." << std::endl;
			return "";
		}
	}

	return line;
}