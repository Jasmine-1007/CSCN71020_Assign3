#include <stdio.h>
#include <string.h>
#include "gamecode.h"


char* game(char* Player1, char* Player2) {

	if (strcmp(Player1, "Rock") != 0 && strcmp(Player1, "Paper") != 0 && strcmp(Player1, "Scissors") != 0) {
		return "Invalid";
	}

	if (strcmp(Player2, "Rock") != 0 && strcmp(Player2, "Paper") != 0 && strcmp(Player2, "Scissors") != 0) {
		return "Invalid";
	}

	if (strcmp(Player1, Player2) == 0) {
		return "Draw";
	}

	if ((strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) || (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0)
		|| (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0)) {
		return "Player1";
	}

	else {
		return "Player2";
	}
}

int main() {
	char* round1 = "Rock";
	char* round2 = "Paper";
	game(round1, round2);
}