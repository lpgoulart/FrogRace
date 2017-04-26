/**
*	@author Leonardo Goulart
*	@author UFRN - Universidade Federal do Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

/**
*	@see classes.hpp
*/

#include "classes.hpp"


int Frog::distance;

bool Frog::otherRace;

/*
*	@brief Check who get the first place
*/
bool Frog::winner(Frog* F1, Frog* F2, Frog* F3){
	
	//All win condition
	if( ( F1->getJumpLength() == F2->getJumpLength()) && (F1->getJumpLength() == F3->getJumpLength()) && ( F1->getJumpLength() == Frog::distance || F1->getJumpLength() == Frog::distance + 1 || F1->getJumpLength() == Frog::distance + 2 ) ) {
		return false;
	}	
	//Other winning conditions
	else if( F1->getJumpLength() == Frog::distance || F1->getJumpLength() == Frog::distance + 1 || F1->getJumpLength() == Frog::distance + 2 )
	{
		if( F1->getJumpLength() == F2->getJumpLength() ) {
			F3->setJumpLength();
		}
		else if( F1->getJumpLength() == F3->getJumpLength() ) {
			F2->setJumpLength();
		}
		else {
			F2->setJumpLength();
			F3->setJumpLength();
		}

		Print( F1, F2, F3 );
		return false;
	}
	else if(F2->getJumpLength() == Frog::distance || F2->getJumpLength() == Frog::distance + 1 || F2->getJumpLength() == Frog::distance + 2 )
	{
		if( F1->getJumpLength() == F2->getJumpLength() ) {
			F3->setJumpLength();
		}
		else if( F2->getJumpLength() == F3->getJumpLength() ) {
			F1->setJumpLength();
		}
		else {
			F1->setJumpLength();
			F3->setJumpLength();
		}

		Print( F1, F2, F3 );
		return false;
	}	
	else if(F3->getJumpLength() == Frog::distance || F3->getJumpLength() == Frog::distance + 1 || F3->getJumpLength() == Frog::distance + 2 )
	{
		if( F1->getJumpLength() == F3->getJumpLength() ) {
			F2->setJumpLength();
		}
		else if( F2->getJumpLength() == F3->getJumpLength() ) {
			F1->setJumpLength();
		}
		else {
			F1->setJumpLength();
			F2->setJumpLength();
		}
		Print( F1, F2, F3 );
		return false;
	}
	//Keep the loop
	else return true;
}

void Frog::setNames( Frog* F1, Frog* F2, Frog* F3 ) {

			std::cout << "Insert the name of the Frog¹: ";
		F1->getName();

			std::cout << "Insert the name of the Frog²: ";
		F2->getName();

			std::cout << "Insert the name of the Frog³: ";
		F3->getName();
}

void Frog::setValues( Frog* F1, Frog* F2, Frog* F3 ) {

	distance = 0;
	otherRace = true;

	F1->CFrog();
	F2->CFrog();
	F3->CFrog();

}

void Frog::CFrog() {

	this->distancie = 0;
	this->jumpCounter = 0;
	this->jumpLenght = 0;

}

Frog::Frog() {
	this->distancie = 0;
	this->jumpCounter = 0;
	this->jumpLenght = 0;
}

Frog::~Frog() {
	//TO-DO
}

void Frog::setJumpLength() {
	this->jumpLenght = 0;
}

int Frog::getDistancie() {
	return this->distancie;
}

int Frog::getJumpLength() {
	return this->jumpLenght;
}

int Frog::getJumpCounter() {
	return this->jumpCounter;
}

std::string Frog::getID() {
	return this->ID;
}

void Frog::getName() {
	std::string frogName;
	getline( std::cin, frogName );
	this->ID = frogName;
}

void Frog::Jump() {

	this->distancie = rand() % 3 + 0;
	this->jumpLenght += this->distancie;
	this->jumpCounter++;

}

void Print( Frog* F1, Frog* F2, Frog* F3 ) {
	//All draw
	if(F3->getJumpLength() == F2->getJumpLength() && F3->getJumpLength() == F1->getJumpLength() && F1->getJumpLength() == F2->getJumpLength()) {
			std::cout << "All win!!!" << std::endl;	
		std::cout << F3->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->getJumpLength() << std::endl;
	}
	//Draws
	else if(F1->getJumpLength() == F2->getJumpLength() && F1->getJumpLength() != 0) {
			std::cout << "Winners: " << F1->getID() << " and " << F2->getID() << std::endl;	
		std::cout << F1->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F1->getJumpLength() << std::endl;
	}
	else if(F1->getJumpLength() == F3->getJumpLength() && F1->getJumpLength() != 0) {
			std::cout << "Winners: " << F1->getID() << " and " << F3->getID() << std::endl;
		std::cout << F3->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->getJumpLength() << std::endl;
	}
	else if(F3->getJumpLength() == F2->getJumpLength() && F3->getJumpLength() != 0) {
			std::cout << "Winners: " << F3->getID() << " and " << F2->getID() << std::endl;
		std::cout << F3->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->getJumpLength() << std::endl;
	}
	//Single winners
	else if(F1->getJumpLength() != 0) {
		std::cout << "Winner: " << F1->getID() << std::endl;	
		std::cout << F1->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F1->getJumpLength() << std::endl;
	}
	else if(F2->getJumpLength() != 0) {
		std::cout << "Winner: " << F2->getID() << std::endl;
		std::cout << F2->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F2->getJumpLength() << std::endl;
	}
	else if(F3->getJumpLength() != 0) {
			std::cout << "Winner: " << F3->getID() << std::endl;	
		std::cout << F3->getJumpCounter() << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->getJumpLength() << std::endl;
	}
	
}

