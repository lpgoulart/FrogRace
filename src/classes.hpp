#ifndef _CLASSES_HPP_
#define _CLASSES_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
	*	@brief Function to set the name of an object
	*/
	void getName();

	/**
	*	@brief Increase the jumpCounter and set a new value for distance of the jump
	*/
	void Jump();

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