#pragma once
#include "SDL.h"

class Board 
{
private: 
	
	SDL_Color boardColor1;
	SDL_Color boardColor2;

public:
	static int boxW;
	static int boxH;;
	static int boardXBoxes;
	static int boardYBoxes;
	void update();
	void render();
	void init();
	void renderBoard();
};