#include <iostream>
#include "Pult.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Pult pult;

	pult.AddVolume();
	pult.RemoveVolume();
	pult.SetMute();
	pult.SetMute();

	pult.PrevChannel();
	pult.NextChannel();
}