
#author: Sydney Owyang
#file: chabot.py
#created: 6/19/19

# --- Define your functions below! ---


# --- Put your main program below! ---
def intro():
  answer = input("How are you doing?\n")
  print("Oh Okay, well you are amazing and I love you <3!")   
  
  answer = input ("I want to get to know you. Are you excited for the next school year? Yes or No\n")
  if answer == "yes" or answer == "yeah" or answer == "yeet" or answer == "damn near" or answer == "Yes mam":
    print("That's amazing! Me too!! Press enter for more questions")
  else:
    print("I understand, school is difficult")
    answer = input ("Do you like english or math?\n")
  if answer == "math":
    print("I love working with numbers too!")
  elif answer == "english":
    print("English is amazing! What's  your favorite book?\n")
    answer = input("_")
    print("Wow I love that book too!")
  else:
    answer = input("_")
    print("Okay then")
  

from random import *

def pick_a_SpiritAnimal():
    animals = ["cat", "dolphin", "giraffe", "lion", "shark", "butterfly", "cheetah"]
    rand = Random()
    animal = rand.choice(animals)
    return animal 

def main():
  while True: 
    intro()
    answer = input("Do you know what your spirit animal is?\n")
    if answer == "yes":
      print("what is it?\n")
      answer = input("_")
      print("Wow, brilliant!")
    else:
      answer = input("I can give you one, what is your name?\n")
      print(answer+", I have given you an animal!", pick_a_SpiritAnimal())
    answer = input("Would you like the start over?\n")
    if answer == "no":
      print("okay goodbye")
      break
  #break 
       
    
    #print(pick_a_SpiritAnimal(answer))
main() 
  
  
    


# DON'T TOUCH! Setup code that runs your main() function.
if __name__ == "__main__":
  main()
