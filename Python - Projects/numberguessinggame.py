import random #module random 

randomnumbernum = random.randint(0,101) #generating random numbers in range of 0 to 100
count = 0

print("welcome to the number guessing game! Your objective is to guess the random number with 3 tries")

play = input("Would you like to play? ")#taking in a input as a string
if play.lower() == 'yes': 

        guess = int(input("Enter your first guess: "))
        count = count + 1
        print("Your current count is " + str(count))

        while guess < 0 or guess > 100:
                guess = int(input("Reenter your first guess again between the range 0 and 100: "))
                print("Your count is still " + str(count()))
                continue

        while guess != randomnumbernum:
                if guess < randomnumbernum:
                        playernumber = int(input("Your guessed number is lower than the random number, Reenter your guessing number: "))
                        count = count + 1
                        print("Your current count is " + str(count) )

                elif guess > randomnumbernum:
                        playernumber = int(input("Your guessed number is higher than the random number, Reenter your guessing number: "))
                        count = count + 1
                        print("Your current count is " + str(count))
                        

                if count >=3: #if instead of elif since you want to check for the count during the while loop over an over 
                        print("You couldn't guess the number in three tries")
                        break

        if guess == randomnumbernum:
                print("You correctly guessed the random number")

else: 
        print("The game isn't going to start")



