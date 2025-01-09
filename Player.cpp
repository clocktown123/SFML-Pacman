#include "Player.h"


Player::Player() {
	shape.setRadius(15); // set the radius of pacman
	shape.setFillColor(Color::Yellow); // set the color to yellow
	shape.setPosition(100, 100); // Initial position of pacman

}

//move the player by deltaX and deltaY
void Player::move(float deltaX, float deltaY) {
	shape.move(deltaX, deltaY);
}

//draw player to the windo
void Player::draw(RenderWindow& window) {
	window.draw(shape);
}

//void Player::update(float deltaTime, const Level& level) {

	//enum DIRECTIONS {RIGHT, LEFT, UP, DOWN, STOP};
	//int direction = STOP;

	//if (vy < 0) direction = UP; else if (vy > 0) direction = DOWN; else direction = STOP;

	//check for vertical collision
	//if (direction == DOWN) {
	//	if (level.getTileValue())
	//}

//}
