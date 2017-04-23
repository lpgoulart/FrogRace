/**
*	@author Leonardo Goulart
*	@author UFRN - Universidade Federal do Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

/**
*	@see class.cpp
*	@see class.hpp
*/

#define private public
#include "classes.hpp"
int main() {

	Frog* fred = new Frog;
	Frog* willem = new Frog;
	Frog* simon = new Frog;

	do{
		std::srand( std::time(0) );
		Frog::setValues( fred, willem, simon );

		while ( Frog::distance <= 0 ) {
		std::cout << "Set the distance: ";
			std::cin >> Frog::distance;	
					std::cin.ignore();
		}
		
		Frog::setNames( fred, willem, simon );
			
		std::cout << std::endl;
		std::cout << "Set...Ready...Go!!\n";
		
		while( Frog::winner( fred, willem, simon ) == 1 ) {

			fred->Jump();
			willem->Jump();
			simon->Jump();

			std::cout << "Jump distancie: " << fred->distancie << "|" << willem->distancie << "|" << simon->distancie << std::endl;
			std::cout << "Jumps: " << fred->jumpCounter << std::endl;
			std::cout << "Distance: " << fred->jumpLenght << "|" << willem->jumpLenght << "|" << simon->jumpLenght << std::endl;	

			std::cout << std::endl;
		} 

		std::cout << "\nWant to run again? \n(1) Run again\n(0) End race \n";
		std::cin >> Frog::otherRace;
		std::cout << "\033[2J\033[1;1H";
	}while ( Frog::otherRace == true );

	delete fred;
	delete willem;
	delete simon;
	
	return 0;
}
