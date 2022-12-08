#include "Board.h"
#include "Game.h"
#include "Window.h"

int Board::boxW;
int Board::boxW;
int Board::boardXBoxes;
int Board::boardYBoxes;

void Board::render() {
	renderBoard();


}

void Board::renderBoard() {
	SDL_Rect drawRect;

	drawRect.w = boxW;
	drawRect.h = boxH;
	for (int x = 0; x < boardXBoxes; ++x) {
		for (int y = 0; y < boardYBoxes; ++y) {
			SDL_Color currentColor = (x + y) % 2 == 0 ? boardColor1 : boardColor2;
			drawRect.x = Game::boardTopLeftX + x * boxW;
			drawRect.y = Game::boardTopLeftY + y * boxH;

			SDL_SetRenderDrawColor(Window::renderer, currentColor.r, currentColor.g, currentColor.b, currentColor.a);
			SDL_RenderFillRect(Window::renderer, &drawRect);
		}
	}
}