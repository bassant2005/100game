#Using the random library to make the player share the game with the computer 
#and make the computer choose a random number
import random 
choices=["1","2","3","4","5","6","7","8","9","10"] 
print('''welcome,let's play 100 game
rules:
1-in each round every player can add a number [1:10]
2-who got 100 first win ;)''')   
#Keep the game opened until the player asks to exit
while True:
    #a counter to Decide when the game stops
    game_counter=0
    #menu to start and stop the game                                  
    start=input('''1)play
2)exit
(1 or 2)-> ''').upper()
    if start==('2'):
        print("exit,bye! :(")
        break
    elif start==('1'):
        # Choose between playing with the computer or with a friend       
        players=input('''you want to play with:
1) computer 
2) a friend 
(1 or 2)-> ''').upper()
        #playing with a friend
        if players==('2'):
            print("valid choices are ",choices)
            #Keep the game opened until the counter<100
            while game_counter<100: 
                #make sure the player choice is correct   
                if game_counter > 90:
                    print("Now you can only choose number greter than 0 and less than ",len(choices[:(100 - game_counter)+1]))
                    valid_choices = choices[:(100 - game_counter)]
                else:
                    valid_choices = choices
                player1 = None
                while player1 not in valid_choices or player1.isdigit() is False:
                    player1=input(":> player 1 : ")
                game_counter+=int(player1)
                #Decide if player1 is the Winner
                if game_counter>99:
                    print("summation now = ",game_counter)
                    print("player1 won :)")
                    break 
                #make sure the player choice is correct     
                if game_counter > 90:
                    print("Now you can only choose number greter than 0 and less than ",len(choices[:(100 - game_counter)+1]))
                    valid_choices = choices[:(100 - game_counter)]
                else:
                    valid_choices = choices   
                player2 = None                             
                while player2 not in valid_choices or player1.isdigit() is False:  
                    player2=input(":) player 2 : ")
                game_counter+=int(player2)
                #to help the player
                print("summation now = ",game_counter)
                #Decide if player2 is the Winner
                if game_counter>99:
                    print("player2 won :)")
                    break
        #playing with the computer           
        elif players==('1'):   
            print("valid choices are ",choices)
            #Keep the game opened until the counter<100
            while game_counter<100: 
                #make sure the player choice is correct    
                if game_counter > 90:
                    print("Now you can only choose number greter than 0 and less than ",len(choices[:(100 - game_counter)+1]))
                    valid_choices = choices[:(100 - game_counter)]
                else:
                    valid_choices = choices
                player1 = None
                while player1 not in valid_choices or player1.isdigit() is False:
                    player1=input("player : ")
                game_counter+=int(player1)
                #Decide if player1 is the Winner
                if game_counter>99:
                    print("summation now = ",game_counter)
                    print("player won :)")
                    break   
                #limit the choices after we get 90<counter     
                if game_counter > 90:
                    valid_choices = choices[:(100 - game_counter)]
                else:
                    valid_choices = choices
                computer=random.choice(valid_choices)     
                print("computer : ",computer)    
                game_counter+=int(computer)
                #to help the player
                print("summation now = ",game_counter)
                #Decide if the computer is the Winner
                if game_counter>99:
                    print("the computer won,hard luck :(")
                    break
        else:
            print ("there is something wrong, try again")
            continue
    else:
        print ("there is something wrong, try again")
        continue