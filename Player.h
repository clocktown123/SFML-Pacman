#pragma once // this h file is only compiled once

#include<SFML/Graphics.hpp>
using namespace sf;

class Player {
public:
	Player();//constructor
	void move(float deltaX, float deltaY); // moves the player
	void draw(RenderWindow& window); // draws the player

private:
	CircleShape shape; // shape represents the player


};
