#include <cstdlib>
#include "poker.h"
#include <regex>
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
        catch(WrongAnswer){
            cout << "Error. You must type 'y' or 'n'( yes no question)" <<endl;
        }
        catch(WrongNumber){
            cout << "Error. A number must be between 1 and 5"<<endl;
        }
        catch(...){
            cout << "Error.";
        }
    }while(game.getStatus() != static_cast<short>(GAME_STATUS::END));
    
    
    
    // add more exceptions as requirement
    bool flagShowCards = true;
    do{
        try{
            int choice = 0;
            string rep;

            cout << "\n***Do you want to see cards? (y/n): ";
            getline(cin >> ws,rep);
            // save answer of players
            transform(rep.begin(), rep.end(), rep.begin(), ::toupper);
            if(rep.compare(YES)!=0 ){
                if( rep.compare(NO)!=0)
                    throw WrongAnswer();
            }
            if(rep.compare(YES)==0){
                cout << "\n****You want to see cards of ( 1 = deck, 2 = dealer, 3 = yours): ";
                cin >> choice;
                regex pattern("^[1-3]{1}$");
                if(!regex_match(to_string(choice),pattern)){
                        throw WrongNumber();
                }
                game.showCards(choice);
            }
            else {
                flagShowCards = false;
            }

        }
        catch(WrongAnswer){
            Helper::displayMessage("Error. You must type 'y' or 'n'( yes no question)");
        }
        catch(WrongNumber){
            Helper::displayMessage("Error. A number must be between 1 and 3");
        }
    }while(flagShowCards);
    // add more exception as requirements
    // 2. test all aspects
    bool flag = true;
    do{
        try{
            int choice = 0;
            string rep;
            
            cout << "\n***Do you want to view aspects? (y/n): ";
            getline(cin >> ws,rep);
            // save answer of players
            transform(rep.begin(), rep.end(), rep.begin(), ::toupper);
            if(rep.compare(YES)!=0 ){
                if( rep.compare(NO)!=0)
                    throw WrongAnswer();
            }
            if(rep.compare(YES)==0){
                cout << "\n************   Menu  **********************************************" << endl;
                cout << "\n***1. Base class";
                cout << "\n***2. Subclass 1";
                cout << "\n***3. Subclass 2";
                cout << "\n***4. Composite class";
                cout << "\n***5. Template class";
                cout << "\n***Do you want to see which one? (choose one of numbers: 1,2,3,4,5): ";
                
                cin >> choice;
                regex pattern("^[1-5]{1}$");
                if(!regex_match(to_string(choice),pattern)){
                        throw WrongNumber();
                }
                
                game.showAspects(choice);
            }
            else{
                flag = false;
            }
        }
        catch(WrongAnswer){
            Helper::displayMessage("Error. You must type 'y' or 'n'( yes no question)");
        }
        catch(WrongNumber){
            Helper::displayMessage("Error. Your choice must be between 1 and 5");
        }
    }while(flag);
    
    return 0;
}

