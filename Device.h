#pragma once
#include "IElectronics.h"

//Класс "Портативная техника"
class Device : virtual public IElectronics
{
public:
    Device(int batterLife);
//    ~Device();
    void Show() override;

protected:
    int _batteryLife;
};

//Класс "Плеер" 
class Player final : public Device
{
public:
    Player(int batteryLife, int totalTracks);
    void Show() override;

protected:
    int _totalTracks;
};

//Класс "Наушники" 
class Headphones final : public Device
{
public:
    Headphones(int batteryLife, string wireless);
    void Show() override;

protected:
    string _wireless;
};