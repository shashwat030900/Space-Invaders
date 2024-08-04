#pragma once

#include <SFML/Graphics.hpp>

class GraphicService
{
private:

	const std::string game_window_title = "Outscal Presents - Alien Invader";

	const int game_window_width = 800;
	const int game_window_height = 600;

	const sf::Color window_color = sf::Color::Blue;

	sf::VideoMode* video_mode; // ptr to video mode
	sf::RenderWindow* game_window; // ptr to a RenderWindow

	void setVideoMode(); // Method for setting our video mode
	void onDestroy(); // method to run when window is deleted

public:
	GraphicService();
	~GraphicService(); //cleanup

	//method to create the game window. returns a pointer to an instance of the game window
	sf::RenderWindow* createGameWindow();


	void initialize(); //lifecycle functions
	void update(); //..
	void render(); //..
	bool isGameWindowOpen(); //check if the window is open

	sf::RenderWindow* getGameWindow(); //getter for the game window instance
	sf::Color getWindowColor();//get the color
};