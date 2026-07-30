#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
bool useArrowKeys = false;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum Direction
{
	STOP = 0,
	LEFT,
	RIGHT,
	UP,
	DOWN
};
Direction dir;

void Setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void Draw()
{
	system("cls");

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";

			if (i == y && j == x)
				cout << "O";
			else if (i == fruitY && j == fruitX)
				cout << "F";
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << "o";
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}

			if (j == width - 1)
				cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;

	cout << "Score: " << score << endl;
}

void Input()
{
	if (_kbhit())
	{
		char key = _getch();

		if (useArrowKeys)
		{
			// Arrow keys send two characters.
			if (key == -32 || key == 224)
			{
				key = _getch();

				switch (key)
				{
				case 72: // Up
					dir = UP;
					break;

				case 80: // Down
					dir = DOWN;
					break;

				case 75: // Left
					dir = LEFT;
					break;

				case 77: // Right
					dir = RIGHT;
					break;
				}
			}

			// Exit
			if (key == 'x' || key == 'X')
				gameOver = true;
		}
		else
		{
			switch (key)
			{
			case 'w':
			case 'W':
				dir = UP;
				break;

			case 's':
			case 'S':
				dir = DOWN;
				break;

			case 'a':
			case 'A':
				dir = LEFT;
				break;

			case 'd':
			case 'D':
				dir = RIGHT;
				break;

			case 'x':
			case 'X':
				gameOver = true;
				break;
			}
		}
	}
}

void Logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;

	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}

	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}

	// Wall collision
	if (x >= width)
		x = 0;
	else if (x < 0)
		x = width - 1;
	if (y >= height)
		y = 0;
	else if (y < 0)
		y = height - 1;

	// Tail collision
	for (int i = 0; i < nTail; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;
	}

	// Eat fruit
	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}
}

int main()
{
	int choice;

	do
	{
		system("CLS");

		cout << "Select Control Method\n";
		cout << "1. WASD Keys\n";
		cout << "2. Arrow Keys\n\n";
		cout << "Enter Choice: ";
		cin >> choice;

		if (choice != 1 && choice != 2)
		{
			cout << "\nInvalid choice! Please enter 1 or 2.";
			cout << "\n\nPress any key to continue...";
			_getch(); // Wait for a key press
		}

	} while (choice != 1 && choice != 2);

	useArrowKeys = (choice == 2);

	Setup();

	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		Sleep(100);
	}

	cout << "Game Over!" << endl;
	cout << "Final Score: " << score << endl;

	return 0;
}
