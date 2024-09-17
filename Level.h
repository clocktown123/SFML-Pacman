#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
using namespace sf;

class Level {
public:
	Level(); //Constructor
	void loadLevel(); //load the level layout
	void draw(RenderWindow& window); // draw level

private:
	std::vector < RectangleShape> walls; // store all wall shapes
	//vectors are like python lists. they are arrays that can grow and shrink
	const int tileSize = 32; //size of each tile in pixels
	//constants are variables that can't chnage once set up
};
