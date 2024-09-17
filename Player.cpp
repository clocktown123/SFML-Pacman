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
