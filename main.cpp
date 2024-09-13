#include<SFML/Graphics.hpp>
using namespace sf;

int main() {
	//create the main window
	RenderWindow window(VideoMode(800, 600), "Pacman");

	//Zone Game Loop#########################################################
	while (window.isOpen()) {

		//EVENT (input) section--------------------------------
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		//RENDER section------------------------------------------------------------
		window.clear(); // clear screen

		window.display();//update the windo


	}//end of game loop###########################################################

	return 0;
}
