import random


def roll(): #function roll
    minimumvalue = 1
    maximumvalue = 6
    roll = random.randint(minimumvalue,maximumvalue)
    return roll


while True:
    players = int(input("Enter the number of players for this game (2-4):  "))
    if players > 1 and players < 5:
        break
    else:
        print("Invalid players please try again")

maxscore = 10

print(str(players) + " players are playing")
numberplayers = [0 for numbers in range(players)] #list comprehension where it adds a 0 for the amount of players in the variable players ex. [0,0,0]


while max(numberplayers) < maxscore: #the max will give the maximum value from list 

    for index in range(players):
        
        print("Player " + str(index + 1) + "'s turn" + "\n") # +1 here since counting list with 0

        while True:
            ask = input("Would you like to roll the dice? ").lower()
            if(ask == 'yes'):
                value = roll()

                if value == 1:
                    print("You rolled a 1, next players turn \n")
                    break

                else:
                    print("You rolled a " + str(value) + "!")
                    numberplayers[index] += value

                print("Your total score is " + str(numberplayers[index]),  "\n")

            elif(ask == "no"):
                print("The player is skipped their score is ", numberplayers[index])
                break


winner = max(numberplayers)
winnerindex = numberplayers.index(winner) + 1
print("The winning player is " + str(winnerindex))
        
        

  
        


        
    

                
    

        



        
    




