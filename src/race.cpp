/**
*	@author Leonardo Goulart
*	@author UFRN - Universidade Federal do Rio Grande do Norte
*	@author Project to Programmig Language 1
*/

#define private public
#include "classes.hpp"
int main() {

	Frog* fred = new Frog;
	Frog* willem = new Frog;
	Frog* simon = new Frog;

	bool otherRace = true;

	do{

		std::cout << "Set the distance: ";
		std::cin >> Frog::distance;
		
		std::cin.ignore();
			std::cout << "Insert the name of the Frog¹: ";
		fred->setName();

			std::cout << "Insert the name of the Frog²: ";
		willem->setName();

			std::cout << "Insert the name of the Frog³: ";
		simon->setName();
			
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

		Print( fred, willem, simon );

		std::cout << "\nWant to run again? \n(1) Run again\n(0) End race \n";
		std::cin >> otherRace;
	}while ( otherRace == true );
	
	return 0;
}
