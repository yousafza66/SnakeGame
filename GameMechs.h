#ifndef GAMEMECHS_H
#define GAMEMECHS_H

#include <cstdlib> //provides srand and rand
#include <time.h>  //can also be <ctime>

#include "objPos.h"
#include "objPosArrayList.h"
#include "Food.h"

using namespace std;


class GameMechs
{
    // Construct the remaining declaration from the project manual.

    // Only some sample members are included here

    // You will include more data members and member functions to complete your design.

    private:
        char input;
        bool exitFlag;
        bool loseFlag;
        bool winFlag;
        int score;

        int boardSizeX;
        int boardSizeY;

    public:
        GameMechs();
        GameMechs(int boardX, int boardY);
        
        bool getExitFlagStatus();
        bool getLoseFlagStatus();
        bool getWinFlagStatus();
        void setExitTrue();
        void setLoseFlag();
        void setWinFlag();

        char getInput(); 
        void setInput(char this_input);
        void clearInput();

        int getBoardSizeX();
        int getBoardSizeY();
        int getScore();
        void incrementScore(int num);  
};

#endif