#Example BigO notation question
#O(1)
def amount_of_reading_a_day(bookcount, hours_spent, index): 
    average = bookcount[index]/hours_spent[index]
    return average


bookcount = [10, 8, 20, 4, 6, 12, 14]
hours_spent = [5, 4, 8, 2, 3, 4, 7]

print("Linus spent an average of", amount_of_reading_a_day(bookcount,hours_spent, 2), "hours reading a books on tuesday")

'''
So the Big O here would be O(1)
 - The lists that are put into the parameter are not being looped 
 - They are just being dived and the argument has a index 
 - The execution is going to be constant

'''


#O(n)
def get_squared_numbers(numbers): #Creating function with argument numbers
    squared_numbers = [] #Creating a new list for the squared numbers

    for n in numbers: #looping through the List that is put into the parameter 
        squared_numbers.append(n*n) #appending each item in the list and multipying it by itself

    return squared_numbers #return the numbers in the list
    
#Initiating the test cases    
numbers = [2,4,6,8,10]
get_squared_numbers(numbers)
#Printing output
print(get_squared_numbers(numbers))

'''
So the BigO here would be O(n)
- Since we are running n iterations we are depending on the size of the array getting inputted
- Take he time it takes to run a programs runs equally portionate to  the amount of computation(math) it is doing 
- The time will grow linearly depeneding on the array inputted in the parameter
'''
