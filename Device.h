#pragma once
#include "IElectronics.h"

//����� "����������� �������"
class Device : virtual public IElectronics
{
public:
    Device(int batterLife);
//    ~Device();
    void Show() override;

protected:
    int _batteryLife;
};

//����� "�����" 
class Player final : public Device
{
public:
    Player(int batteryLife, int totalTracks);
    void Show() override;

protected:
    int _totalTracks;
};

//����� "��������" 
class Headphones final : public Device
{
public:
    Headphones(int batteryLife, string wireless);
    void Show() override;

protected:
    string _wireless;
};