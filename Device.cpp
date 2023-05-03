#include "pch.h"
#include "Device.h"


Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}
void Device::Show()
{
    cout << "Время работы батареи: " << _batteryLife << " ч " << endl;
}

//Класс "Плеер" 
Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{

}

void Player::Show()
{
    cout << "Время работы батареи: " << _batteryLife << " ч " << endl;
    cout << "Количесто треков: " << _totalTracks << " шт " << endl;
}

//Класс "Наушники" 
Headphones::Headphones(int batteryLife, string wireless) : Device(batteryLife), _wireless(wireless)
{

}

void Headphones::Show()
{
    cout << "Время работы батареи: " << _batteryLife << " ч " << endl;
    cout << "Проводные или беспроводные наушники: " << _wireless << endl;
}
