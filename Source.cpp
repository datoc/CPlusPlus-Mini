#include <iostream>
#include <windows.h>
using namespace std;

#define HEIGHT 23
#define WIDTH 50

int POSX = 1;
int POSY = 1;

bool running = true;
char map[HEIGHT][WIDTH];

int main() {

	while(running = true) {
		system("cls");
		map[POSX][POSY] = static_cast<char>(223);
		for(int i = 0; i < HEIGHT; i++) {
			for(int j = 0; j < WIDTH; j++) {
				if(i == 0 || j == 0 || i == (HEIGHT - 1) || j == (WIDTH - 1)) map[i][j] = '#';
			}
		}

		for(int i = 0; i < HEIGHT; i++) {
			for(int j = 0; j < WIDTH; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}

		system("pause>nul");

		if(GetAsyncKeyState(VK_DOWN)) {
			map[POSX][POSY] = ' ';
			POSX++;
			map[POSX][POSY] = static_cast<char>(223);
			Beep(1000, 6);
		}

		if(GetAsyncKeyState(VK_UP)) {
			map[POSX][POSY] = ' ';
			POSX--;
			map[POSX][POSY] = static_cast<char>(223);
			Beep(1000, 6);
		}

		if(GetAsyncKeyState(VK_RIGHT)) {
			map[POSX][POSY] = ' ';
			POSY++;
			map[POSX][POSY] = static_cast<char>(223);
			Beep(1000, 6);
		}

		if(GetAsyncKeyState(VK_LEFT)) {
			map[POSX][POSY] = ' ';
			POSY--;
			map[POSX][POSY] = static_cast<char>(223);
			Beep(1000, 6);
		}
	}
	return 0;
}