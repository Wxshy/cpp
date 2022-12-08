
import pygame
from pygame.locals import *

SCREENWIDTH = SCREENHEIGHT = 600

class BoardSquare:
    def __init__(self, topx, topy, dim, is_white):
        self.topx = topx
        self.topy = topy
        self.dim = dim
        self.is_white = is_white


def calcSquare(x, y, isWhite):
    dim = SCREENWIDTH / 8
    xcord = x * dim
    ycord = y * dim
    return BoardSquare(xcord, ycord, dim, isWhite)

def createBoard():
    board = []
    isWhite = False
    for y in range(8):
        rank = []
        isWhite = not isWhite
        for x in range(8):
            rank.append(calcSquare(x, y, isWhite))
            isWhite = not isWhite
        board.append(rank)

    return board

    


def main():
    pygame.init()
    pygame.font.init()

    win = pygame.display.set_mode((SCREENWIDTH,SCREENHEIGHT))
    pygame.display.set_caption('PyChess')
    
    board = createBoard()

    for rank in board:
        for s in rank:
            print(s.topx, s.topy, s.is_white)

   
    for rank in board:
        for square in rank:
            if square.is_white:
                colour = pygame.Color(255,255,255)
            else:
                colour = pygame.Color(0,0,0)

            

        pygame.draw.rect(win, colour, (square.topx,square.topy,600/8,600/8))
    run = True
    while run:
        mx, my = pygame.mouse.get_pos()
        print(mx,my)
        for e in pygame.event.get():
            if e.type == pygame.QUIT:
                run = False

        pygame.display.update()


    

if __name__ == "__main__":
    main()
