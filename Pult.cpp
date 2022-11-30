#include "Pult.h"
#include <iostream>

using namespace std;

#pragma region ��������� ������
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
		cout << R"("��� �����" ��� �������!)" << endl;
	else
		_isMute = true;
}

#pragma endregion

#pragma region ��������� ������
void Pult::PrintChannel()
{
	cout << "�� �� " << _currentChannel << " ������" << endl;
}

void Pult::PrintVolume()
{
	cout << "��������� ����� " << _currentVolume << endl;
}
#pragma endregion