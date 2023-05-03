#include "pch.h"
#include "Device.h"


Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}
void Device::Show()
{
    cout << "����� ������ �������: " << _batteryLife << " � " << endl;
}

//����� "�����" 
Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{

}

void Player::Show()
{
    cout << "����� ������ �������: " << _batteryLife << " � " << endl;
    cout << "��������� ������: " << _totalTracks << " �� " << endl;
}

//����� "��������" 
Headphones::Headphones(int batteryLife, string wireless) : Device(batteryLife), _wireless(wireless)
{

}

void Headphones::Show()
{
    cout << "����� ������ �������: " << _batteryLife << " � " << endl;
    cout << "��������� ��� ������������ ��������: " << _wireless << endl;
}
