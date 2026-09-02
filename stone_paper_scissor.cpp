#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));
        cout << "======== ROCK, PAPER, SCISSOR ========" << endl << endl;
        cout << "choose your answer" << endl << endl;
  
        string input;
        cin >> input ;
        int x = rand() % 3;
        if(x == 0){
            cout << " the computer has chosen ROCK " << endl << endl;
            if(input == "paper"){
                cout << "you have won the match" << endl;
            }
            else if(input == "rock"){
                cout << "you have drawn the match" << endl;
               
            }
            else if(input == "scissor"){
                cout << "you have lost the match" << endl;
            }
            else{
                cout << " the input you gave does not match the programme so try better" << endl;
            }

        }

        else if( x == 1){
            
            cout << " the computer has chosen PAPER " << endl << endl;
            if(input == "paper"){
                cout << "you have drawn the match" << endl;
            }
            else if(input == "rock"){
                cout << "you have lost the match" << endl;
               
            }
            else if(input == "scissor"){
                cout << "you have won the match" << endl;    
            }
            else{
                cout << " the input you gave does not match the programme so try better" << endl;
            }
        }
        else {
            
            cout << " the computer has chosen SCISSOR" << endl << endl;
            if(input == "paper"){
                cout << "you have lost the match " << endl;
            }
            else if(input == "rock"){
                cout << "you have won the match" << endl;
               
            }
            else if(input == "scissor"){
                cout << "you have drawn the match" << endl;
            }
            else{
                cout << " the input you gave does not match the programme so try better" << endl;
            }
        }
        
    
    return 0;
}