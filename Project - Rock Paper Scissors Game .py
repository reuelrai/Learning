import random

def get_userChoice():
    userChoice = input("Enter your choice (rock, paper, scissors): ").lower()
    while userChoice not in ["rock", "paper", "scissors"]:
        print("Invalid choice. Please try again.")
        userChoice = input("Enter your choice (rock, paper, scissors): ").lower()
    return userChoice

def get_computerChoice():
    choices = ["rock", "paper", "scissors"]
    return random.choice(choices)

def determine_winner(userChoice, computerChoice):
    if userChoice == computerChoice:
        return "It's a tie!"
    elif (userChoice == "rock" and computerChoice == "scissors") or \
        (userChoice == "scissors" and computerChoice == "paper") or \
        (userChoice == "paper" and computerChoice == "rock"):
        return "You win!"
    else:
        return "You Lose!"

def play_game():
    userChoice = get_userChoice()
    computerChoice = get_computerChoice()
    
    print(f"\nYou chose: {userChoice}")
    print(f"Computer chose: {computerChoice}")
    
    result = determine_winner(userChoice, computerChoice)
    print(result)

play_game()
