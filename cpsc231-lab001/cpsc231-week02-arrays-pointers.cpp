// Author	: Randy Lee
// Date		: January 18, 2017

#include "stdafx.h"
#include <iostream>

using namespace std;

// const ensures that your array size stays fixed
const int NUMBER_OF_SCORES = 2; 

// void keyword = no return
void introduction();

int main()
{	
	introduction();
	int i = 0;
	int temp = 0;
	int score[NUMBER_OF_SCORES];
	score[0] = 100;
	score[1] = 200;

	cout << endl;

	cout << "element 0 - " << score[0] << endl;
	cout << "element 1 - " << score[1] << endl;

	temp = score[i];
	score[i] = score[i + 1]; // pointer changes
	score[i + 1] = temp;

	cout << "temp - " << temp << endl;
	cout << "element 0 - " << score[0] << endl;

	return 0;
}

void introduction()
{
	cout << "Read in two scores and switch the scores." << endl;
}