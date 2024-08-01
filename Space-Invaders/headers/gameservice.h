#pragma once 
class gameService {
private:
		void intialize(); // it will intialize an object
		void destroy();  // it will destroy those objects

public:
	gameService(); // the is a constructor
	~gameService(); // this is a destructor

	void ignite(); // this starts the game
	void update(); // this updates all the objects in the game
	void render(); // this displays our objects in the game
	bool isRunning(); // this checks if the game is still running

	
	    
};