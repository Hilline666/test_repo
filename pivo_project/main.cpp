#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

void randWheel(int* arr, const int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % 35 + 10;
	}
}
void showWheel(int* arr, const int size) {
	for (int i = 0; i < size; i++) cout << "------"; cout << endl;
	for (int i = 0; i < size; i++) cout << "| " << *(arr + i) << " |"; cout << endl;
	for (int i = 0; i < size; i++) cout << "------"; cout << endl;
}
void changeWheel(int* arr, const int size) {
	for (int i = 0; i < size; i++) {
		if (i != 4) *(arr + i) = *(arr + i + 1);
		else *(arr + i) = rand() % 35 + 10;
	}
}
void spinWheel(int* arr, const int size) {
	for (int i = 0; i < 15; i++) {
		system("cls");
		changeWheel(arr, size);
		showWheel(arr, size);
		Sleep(125);
	}
	for (int i = 0; i < 10; i++) {
		system("cls");
		changeWheel(arr, size);
		showWheel(arr, size);
		Sleep(250);
	}
	for (int i = 0; i < 5; i++) {
		system("cls");
		changeWheel(arr, size);
		showWheel(arr, size);
		Sleep(500);
	}
	for (int i = 0; i < 3; i++) {
		system("cls");
		changeWheel(arr, size);
		showWheel(arr, size);
		Sleep(1000);
	}
}

void main() {
	const int size = 5;
	int roulette[size];
	randWheel(roulette, size);
	showWheel(roulette, size);
	changeWheel(roulette, size);
	showWheel(roulette, size);
	spinWheel(roulette, size);
}