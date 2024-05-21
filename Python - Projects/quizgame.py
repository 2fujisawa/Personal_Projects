print("Welcome to the quiz game!")

answer = input("Do you want to play the game? ")

if answer.lower() == "yes":
    print("the game will start")

else:
    quit() #will quit the program


score = 0

cpu = input("What does CPU stand for? ")

if cpu.lower() == "central processing unit":
    print("Correct")
    score += 1

else: 
    print("wrong")


gpu = input("What does GPU stand for? ")

if cpu.lower() == "graphic processing unit":
    print("Correct")
    score += 1
else: 
    print("wrong")


print("You finished the quiz with the score: " + str(score) + " which also equals to " + str((score/2)*100) + "%")