#include "GameMechs.h"
#include "MacUILib.h"

//Think about where to seed the RNG PPA3 design

GameMechs::GameMechs()
{
    input  = 0;
    score=0;

    exitFlag= false;
    loseFlag= false;
    winFlag= false;
    boardSizeX= 20;
    boardSizeY= 10; 
}

GameMechs::GameMechs(int boardX, int boardY)
{
    input = 0;
    score = 0;
    exitFlag = false;
    loseFlag = false;
    winFlag= false;
    boardSizeX= boardX;
    boardSizeY= boardY;
}

// do you need a destructor?
bool GameMechs::getExitFlagStatus()
{
    return exitFlag;
}

bool GameMechs::getLoseFlagStatus()
{
    return loseFlag;
}

bool GameMechs::getWinFlagStatus()
{
    return winFlag;
}

char GameMechs::getInput()
{
    if(MacUILib_hasChar())
    {
        input = MacUILib_getChar();
        
    } 
    return input;
}

int GameMechs::getBoardSizeX()
{
    return boardSizeX;
}

int GameMechs::getBoardSizeY()
{
    return boardSizeY;
}

int GameMechs::getScore()
{
    return score;
}
void GameMechs::incrementScore(int num)
{
    score+=num;
}

void GameMechs::setExitTrue()
{
    exitFlag= true;
}

void GameMechs::setLoseFlag()
{
    loseFlag= true;
}

void GameMechs::setWinFlag()
{
    winFlag= true;
}

void GameMechs::setInput(char this_input)
{
    input= this_input;
}

void GameMechs::clearInput()
{
    input= ' ';
}


