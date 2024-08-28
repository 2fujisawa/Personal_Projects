import random #importing random module

userscore = 0
computerscore = 0
options = ["rock", "paper", "scissors"] # data structure collection of elements # 0,1,2 when indexing

while True: 
    userchoice = input("Enter your decision between rock, paper, scissors or q to quit: ").lower() #converting user input to lowercase letters
    if userchoice == 'q':
        print("You quit the game")
        break # quit() if you put a  quit function here, it quits the entire python program instead of just breaking the loop

    if userchoice not in options: #list
        continue #loop over the while loop to enter a decision


    computerchoice = random.choice(options) #picking a random word from the list options

    print("The computer picked the choice " + computerchoice)

    if(userchoice == computerchoice):
        print("You guys chose the same option no points added go again")

    elif(userchoice == "rock" and computerchoice == "scissors"):
        userscore += 1
        print("Userwins: +1")

    elif(userchoice == "paper" and computerchoice == "rock"):
        userscore += 1
        print("Userwins: +1")

    elif(userchoice == "scissors" and computerchoice == "paper"):
        userscore += 1
        print("UserWins: +1")
        
    else:
        computerscore +=1
        print("ComputerWins: +1")
    
    print("User: " + str(userscore) + "\nComputer: " + str(computerscore))



    



    

                      
    
        
