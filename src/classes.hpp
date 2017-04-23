#ifndef _CLASSES_HPP_
#define _CLASSES_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
//#include <ctime>

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
	void setName();

	/**
	*	@brief Get values like *distancie* and *jumpCounter*
	*/ 
	void setValues();

	/**
	*	@brief Increase the jumpCounter and set a new value for distance of the jump
	*/
	void Jump();

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
};

/**
*	@brief Prints the results of the race
*	@param Frog 
*	@param Frog 
*	@param Frog 
*/
void Print(Frog* , Frog* , Frog* );

#endif