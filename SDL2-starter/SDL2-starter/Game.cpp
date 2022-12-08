#include "Game.h"
#include <iostream>

void Game::render() {

}

void Game::update() {}



void Game::init() {
	boardTopLeftX = boardTopLeftY = 0;
	board = new Board();
	board->init();
}

