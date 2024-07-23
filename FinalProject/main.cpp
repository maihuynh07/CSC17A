#include <cstdlib>
#include "poker.h"
using namespace std;

int main(int argc, char** argv) {
    Poker game;
    game.initializeGame();
    do{
        try{
            game.getInput();
            game.update();
            game.render();
        }
        catch(Poker::WrongAnswer){
            cout << "Error. You must type 'y' or 'n'( yes no question) and a number between 1 and 5";
        }
    }while(game.getStatus() != static_cast<short>(GAME_STATUS::END));
    return 0;
}

