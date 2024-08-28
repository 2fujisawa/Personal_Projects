import random #importing random module

MAX_LINES = 3 #this is a constant line as it is in all caps which means it canot be changed

MIN_BET = 1
MAX_BET = 100

ROWS = 3
COLUMNS = 3

#Using a dictionary to store the symbols for the slot machine
qty_ofsymbols = { 
    "@" : 1, 
    "^" : 2,
    "%" : 3, 
    "&" : 4,
    "$" : 5 
} 
vlu_ofsymbols = {
    "@" : 5, 
    "^" : 4,
    "%" : 3, 
    "&" : 2,
    "$" : 1 
}

def check_winnings(columns,lines,bet,values):
     win = 0
     winning_lines = []
     for line in range(lines):
          symbol = columns[0][lines] #Assigns the first symbol of the column in the current line
          for column in columns: 
               checksymbol = column[line] #checks if the symbol for all of the columns
               if symbol !=  checksymbol:
                    break
          else: #else statment comes here as if the break statment doesn't run this else statment will automatically run after the loop ends
            win = values[symbol] * bet
            winning_lines.append(lines + 1) # as we want the final output to show 1,2,3, not 0,1,2
            
     return win, winning_lines
                    
                    
def set_slot_machine(rows, cols, symbols): 
     all_symbols = [] #stores the qty of symbols used throughout the spin
     columns = [] #store final output with list of columns each represented as lists of symbols

     for symbol,value in symbols.items(): #symbol.item method allows you to take in both the key and value of a dictionary in this scenario
          for _ in range(value):
               all_symbols.append(symbol)# adding all of the symbols into one list uisng the qty stated in for loop

     for _ in range(cols):
        column = [] #creating a new list for every column created 
        current_symbols = all_symbols[:] #for every column you are copying all of the symbols from all_symbol variable to current symbol
                                        #however you loop through it again depending on the range of the rows 
        for _ in range(rows):
             value = random.choice(current_symbols) #randomly selects a symbol from the all_symbol list
             current_symbols.remove(value) #removing one quanity of the symbol that has been randomly picked
             column.append(value)

        columns.append(column)
        
     return columns
     
def print_slot_machine(columns): #flips how the rows get printed
    for row in range(len(columns[0])):#first column of the columns list
        for i,column in enumerate(columns):
            if i != len(columns) - 1:
                print(column[row], end=" | ") #telling print statement to end the line with | 
            else:
                print(column[row], end="")

        print()
          
def deposit(): #deposit function to input money
    while True:
        money = input("Enter the deposit into the slot machine: $")
        if money.isdigit(): #checks if the value is a valid number
            money = int(money) # makes the conversion from string number to integer
            if money > 0:
                break
            else:
                print("The amount must be greater than 0")
        else:
            print("Enter a number")
    return money


def get_number_of_lines(): #get number of lines for slot machine
        while True:
            line = input("Enter number of lines you want to bet on 1-" + str(MAX_LINES) +": ")
            if line.isdigit(): #checks if the value is a valid number
                line = int(line) # makes the conversion from string number to integer
                if line > 0 and line <= MAX_LINES:
                    break
                else:
                    print("The lines must be greater than 0 or under 3")
            else:
                print("Enter a number")
        return line

def get_bet():
            while True:
                bet = input("How much would you like to bet on each line? ")
                if bet.isdigit(): #checks if the value is a valid number
                    bet = int(bet) # makes the conversion from string number to integer
                    if bet >= MIN_BET and bet <= MAX_BET:
                        break
                    else:
                        print("The bet value should be above 0 and below 100")
                else:
                    print("Enter a number")
            return bet

def spin(balance):

    lines = get_number_of_lines() #betting on the amount of lines

    while True: #while true we want to loop through the machine
        bet = get_bet() #get the bet amount 
        total_bet = str(lines * bet) #multiply the bet value to the lines

        if(balance < bet): #if bet is less than the balance then keep asking for the bet amount
                print("Invalid balance, you have $" + str(balance) + " left")
        else: # if bet is lower than the bet amount then break the loop
                break

    print("You are betting $" + str(bet) + " on " + str(lines)+ " lines. The total bet is $" + total_bet)

    slots = set_slot_machine(ROWS,COLUMNS,qty_ofsymbols)
    print_slot_machine(slots)

    win,winning_lines = check_winnings(slots,lines,bet,vlu_ofsymbols)
    print("You won $" + str(win))
    print("You won on lines: ", *winning_lines )# astricks is a unpacking operator so it will so the lines passing through from the list 

    return win - int(total_bet)

def main():
    balance = deposit()#depositing the money 
    while True: 
         print("Current balance: $" + str(balance))
         begin = input("Press any to spin (q to quit): ")
         if begin == "q":
              break
         else: 
            balance = balance + spin(balance)
    print("Your final balance is $" + str(balance))

main()
