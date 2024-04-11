
#include <iostream>

using namespace std;

void display_run(int values[], int size);
bool has_run(int values[], int size);

int main() {

	srand(time(NULL));
	int values[20];

	for (int x = 0; x < 20; x++) values[x] = rand() % 6 + 1;

	if (has_run(values, 20) == true) cout << "has run: ";
	else cout << "no run: ";
	display_run(values, 20);
}

void display_run(int values[], int size) {
	bool is_in_run = false;

	for (int x = 0; x < 20; x++) {

		if (values[x] == values[x + 1] && is_in_run == false) {
			cout << "(" << values[x] << " ";
			is_in_run = true;
		}
		else if (values[x] != values[x + 1] && is_in_run == true) {
			cout << values[x] << ") ";
			is_in_run = false;
		}
		else { cout << values[x] << " "; }
	}

}

bool has_run(int values[], int size) {
	
	for (int x = 0; x < 20; x++) {
		if (values[x] == values[x + 1]) return true;
	} 
	return false;
}