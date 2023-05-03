#include "pch.h"
#include "Appliances.h"


Appliances::Appliances(int weight) : _weight(weight)
{
}
void Appliances::Show()
{
    cout << "Масса: " << _weight << " кг " << endl;
}

//Класс "Стиральная машина" 
Washer::Washer(int weight, int power) : Appliances(weight), _power(power)
{

}

void Washer::Show()
{
    cout << "Масса: " << _weight << " кг " << endl;
    cout << "Мощность: " << _power << " Вт " << endl;
}

//Класс "Посудомоечная машина" 
Dishwasher::Dishwasher(int weight, int capacity) : Appliances(weight), _capacity(capacity)
{

}

void Dishwasher::Show()
{
    cout << "Масса: " << _weight << " кг " << endl;
    cout << "Емкость: " << _capacity << " л " << endl;
}