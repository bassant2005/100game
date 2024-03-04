#include <iostream>
#include <vector> //array
#include <algorithm>
/*Using the random library to make the player share the game with the computer 
and make the computer choose a random number*/
#include <ctime>
using namespace std;
int main(){
    //welcome message
    cout << "welcome,let's play 100 game\nrules:";
    cout <<"\n1-in each round every player can add a number [1:10]\n2-who got 100 first win ;)\n   \n";
    //Keep the game opened until the player asks to exit
    while (true)
    {
      string choices [10]= {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
      //a counter to Decide when the game stops
      int game_counter=0;
      //menu to start and stop the game
      cout<<"1)play\n2)exit\n(1 or 2)-> " ;
      string start ;
      cin >> start ;
      if (start == "1")
      {
        //menu to chooise the players
        cout<<"you want to play with:\n1) computer \n2) a friend \n(1 or 2)-> ";
        string players;
        cin >> players;
        //playing with friend
        if (players=="2"){ 
        cout<<"Valid choices are: 1,2,3,4,5,6,7,8,9,10\n";
        //Keep the game opened until the counter>100
        while (game_counter<100){           
           //limit the choises when we got >90 sum         
           if (game_counter > 90) {
           cout<<"you can choise number greter than 0 and less than "<<101-game_counter<<"\n";
            }      
            string player1;
            while (true) {
             cout<<":> player 1 : ";
             cin>>player1;
             //check if the input is valid
             if (find(begin(choices),end(choices), player1) != end(choices)) {
             break;
                  }
                }
            game_counter+=stoi(player1);
            //see if player 1 is the winner
            if(game_counter > 99)
            {
             cout<<"summation now = "<<game_counter<<"\n";
             cout << "Player1 won:)\n";
             break;
            }
             //limit the choises when we got >90 sum         
              if (game_counter > 90) {
                cout<<"you can choise number greter than 0 and less than "<<101-game_counter<<"\n";
            }        
            string player2;
            while (true) {
             cout<<":) player 2 : ";
             cin>>player2;
             //check if the input is valid
             if (find(begin(choices),end(choices), player2) != end(choices)) {
             break;
                  }
                }
            game_counter+=stoi(player2);
            //to help the players
            cout<<"summation now = "<<game_counter<<"\n"; 
            //see if player 2 is the winner
            if(game_counter > 99)
            {
             cout << "Player2 won:)\n";
             break;
            }  
          }

         //playing with computer
         }else if(players=="1"){
        cout<<"Valid choices are: 1,2,3,4,5,6,7,8,9,10\n";
        //Keep the game opened until the counter>100
        while (game_counter<100)
        {  //limit the choises when we got >90 sum 
            if (game_counter > 90) {
            cout<<"you can choise number greter than 0 and less than "<<101-game_counter<<"\n";
            }      
            string player1;
            while (true) {
             cout<<"player : ";
             cin>>player1;
             //check if the input is valid
             if (find(begin(choices),end(choices), player1) != end(choices)) {
             break;
                  }
                }
            game_counter+=stoi(player1);
            //see if player is the winner
            if(game_counter > 99)
            {
             cout<<"summation now = "<<game_counter<<"\n";
             cout << "Player won:)\n";
             break;
            }
            //limit the choises when we get 90 or more
            if (game_counter > 90)
            {
            srand(time(NULL)) ;
            int computer;
            computer = 1+rand()%(100-game_counter);
            cout<<"computer : "<<computer <<"\n";
            game_counter+=computer;
            //to help the players
            cout<<"summation now = "<<game_counter<<"\n";
            continue;
            }
            //make the computer chooise a random choise from 1:10
            srand(time(NULL)) ;
            int computer;
            computer = 1+rand()%10;
            cout<<"computer : "<<computer <<"\n";
            game_counter+=computer;
            //to help the players
            cout<<"summation now = "<<game_counter<<"\n";
            //see if the computer is the winner
            if(game_counter > 99)
            {
             cout << "computer won,hard luck:(\n";
             break;
             }
         }
      }          
    }
  //turn off the game
  else if (start=="2"){
   cout<<"exit,bye! :(";
   break;}
  //unvalid choises 
  else{
    cout<<"there is something wrong,try again \n";
    continue;
    } 
  }
} 