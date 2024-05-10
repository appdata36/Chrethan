#pragma once
#include <string>
#include <array>
//so no head??
//*throws phone*



class player {
	public:
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
		if (pro == "he" or pro == "him"){	
			he = "he"; //-micheal jackson
			him = "him";
			his = "his";
		}

		//feminine pronouns
		else if (pro == "she" or pro == "her"){
			he = "she"; //-bicheal backson
			him = "her";
			his = "hers";
		}

		//custom pronouns
		else if ((pro != "she") and (pro != "her") and (pro != "he") and (pro != "him")){
			he = "g"; //-kricheal krackson
			him = "g";
			his = "g";
		}

	}
	//setters
	




	//getters




	private:

		std::string prnn;
		std::string he;
		std::string him;
		std::string his;
		std::string cls;
		int melee;
		int charisma;
		int defenke;
		int health;
		int strength;
		int intel;
		std::string sclass;














};