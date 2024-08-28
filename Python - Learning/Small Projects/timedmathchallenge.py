import random
import time #bringing in time module

operators = ["+", "-", "*"]

min = 3
max = 10 
total_problems = 10

def generate_problem(): #defining a function here that generates the math problems
    left = random.randint(min, max)
    right = random.randint(min,max)
    operator = random.choice(operators)

    expr = str(left) + " " + operator + " " + str(right) 
    answer = eval(expr) #the eval function automatically evalues an expression created even if its a string

    return expr,answer

wrong = 0
start = input("Press enter to start: ") #starting game

expr,answer = generate_problem()
print(expr, "=" , answer)

problems = []
answers = []
start_time = time.time() # give us time stamp in seconds

for n in range(total_problems): #this loops appends both problems and answers into a list and generates new problems for the amount of problems there are in the total_problems variable
    expr,answer = generate_problem()
    problems.append(expr)
    answers.append(answer)
    while True: 
        guess = input("Problem " + str(n + 1) + ": " + str(expr) + " = ")
        if guess == str(answer):
            break
        wrong += 1 #if it reaches this then that means they got the incorrect answer as it would need to pass the if statement

end_time = time.time() # give us time stamp in seconds

totaltime = end_time- start_time
print("You finished in", int(totaltime) , "seconds!")
print("The math questions were ", problems, "the answer for the problems were", answers)
print("You got", wrong, "questions wrong")

