import random

# A list of words that 
potential_words = ["bacon", "milk", "fruit", "toast", "orange"]

word = random.choice(potential_words)
word = word.lower()

letters = ["a", "b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"] 

guesses = []
maxfails = 7
fails = 0
current_word = ["_"]*len(word)


myWord = "answer"

x = myWord.join(potential_words)


while fails < maxfails:

    guess = input("Guess a letter: ")
    if guess in word:
        print("Oh you have guessed a letter")
        index = word.index(guess)
        print(index)
        current_word[index]= guess
        print(current_word)
        if "_" not in current_word:
            print("You got the right answer")
            break
        
        
    else:
        print ("Try again")
        fails = fails+1
        print("You have " + str(maxfails - fails) + " tries left!")
    
    

 #print(letters)

print(word)
  
