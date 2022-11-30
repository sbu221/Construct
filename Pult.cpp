#include "Pult.h"
#include <iostream>

using namespace std;

#pragma region Публичные методы
void Pult::NextChannel()
{
	_currentChannel++;
	PrintChannel();
}

void Pult::PrevChannel()
{
	_currentChannel = --_currentChannel < 0 ? 0 : _currentChannel;
	PrintChannel();
}

void Pult::AddVolume()
{
	_currentVolume++;
	PrintVolume();
}

void Pult::RemoveVolume()
{
	_currentVolume = --_currentVolume < 0 ? 0 : _currentVolume;
	PrintVolume();
}

void Pult::SetMute()
{
	if (_isMute)
		cout << R"("Без звука" уже включен!)" << endl;
	else
		_isMute = true;
}

#pragma endregion

#pragma region Приватные методы
void Pult::PrintChannel()
{
	cout << "Вы на " << _currentChannel << " канале" << endl;
}

void Pult::PrintVolume()
{
	cout << "Громкость звука " << _currentVolume << endl;
}
#pragma endregion