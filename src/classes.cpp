/**
*	@see classes.hpp
*/
#define private public
#include "classes.hpp"


int Frog::distance;

bool Frog::otherRace;

/*
*	@brief Check who get the first place
*/
bool Frog::winner(Frog* F1, Frog* F2, Frog* F3){
	
	//All win condition
	if( ( F1->jumpLenght == F2->jumpLenght) && (F1->jumpLenght == F3->jumpLenght) && ( F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2 ) ) {
		return false;
	}	
	//Other winning conditions
	else if( F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2 )
	{
		if( F1->jumpLenght == F2->jumpLenght ) {
			F3->jumpLenght = 0;
		}
		else if( F1->jumpLenght == F3->jumpLenght ) {
			F2->jumpLenght = 0;
		}
		else {
			F2->jumpLenght = 0;
			F3->jumpLenght = 0;
		}

		Print( F1, F2, F3 );
		return false;
	}
	else if(F2->jumpLenght == Frog::distance || F2->jumpLenght == Frog::distance + 1 || F2->jumpLenght == Frog::distance + 2)
	{
		if( F1->jumpLenght == F2->jumpLenght ) {
			F3->jumpLenght = 0;
		}
		else if( F2->jumpLenght == F3->jumpLenght ) {
			F1->jumpLenght = 0;
		}
		else {
			F1->jumpLenght = 0;
			F3->jumpLenght = 0;
		}

		Print( F1, F2, F3 );
		return false;
	}	
	else if(F3->jumpLenght == Frog::distance || F3->jumpLenght == Frog::distance + 1 || F3->jumpLenght == Frog::distance + 2)
	{
		if( F1->jumpLenght == F3->jumpLenght ) {
			F2->jumpLenght = 0;
		}
		else if( F2->jumpLenght == F3->jumpLenght ) {
			F1->jumpLenght = 0;
		}
		else {
			F1->jumpLenght = 0;
			F2->jumpLenght = 0;
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

	F1->distancie = 0;
	F1->jumpCounter = 0;
	F1->jumpLenght = 0;

	F2->distancie = 0;
	F2->jumpCounter = 0;
	F2->jumpLenght = 0;

	F3->distancie = 0;
	F3->jumpCounter = 0;
	F3->jumpLenght = 0;

}

Frog::Frog() {
	this->distancie = 0;
	this->jumpCounter = 0;
	this->jumpLenght = 0;
}

Frog::~Frog() {
	//TO-DO
}

void Frog::getName() {
	std::string frogName;
	getline( std::cin, frogName );
	this->ID = frogName;
}

void Frog::Jump() {

	this->distancie = rand() % 3 + 1;
	this->jumpLenght += this->distancie;
	this->jumpCounter++;

}

void Print( Frog* F1, Frog* F2, Frog* F3 ) {
	//All draw
	if(F3->jumpLenght == F2->jumpLenght && F3->jumpLenght == F1->jumpLenght && F1->jumpLenght == F2->jumpLenght) {
			std::cout << "All win!!!" << std::endl;	
		std::cout << F3->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->jumpLenght << std::endl;
	}
	//Draws
	else if(F1->jumpLenght == F2->jumpLenght && F1->jumpLenght != 0) {
			std::cout << "Winners: " << F1->ID << " and " << F2->ID << std::endl;	
		std::cout << F1->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F1->jumpLenght << std::endl;
	}
	else if(F1->jumpLenght == F3->jumpLenght && F1->jumpLenght != 0) {
			std::cout << "Winners: " << F1->ID << " and " << F3->ID << std::endl;
		std::cout << F3->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->jumpLenght << std::endl;
	}
	else if(F3->jumpLenght == F2->jumpLenght && F3->jumpLenght != 0) {
			std::cout << "Winners: " << F3->ID << " and " << F2->ID << std::endl;
		std::cout << F3->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->jumpLenght << std::endl;
	}
	//Single winners
	else if(F1->jumpLenght != 0) {
		std::cout << "Winner: " << F1->ID << std::endl;	
		std::cout << F1->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F1->jumpLenght << std::endl;
	}
	else if(F2->jumpLenght != 0) {
		std::cout << "Winner: " << F2->ID << std::endl;
		std::cout << F2->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F2->jumpLenght << std::endl;
	}
	else if(F3->jumpLenght != 0) {
			std::cout << "Winner: " << F3->ID << std::endl;	
		std::cout << F3->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << F3->jumpLenght << std::endl;
	}
	
}

