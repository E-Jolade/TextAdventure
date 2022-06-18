
/*6/18/22 Emmanuel Jolade

Program will take user through a text adventure that I'm creating that will have different branching paths. 
I plan on having there be 3 different decisions being made in total with each decision leading the user down different paths. Thus there will
be at least 3 separate endings. Project will utilize functions so that main function isn't too convoluted.

*/


#include <iostream>
#include <string>

using namespace std;

bool running = true;

int Decision() {
	int input = 0;
	while (running) {
		cin >> input;

		if (input > 2 || input < 0) {
			cout << "Invalid input, try again.\n";
			input = 0;
		}

		if (input == 1) {
			return 1;
		}
		else if (input == 2) {
			return 2;
		}
	}
}

int FinalDecision() {
	int input = 0;
	while (running) {
		cin >> input;

		if (input > 3 || input < 0) {
			cout << "Invalid input, try again.\n";
			input = 0;
		}

		if (input == 1) {
			cout << "Something feels off...\n";
			input = 0;
		}
		else if (input == 2) {
			cout << "Something feels off...\n";
			input = 0;
		}
		else if (input == 3) {
			return 3;
		}
	}
}

void WakeUp() {
	cout << "You get up and do your morning routine. As you grab your car keys and head out the door, you catch a glimpse of something in the corner of your eye. It appears to be in your bedroom. You live alone. What do you do?\n\n";

	cout << "1.) Just go to class, you're just overthinking things.\n";
	cout << "2.) Nah hold on, something's up here.\n";

}

void SomethingsUp() {
	cout << "You close the door and turn around. The thing you thought you saw is gone but you can definitely still feel another presence inside the house. You go back to your bedroom to try and find whoever is there but as you open the door, you start to feel tired...\n\n";
	cout << "You wake up from a deep sleep. The sun is glaring through the window and you immediately check your clock. 9:00am. You know you have class at 10am. What do you do?\n\n";

	cout << "1.) Go back to sleep. 5 more minutes never hurt anybody.\n";
	cout << "2.) Get up now. Gotta make sure you get to school on time.\n";
	cout << "3.) Wait haven't we done this before?\n";
	
}

void GoToClass() {
	cout << "You don't got time for this, you close the door and drive to school. Class was a little dry today but you powered through it and head home. As you pull into the driveway, something feels off. When you grab the door handle, "
		<< "you feel a presence behind the door. What do you do?\n";

	cout << "1.) Call the cops. Somebody is definitely in my house right now.\n";
	cout << "2.) Open the door. I'm confident enough to confront whoever is there.\n";

}

void OpenDoor() {
	cout << "You gather all your courage and open the door. Before you're able to make out who exactly it is, you start to become very sleepy...\n\n";
	cout << "You wake up from a deep sleep. The sun is glaring through the window and you immediately check your clock. 9:00am. You know you have class at 10am. What do you do?\n\n";

	cout << "1.) Go back to sleep. 5 more minutes never hurt anybody.\n";
	cout << "2.) Get up now. Gotta make sure you get to school on time.\n";
	cout << "3.) Wait haven't we done this before?\n";

}

void CallCops() {
	cout << "You go to dial 911 and as you speak to the operator, they tell you that they are sending officers to your home and to not enter the house. You wait about 5 minutes and thankfully 2 police officers show up. They ask for you to stand back, "
		<< "as they open the door. Right when they open the door you start to feel extremely tired...\n\n";
	cout << "You wake up from a deep sleep. The sun is glaring through the window and you immediately check your clock. 9:00am. You know you have class at 10am. What do you do?\n\n";

	cout << "1.) Go back to sleep. 5 more minutes never hurt anybody.\n";
	cout << "2.) Get up now. Gotta make sure you get to school on time.\n";
	cout << "3.) Wait haven't we done this before?\n";

}

void FiveMoreMinutes() {
	cout << "Can't be bothered to get up, you still got time before school anyways. You drift back to sleep...\n";
	cout << "You wake up from a deep sleep. The sun is glaring through the window and you immediately check your clock. 9:00am. You know you have class at 10am. What do you do?\n\n";

	cout << "1.) Go back to sleep. 5 more minutes never hurt anybody.\n";
	cout << "2.) Get up now. Gotta make sure you get to school on time.\n";
	cout << "3.) Wait haven't we done this before?\n";

}

void Ending() {
	cout << "You begin to realize that the same day has been looping over and over.\n You aren't sure as to why but then you notice a camera directly above you.\n You naturally go to turn it off and almost immediately, it feels as if whatever caused the loop has faded."
		<< " Not being sure how the camera got there to begin with, you get rid of it and head to class. Thankfully this time, there was no loop. And you had a great day!\n\n\n";
	cout << "*****THE END*****\n";
}

int main() {

	cout << "************Welcome to The Virtual Text Adventure!************\n\n";
	cout << "You wake up from a deep sleep. The sun is glaring through the window and you immediately check your clock. 9:00am. You know you have class at 10am. What do you do?\n\n";

	cout << "1.) Go back to sleep. 5 more minutes never hurt anybody.\n";
	cout << "2.) Get up now. Gotta make sure you get to school on time.\n";

	Decision();

	if (Decision() == 1) {
		FiveMoreMinutes();
		FinalDecision();
		if (FinalDecision() == 3) {
			Ending();
		}
	}
	if (Decision() == 2) {
		WakeUp();
		Decision();
		if (Decision() == 1) {
			GoToClass();
			Decision();
			if (Decision() == 1) {
				CallCops();
				FinalDecision();
				if (FinalDecision() == 3) {
					Ending();
				}
			}
			if (Decision() == 2) {
				OpenDoor();
				FinalDecision();
				if (FinalDecision() == 3) {
					Ending();
				}
			}
		}
		if (Decision() == 2) {
			SomethingsUp();
			FinalDecision();
			if (FinalDecision() == 3) {
				Ending();
			}
		}
	}

}