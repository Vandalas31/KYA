#include <iostream>
#include <cmath>
#include <unistd.h>
#include <conio.h>
using namespace std;

// Simple tools by Vandalas
// This tools is made to guess your age this years, if you don't know what's your age and only know your born's year.
int main() {
	int y1, y2, result;
	system("Color 9");
	
	sleep(0.5);
	cout << "===============================" << endl;
	sleep(1);
	cout << "===== Know Your Age tools =====" << endl;
	sleep(1.5);
	cout << "===============================" << endl;
	cout << " " << endl;
	
	sleep(1);
	cout << "Lahir tahun berapa? >> ";
	cin >> y1;
	cout << "Sekarang tahun berapa? >> ";
	cin >> y2;
	system("CLS");
	
	result = y2 - y1;
	cout << "umurmu di tahun " << y2 << " adalah " << result << " tahun." << endl;
	cout << " " << endl;
	
	cout << "Press any key to close program";
	getch();
}
