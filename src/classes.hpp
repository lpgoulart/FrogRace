/**
*	@author Leonardo Goulart
*	@author UFRN - Universidade Federal do Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#ifndef _CLASSES_HPP_
#define _CLASSES_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

/*
*	@see Frog
*/

class Frog {
private: 

	/**
	*	@brief Set the name of an object
	*/
	std::string ID;
	/**
	*	@brief Randomly generate a number between 1~3 for jump lenght
	*/
	int distancie;
	/**
	*	@brief Travelled distance
	*/
	int jumpLenght;
	/**
	*	@brief Counter for number of jumps
	*/
	int jumpCounter;

public:

	/**
	*	@brief Constructor
	*	@brief Inicialize the values:
	*		- Total distancie
	*		- Jump counter
	*		- Jump Lenght
	*/
	Frog();

	/**
	*	@brief Destructor
	*/
	~Frog();


	/**
	*	@brief Another constructor
	*/
	void CFrog();
	
	/**
	*	@brief Function to set the name of an object
	*/
	void getName();

	/**
	*	@brief Increase the jumpCounter and set a new value for distance of the jump
	*/
	void Jump();

	/**
	*	@brief Get the distancie value
	*	@return distancie
	*/
	int getDistancie();

	/**
	*	@brief Get the Jump Length
	*	@return jumoLenght
	*/  
	int getJumpLength();

	/**
	*	@brief Set jumpLength value
	*/
	void setJumpLength();
	
	/**
	*	@brief Get the Jump Counter
	*	@return jumpCounter
	*/
	int getJumpCounter();

	/**
	*	@brief get the object ID
	*	@return ID
	*/
	std::string getID();

	/**
	*	@brief Set values like *distancie* and *jumpCounter*
	*	@param Frog F1
	*	@param Frog F2
	*	@param Frog F3
	*/ 
	static void setValues( Frog* , Frog* , Frog* );

	/**
	*	@brief Call getName() funtions
	*	@param Frog F1
	*	@param Frog F2
	*	@param Frog F3
	*/
	static void setNames( Frog* , Frog* , Frog* );

	/**
	*	@brief Check who's the winner
	*	@param Frog F1
	*	@param Frog F2
	*	@param Frog F3
	*	@return True or False
	*/
	static bool winner( Frog* , Frog* , Frog* );

	/**
	*	@brief Set the total distance of the race
	*/
	static int distance;

	/**
	*	@brief Set variable to repet race
	*/
	static 	bool otherRace;
};

/**
*	@brief Prints the results of the race
*	@param Frog F1
*	@param Frog F2
*	@param Frog F3
*/
void Print(Frog* , Frog* , Frog* );

#endif