#define private public
#include "classes.hpp"
int Frog::distance;

/*
*	@brief Check who get the first place
*/
bool Frog::winner(Frog* F1, Frog* F2, Frog* F3){
	
	//All win condition
	if( ( F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2 ) && ( F1->jumpLenght == F2->jumpLenght) && (F1->jumpLenght == F3->jumpLenght)) 	{
		return false;
	}	
	//Single win condition
	else if(F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2)
	{
		F2->jumpLenght = 0;
		F3->jumpLenght = 0;
		return false;
	}
	else if(F2->jumpLenght == Frog::distance || F2->jumpLenght == Frog::distance + 1 || F2->jumpLenght == Frog::distance + 2)
	{
		F1->jumpLenght = 0;
		F3->jumpLenght = 0;
		return false;
	}	
	else if(F3->jumpLenght == Frog::distance || F3->jumpLenght == Frog::distance + 1 || F3->jumpLenght == Frog::distance + 2)
	{
		F1->jumpLenght = 0;
		F2->jumpLenght = 0;
		return false;
	}
	//2 draw condition
	else if( ( F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2 ) && ( F1->jumpLenght == F2->jumpLenght) ) 	{
		F3->jumpLenght = 0;
		return false;
	}	
	else if( ( F1->jumpLenght == Frog::distance || F1->jumpLenght == Frog::distance + 1 || F1->jumpLenght == Frog::distance + 2 ) && ( F1->jumpLenght == F3->jumpLenght) ) 	{
		F2->jumpLenght = 0;
		return false;
	}	
	else if( ( F2->jumpLenght == Frog::distance || F2->jumpLenght == Frog::distance + 1 || F2->jumpLenght == Frog::distance + 2 ) && ( F2->jumpLenght == F3->jumpLenght) ) 	{
		F1->jumpLenght = 0;
		return false;
	}	
	//Keep the loop
	else return true;
}

Frog::Frog() {
	this->distancie = 0;
	this->jumpCounter = 0;
	this->jumpLenght = 0;
}

Frog::~Frog() {
	//TO-DO
}

void Frog::setName() {
	std::string frogName;
	getline( std::cin, frogName );
	this->ID = frogName;
}

void Frog::Jump() {
	//std::srand( std::time(0) );
	this->distancie = rand() % 3 + 1;
	this->jumpLenght += this->distancie;
	this->jumpCounter++;

}

void Print( Frog* fred, Frog* willem, Frog* simon ) {
	//All draw
	if(simon->jumpLenght == willem->jumpLenght && simon->jumpLenght == fred->jumpLenght && fred->jumpLenght == willem->jumpLenght) {
			std::cout << "All win!!!" << std::endl;	
		std::cout << simon->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << simon->jumpLenght << std::endl;
	}

	//Single winners
	else if(fred->jumpLenght != 0) {
		std::cout << "Winner: " << fred->ID << std::endl;	
		std::cout << fred->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << fred->jumpLenght << std::endl;
	}
	else if(willem->jumpLenght != 0) {
		std::cout << "Winner: " << willem->ID << std::endl;
		std::cout << willem->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << willem->jumpLenght << std::endl;
	}
	else if(simon->jumpLenght != 0) {
			std::cout << "Winner: " << simon->ID << std::endl;	
		std::cout << simon->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << simon->jumpLenght << std::endl;
	}
	
	
	//Draws
	else if(fred->jumpLenght == willem->jumpLenght) {
			std::cout << "Winners: " << fred->ID << " and " << willem->ID << std::endl;	
		std::cout << fred->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << fred->jumpLenght << std::endl;
	}
	else if(fred->jumpLenght == simon->jumpLenght) {
			std::cout << "Winners: " << fred->ID << " and " << simon->ID << std::endl;
		std::cout << simon->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << simon->jumpLenght << std::endl;
	}
	else if(simon->jumpLenght == willem->jumpLenght) {
			std::cout << "Winners: " << simon->ID << " and " << willem->ID << std::endl;
		std::cout << simon->jumpCounter << " Jumps" << std::endl;
		std::cout << "distancie: " << simon->jumpLenght << std::endl;
	}

}

