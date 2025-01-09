#include<SFML/Graphics.hpp>
#include "Player.h"
#include "Level.h"
using namespace sf;

void handleInput(Player& player, float deltaTime);
//void collisionCheck(float px, float py, int levelData);


int main() {
	//create the main window
	RenderWindow window(VideoMode(800, 600), "Pacman");

	//Instiantate game objects
	Player player;
	Clock clock;
	Level level;

	//Zone Game Loop#########################################################
	while (window.isOpen()) {
		float deltaTime = clock.restart().asSeconds();

		//EVENT (input) section--------------------------------
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		//Handle player input for movement
		handleInput(player, deltaTime);
		//collisionCheck();

		//RENDER section------------------------------------------------------------
		window.clear(); // clear screen

		level.draw(window);
		player.draw(window);

		window.display();//update the window


	}//end of game loop###########################################################

	return 0;
}



void handleInput(Player& player, float deltaTime) {
	float speed = 200.0f;
	//check for key presses and move the player accordingly
	if (Keyboard::isKeyPressed(Keyboard::Left)) player.move(-speed * deltaTime, 0); // move left
	if (Keyboard::isKeyPressed(Keyboard::Right)) player.move(speed * deltaTime, 0); // move Right
	if (Keyboard::isKeyPressed(Keyboard::Up)) player.move(0, -speed * deltaTime); // move Up
	if (Keyboard::isKeyPressed(Keyboard::Down)) player.move(0, speed * deltaTime); // move Down
}

//bool checkCollision(float px, float py, int levelData) {
	// Check if the coordinates are within bounds
	//if (px < 0 || px >= 800 || py < 0 || py >= 600) {
		//return true; // Out of bounds
	//}

	// Return true if the cell is not walkable (1 indicates an obstacle)
	//return levelData[py][px] == 1;
//}
