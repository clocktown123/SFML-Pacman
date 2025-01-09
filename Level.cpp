#include "level.h"
using namespace std;

//constructor
//Level::Level() {
	//loadLevel();
//}

//draw level
void Level::draw(RenderWindow& window) {
	for (int row = 0; row < ROWS; ++row) {
		for (int col = 0; col < COLS; ++col) {
			int tileValue = layout[row][col];

			Color tileColor = (tileValue == 1) ? Color::Blue : Color::Black;

			RectangleShape tile(Vector2f(tileSize, tileSize));
			tile.setFillColor(tileColor);
			tile.setPosition(col * tileSize, row * tileSize);
			window.draw(tile);
		}
	}
}

// Get the value at a specific position
int Level::getTileValue(int row, int col) const {
	if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
		return layout[row][col];
	}
	return -1; // Invalid Position
}
