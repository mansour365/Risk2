#pragma once
#include "Player.h"
#include <vector>
#include "GameObservers.h"

class GameEngine : public Subject{
private:
	Map* map;  //pointer called map, points to memory of size map
	std::vector<Player*>* players;  //pointer called players, points to memory of size of (vector of type Player)
	Deck* deck; //pointer called deck, points to memory of size Deck
	Dice* dice; //pointer called dice, points to memory of size Dice

	Map* selectMap(); //method selectMap(), that returns a pointer of type Map
	std::vector<Player*>* selectNumberOfPlayers();  //method selectNumberOfPlayers(), returns pointer of (vector type Player)
	void determinePlayerOrder(); 
	void assignCountriesToPlayers();
	std::vector<int> totalArmyCountForEachPlayer(); //method totalArmyCountForEachPlayer(), returns (vector type int)
	void validateAllCountriesHavePlayers();
	Strategy* selectPlayerStrategy(); //method selectPlayerStrategy(), returns pointer of type Strategy

public:
	GameEngine();
	GameEngine(bool);
	~GameEngine();
	void startupPhase();
	void mainGameLoop();
	bool allCountriesHavePlayers();
	std::vector<ConcreteObserver*>* player_observers; //pointer called player_observer, points to memory size (vector type ConcreteObserver)
};
