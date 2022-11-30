#pragma once
class Pult
{
public:
#pragma region Блок конструкторов
	Pult() : Pult{ 0, 0 } {}
	Pult(int currentChannel) : Pult{ currentChannel, 0 } {}
	Pult(int currentChannel, int currentVolume) :
		_currentChannel{ currentChannel }, _currentVolume{ currentVolume } {}
#pragma endregion
	
#pragma region Блок открытых методов
	void NextChannel();
	void PrevChannel();
	void AddVolume();
	void RemoveVolume();
	void SetMute();
#pragma endregion

private:
	int _currentChannel{};
	int _currentVolume{};
	bool _isMute{ false };

	void PrintChannel();
	void PrintVolume();
};

