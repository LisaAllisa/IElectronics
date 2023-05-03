#pragma once
#include "IElectronics.h"

// Класс "Техника для дома"
class Appliances : virtual public IElectronics
{
public:
    Appliances(int weight);
    void Show() override;

protected:
    int(_weight);
};

// Класс "Стиральная машина"
class Washer final: virtual public Appliances
{
public:
    Washer(int weight, int power);
    void Show() override;

protected:
    int(_power);
};

// Класс "Посудомоечная машина"
class Dishwasher final : virtual public Appliances
{
public:
    Dishwasher(int weight, int capacity);
    void Show() override;

protected:
    int(_capacity);
};