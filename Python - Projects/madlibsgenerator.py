#functions are out of classes
#methods are usually from classes 

with open("story.txt", 'r')as textfile: #open function opens the txt file as textfile 
    story = textfile.read() #using read function to read the file and set it to the variable story, 'read() is a built in function 

    #words = [] #this is a list but in this scenario we will use a set method
    words = set()
    startofword = -1 #setting -1 here in order to indicate that the start of the word hasn't started

    startingchar = "<"
    endingchar = ">"


for index, char in enumerate(story): #enumerates(goes through one by one) through the entire loop and sets the charater to a index
    if char == startingchar:  #if a character is equal to the starting character then this initiates
        startofword = index #the startofword is set to the index wher ethe starting chracter was found

    if char == endingchar and startofword != -1: #if the endingcharacter is found in the char and the start of the word has started then this statement will initiate
        word = story[startofword: index + 1] #sets the variable word with the string created from the index starting from the where the word started and end at where index found the ending char and add +1 so it actually includes the last character

        # words.append(word) #this would be if we used a list
        words.add(word) #we are using a set add method here since we want to only take out the unique words so one of a kind instead of duplicates
        startofword = -1

sorted = sorted(list(words))#converting the set of words to a list so we are able to use the list method and sort it in alpahbetical order through using the sort method after that

answers = {} #empty dictionary key,value pairs dictinaryies have curly baraces({})
for w in sorted: #this will loop throug the set and loop through every loop as w
    answer = input("\nEnter the word for: " + w + " ") #When using the input statment you can only use the + as you can only concatinate(adding two strings together)
    answers[w] = answer #you need to use [] when trying to access within dictionaries, curly braces are only used whne defining the dictionary itself

for w in sorted:
    story = story.replace(w, answers[w]) #assigns every word in the sorted set with the new answer[w]
    #this replaces the story variable which read the textfile, so not the textfile itself doesn't get changed

print(story)

        

#print("\nThe chosen words are: ", words, "\n")# we use , in this scenario since we are not trying to concatinate(adding two strings together), we are using a comma which will only create a space between the two inputs

