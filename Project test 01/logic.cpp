#include "logic.h"
int get_dice() {
	return rand() % Max_dice + Min_dice; 
}

string lets_game(int number) {
	string result = "Your score:";
	int sum = 0;
	for (int i = 0; i < number; i++) {
		int dice = get_dice();
		sum += dice;
		result += "\ndice(" + to_string(i + 1) + ") - " + to_string(dice);
	}
	result += "\nTotal sum: " + to_string(sum);
	return result;

}
