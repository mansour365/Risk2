#include "GameEngine.h"

int main() {
	GameEngine game = GameEngine();  //Create GameEngine Object called game using default constructor
					 //This will ask to select the map
					 //create the deck based on the map
					 //create the dice
					 //ask for number of player
					 //associate all this objects with the game object (has a)
					 
	game.startupPhase();
	game.mainGameLoop();
	return 0;
}
